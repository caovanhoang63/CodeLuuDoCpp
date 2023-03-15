#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	float x13 = x12 * x;
	cout << "x^13 = " << x13;
	return 0;
}