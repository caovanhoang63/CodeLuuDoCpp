#include <iostream>
using namespace std;

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	x = abs(x);
	y = abs(y);
	z = abs(z);
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
			cout << "Tam giac deu";
		else
		{
			if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
			{
				if (x == y || x == z || y == z)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (x == y || y == z || x == z)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
		}
	}
	else
		cout << "Khong phai tam giac";
	return 0;
}