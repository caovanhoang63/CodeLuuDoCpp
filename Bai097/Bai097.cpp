#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	float x, t = 1, s = 0;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s = sqrt(t + s);
	}
	cout << "s(" << x << "," << n << ") = " << s;
	return 0;
}