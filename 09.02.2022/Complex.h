#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
struct Complex 
{
	double re = 0;
	double im = 0;
	Complex sum(Complex n1);
	Complex razn(Complex n1);
	Complex umn(Complex n1);
	void del(Complex n1);
	void print();
	double mod();
	bool compare(Complex n1);
};

#endif