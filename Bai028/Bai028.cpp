#include<iostream>
using namespace std;

int main()
{
	int n,s=0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i=0;i<n+1;i++) 
	{
		s = s + i * i;
	}
	cout <<"Tong cac luy thua tu 0 den n la: "<< s;
	return 0;
}