#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = 1;
	int m = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + t / m;
		i = i + 1;
	}
	cout << "S(" << x << "," << n << ")=" << s;
	return 1;
}