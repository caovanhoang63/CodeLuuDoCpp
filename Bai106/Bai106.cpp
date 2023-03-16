#include<iostream>
using namespace std;
int giaithua(int n)
{
	if (n == 1)
		return 1;
	else return giaithua(n - 1) * n;
}
int main()
{
	float s=0, e=1,x;
	int i=1,m=1,t,dau=1;
	cout << "Nhap x:";
	cin >> x;
	t = x;
	while (abs(e)>=pow(10,-6))
	{
		t = t*x*x;
		e = (float)t / giaithua(i);
		s = s + dau*e;
		dau = -dau;
		i = i + 2;
	}
	cout << s;
	return 0;
}