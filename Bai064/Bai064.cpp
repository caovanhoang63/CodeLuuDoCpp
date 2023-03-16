#include<iostream>
using namespace std;
int main()
{
	int n, dv,lc;
	cout << ":Nhap n: ";
	cin >> n;
	lc = n % 10;
	int t = n;
	do
	{
		dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	} while (t != 0);
	cout << "Chu so lon nhat cua n:" << lc;
	return 0;
}