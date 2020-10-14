// PortLpt1.h: interface for the CPortLpt1 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PORTLPT1_H__32770061_E0C0_11D5_BBB9_97A41A0FC79E__INCLUDED_)
#define AFX_PORTLPT1_H__32770061_E0C0_11D5_BBB9_97A41A0FC79E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class PortLpt
{
short Open;
unsigned char valout,valin;
int fd;

public:
	short initialiser();
	unsigned char lireReg(bool entree);
	void ecrireReg(unsigned char status);
	void setLSB4(unsigned char val);
	void setBit(unsigned char bit,bool val);
	bool getBit(unsigned char bit,bool entree);
	PortLpt();
	virtual ~PortLpt();

};

#endif // !defined(AFX_PORTLPT1_H__32770061_E0C0_11D5_BBB9_97A41A0FC79E__INCLUDED_)
