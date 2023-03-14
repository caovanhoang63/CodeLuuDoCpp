#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;
	int c;
	cout << "Nhap c: ";
	cin >> c;
	float x0, x1, x2;

	int d = b * b - 4 * a * c;

	if (d <= 0)
	{
		if (d == 0)
		{
			x0 = -b / 2 * a;
			cout << "Nghiem kep la: " << x0;
		}
		else
			cout << "Vo nghiem";
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Nghiem 1 la: " << x1 << endl << "Nghiem 2 la: " << x2;
	}
	return 1;
}