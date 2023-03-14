#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = -2;
	int t = 3;
	int z = 7;
	int i = 2;
	int ahh;
	while (i <= n) {
		t = t * 3;
		z = z * 7;
		ahh = 5 * at + 2 * t - 6 * z + 12;
		at = ahh;
		i++;
	}
	cout << "ahh = " << ahh;
	return 0;
}