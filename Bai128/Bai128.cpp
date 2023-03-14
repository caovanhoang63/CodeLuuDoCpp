#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "So a la: " << a << endl << "So b la: " << b;
	return 1;
}