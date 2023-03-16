#include<iostream>
using namespace std;
const float Pi = 3.14;
int main()
{
	float r,s;
	cout << "Nhap r: ";
	cin >> r;
	s = 4 * Pi * r * r;
	cout << "Dien tich xung quanh la: " << s;
	return 0;
}