#include <iostream>
using namespace std;

int main()
{
	int n, dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = n; i != 0; i /= 10)
	{
		int dv = i % 10;
		if (dv % 2)
			dem++;
	}
	cout << "So luong chu so le cua " << n << " la: " << dem;
	return 0;
}