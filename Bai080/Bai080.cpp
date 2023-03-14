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
	float s = 1;
	float t = 1;
	int i = 2;
	while (i <= n + 1)
	{
		t = t * x;
		s = s + t * i;
		i = i + 1;
	}
	cout << "S(" << x << "," << n << ")=" << s;
	return 1;
}