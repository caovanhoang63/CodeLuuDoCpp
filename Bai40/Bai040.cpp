#include<iostream>
using namespace std;

int main()
{
	int n, s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n + 1; i++)
	{
		s = s + i * (i+1);
	}
	cout << "Tong: " << s;
	return 0;
}