#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x6 = x4 * x2;
	cout << "Xuat x6 = " << x6;
	return 0;
}