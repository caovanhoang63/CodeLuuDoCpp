#include <iostream>
using namespace std;

int main()
{
	int n, flag = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (i * i == n)
			flag = 1;
	}
	if (flag)
		cout << n << " la so chinh phuong.";
	else
		cout << n << " khong la so chinh phuong.";
	return 0;
}