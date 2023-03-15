#include <iostream>
using namespace std;

int main()
{
	int n, att = 1, at = 1, ahh = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		ahh = at + att;
		att = at;
		at = ahh;
	}
	cout << "f(" << n << ") = " << ahh;
	return 0;
}