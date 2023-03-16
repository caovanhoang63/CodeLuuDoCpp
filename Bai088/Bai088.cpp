#include<iostream>
using namespace std;
int main()
{
	int n, m=0,dau=1;
	float s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i=1; i <= n; i++)
	{
		m = m + i;

		s = s + dau * 1.0 / m;
		dau = -dau;
	}	
	cout << s;
	return 0;
}