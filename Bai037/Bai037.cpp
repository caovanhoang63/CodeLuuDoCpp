#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		s = s + pow(i, 3);
	cout << "s = " << s;
	return 0;
}