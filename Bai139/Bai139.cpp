#include <iostream>
using namespace std;

int main()
{
	float a, b, x;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
			cout << "Phuong trinh co vo so nghiem.";
		else
			cout << "Phuong trinh vo nghiem.";
	}
	else
	{
		x = -b / a;
		cout << "Nghiem cua phuong trinh x = " << x;
	}
	return 0;
}