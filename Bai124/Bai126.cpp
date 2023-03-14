#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int lc = a;
	if (lc < b)
		lc = b;
	cout << "lc = " << lc;
	return 0;
}