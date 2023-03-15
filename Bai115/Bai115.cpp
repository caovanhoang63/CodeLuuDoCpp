#include <iostream>
using namespace std;

int main()
{
	int n, at = 3, att = -1, ahh = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		ahh = 5 * at + 6 * att;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " cua day la: " << ahh;
	return 0;
}