// PortLpt1.cpp: implementation of the CPortLpt1 class.
//
//////////////////////////////////////////////////////////////////////

#include "PortLpt.h"
#include <unistd.h>

#include <sys/types.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <linux/ppdev.h>
#include <linux/parport.h>
#include <stdlib.h>
#include <fcntl.h>
#include <QDebug>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

PortLpt::PortLpt()
{
	initialiser();
}

PortLpt::~PortLpt()
{
	if (Open==0)
		close(fd);

}

short PortLpt::initialiser()
{
	qDebug()<< "tentative ouverture de port";
	fd=open("/dev/parport0",O_RDWR);

  if(fd<0){
      qDebug()<< "Erreur ouverture de port"; // écrire à l'écran
      Open=-1;
      return -1;
      }
      else if (ioctl(fd,PPCLAIM)<0)
      {
    	  qDebug() <<"PPCLAIM ioctl erreur";
    	  close(fd);
    	  Open=-2;
    	  return -2;
      }
  	  qDebug() << "port ouvert;";
      Open= 0;
     valout=0;
     this->ecrireReg(valout);
	return 0;
}


unsigned char PortLpt::lireReg(bool entree)
{
  unsigned char status;
  struct ppdev_frob_struct frob;
   frob.mask = PARPORT_CONTROL_STROBE;  /* change only this pin ! */

  if (entree)
  {
	     frob.val = PARPORT_CONTROL_STROBE;  /* set STROBE PIN... */

	     fflush(stdout);
	     ioctl(fd, PPFCONTROL, &frob);

  }
  else{
	     frob.val = 0;  /* set STROBE PIN... */

	     fflush(stdout);
	     ioctl(fd, PPFCONTROL, &frob);

  }

  ioctl(fd,PPRSTATUS,&status);
// ioctl(fd,PPRCONTROL,&status);
  return status;
//	return DlPortReadPortUchar(adresse+num);
}


void PortLpt::ecrireReg(unsigned char val)
{
  ioctl(fd,PPWDATA,&val);
  valout=val;
}

void PortLpt::setLSB4(unsigned char val){
	val=val&0xf;
	valout=valout&0xF0;
	valout=valout|val;
	this->ecrireReg(valout);
}

void PortLpt::setBit(unsigned char bit,bool val)
{
 // unsigned char valout;
  
	if (val==0)
		valout&=~bit;
	else
		valout|=bit;
	this->ecrireReg(valout);
	
}


bool PortLpt::getBit(unsigned char bit,bool entree)
{
	valin=this->lireReg(entree);
	if ((valin&bit)==0)
		return false;
	else
		return true;
	
}
