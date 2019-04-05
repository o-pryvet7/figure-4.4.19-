#pragma once
#include"Fig.h"

class circle : public figure
{
private:
	double R;
public:
	circle();
	void Inp(); void Prt();
	double Sqare();
};

