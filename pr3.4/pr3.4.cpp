// pr3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// <Коровицький Тарас >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R1; // вхідний аргумент
	double R2; // вхідний аргумент
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	// розгалуження в повній формі
	if ((y >= sqrt(R2*R2-x*x) && y>=0 && x<=0) ||
		(y <= sqrt((R1-R2) * (R1-R2) - (x * x)) && y <= 0 && x >= 0))
		cout << "yes" << endl;
	else
		
		cout << "no" << endl;
	cin.get();
	return 0;
}
