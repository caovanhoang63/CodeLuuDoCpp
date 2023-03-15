#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//int n;
	//cout << "Nhap n: ";
	//cin >> n;
	float s = 1, e = 1;
	for (int i = 3; e >= pow(10, -6); i += 2)
	{
		e = (float)1 / i;
		s = s + e;
	}
	cout << "s = " << s;
	return 0;
}