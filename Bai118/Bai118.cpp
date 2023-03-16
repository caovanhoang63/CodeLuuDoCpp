#include<iostream>
using namespace std;
int main()
{
	int n;
	float at=2,ahh;
	do {
		cout << ":Nhap n: ";
		cin >> n;
	} while (n < 2);
	for (int i = 1; i < n; i++)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		at = ahh;
	}
	cout << ahh;
	return 0;
}