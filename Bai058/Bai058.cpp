#include<iostream>
using namespace std;
int main()
{
	int n, s = 0,dv;
	cout << ":Nhap n: ";
	cin >> n;
	int t = n;
	do 
	{
		dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	while (t != 0);
	cout << "Tong cac chu so cua n:" << s;
	return 0;
}