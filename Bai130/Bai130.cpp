#include<iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	cout << "Nhap z: "; cin >> z;
	if (x + y > z && x + z > y && y + z > x)
		cout << "Ton tai tam giac voi 3 canh: " << x << "," << y << "," << z;
	else cout << "Khong ton tai tam giac voi 3 canh: " << x << "," << y << "," << z;
	return 0;
}