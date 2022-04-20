#include "Complex.h"
Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex::Complex(double x, double y)
{
	this->re = x;
	this->im = y;
}

Complex::Complex(int x, int y)
{
	this->re = x;
	this->im = y;
}

Complex::Complex(const Complex& other)
{
	this->re = other.re;
	this->im = other.im;
}

void Complex::set(double re, double im)
{
	this->re = re;
	this->im = im;
}

void Complex::set(int re, int im)
{
	this->re = re;
	this->im = im;
}

Complex Complex::sum(Complex n1)
{
	return Complex{ n1.re + this->re,n1.im + this->im };
}

Complex Complex::razn(Complex n1)
{
	return Complex{ this->re - n1.re, this->im - n1.im };
}

Complex Complex::umn(Complex n1)
{
	return Complex{ this->re * n1.re - this->im * n1.im, this->re * n1.im + this->im * n1.re };
}

void Complex::del(Complex n1)
{
	std::cout << (this->re * n1.re + this->im * n1.im) / (n1.re * n1.re + n1.im * n1.im) << " i" << (n1.re * this->im - this->re * n1.im);
}

void Complex::print()
{
	std::cout << this->re << " +i" << this->im;
}

double Complex::mod()
{
	return sqrt(this->re * this->re + this->im * this->im);
}

bool Complex::compare(Complex n1)
{
	if (this->mod() > n1.mod()) return true;
	else return false;
}

Complex::~Complex()
{
}