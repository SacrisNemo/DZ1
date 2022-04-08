#include <iostream>
#include "Complex.h"
#include <fstream>
int main()
{
	ifstream f; 
	f.open("C:\\Users\\azama\\source\\repos\\09.02.2022\\complex.txt");
	int n;
	f >> n;
	Complex* arr = new Complex[n];
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		Complex a;
		f >> a.re;
		f >> a.im;
		arr[i] = a;
		if (arr[i].mod() > max) max = arr[i].mod();
	}
	// proverka
}