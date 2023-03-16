#include<iostream>
using namespace std;
int main()
{
	int n,d,dem=0,dv;
	cout << "Nhap n:";
	cin >> n;
	int t = n;
	while (t != 0)
	{
		d = t % 10;
		t = t / 10;
	}
	t = n;
	while (t!=0)
	{
		dv = t % 10;
		if (dv == d)
			dem++;
		t = t / 10;
	}
	cout << "So chu so dau tien la: " << dem;
	return 0;
}