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
	float m = 1;
	int  i = 0;
	while (i <= n)
	{
		m *= (x + i);
		s += 1 / m;
		i++;
	}
	cout << "S(" << n << ") = " << s;
	return 0;
}