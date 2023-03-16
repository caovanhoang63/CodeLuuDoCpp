#include<iostream>
using namespace std;
int main()
{
	int n,dem=0;
	cout << "Nhap n:";
	cin >> n;
	int t = n;
	while (t!=0)
	{
		t = t / 2;
		dem++;
	}
	cout << "k=" << dem++;
	return 0;
}