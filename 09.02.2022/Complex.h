#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <vector>

struct Complex
{
	double re;
	double im;
	Complex();
	Complex(double, double);
	Complex(int, int);
	void set(double, double);
	void set(int, int);
	Complex sum(Complex n1);
	Complex razn(Complex n1);
	Complex umn(Complex n1);
	void del(Complex n1);
	void print();
	double mod();
	bool compare(Complex n1);
	~Complex();
};


#endif