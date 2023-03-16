#include<iostream>
using namespace std;
int main()
{
	int n,dn=0,t;
	cout << "Nhap n:";
	cin >> n;
	t = n;
	while (t!=0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}

	cout<<"So dao nguoc cua n la: " << dn;
	return 0;
}