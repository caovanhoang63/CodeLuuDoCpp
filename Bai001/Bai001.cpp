#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, y1, x2, y2;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Khoang cach giua hai diem la: " << d;
	return 0;
}