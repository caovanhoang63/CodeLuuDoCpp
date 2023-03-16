#include<iostream>
using namespace std;
int main()
{
	int n, dem = 0;
	cout << ":Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n;i++) 
	{
		if (n % i == 0)
			dem++;
	}
	cout << "So uoc so cua n la: " << dem;
	return 0;
}