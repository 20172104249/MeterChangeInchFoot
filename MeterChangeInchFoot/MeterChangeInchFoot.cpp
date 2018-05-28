// MeterChangeInchFoot.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

class CHeight
{
private:
	double inch;
	int foot;
public:
	int meter;
	int i;
	void setadd(int feet, double inchs)
	{

		inch = inchs + inch;
		foot = feet + foot;
		i = inch / 12;
		foot = foot + i;
		inch = inch - i * 12;
	}
	void setmeter(double meter)
	{
		foot = meter*3.2808399;
		inch = (meter*3.2808399 - int(meter*3.2808399)) * 12;
	}

	void display()
	{
		cout << foot << " foot " << setprecision(6) << inch << " inch " << endl;
	}
};


int main()
{
	CHeight or ;
	or .setmeter(10);
	or .setadd(10, 20);
	or .display();
	return 0;
}
