#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= n) {
		ahh = 5 * at + sqrt(24 * at * at - 8);
		at = ahh;
		i++;
	}
	cout << "ahh = " << ahh;
	return 0;
}