#include <iostream>
using namespace std;

int main()
{
	int n, s = 0, t = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = s + t * i;
	}
	cout << "s(" << n << ") = " << s;
	return 0;
}