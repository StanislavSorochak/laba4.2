// Lab_04_2.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 4.2
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = x;
		if (x <= -1.0)
			B = log10(abs(cos(5.0 * x))) + exp((1.0 / x) + x);
		else
			if (-1.0 < x && x < -0, 4)
				B = sqrt(pow(2.0 - x, 3)) - tan(x);
			else
				B = sin(5.0 * x) - sqrt(abs(1.0 - x));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << y
			<< "     |" << endl;
		x += dx;
	}
	cout << "--------------------------- " << endl;

	return 0;
}
