#include <iostream>
using namespace std;

int main()
{
	int n, flag = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = n; i != 0; i /= 10)
	{
		int dv = i % 10;
		if (dv % 2)
			flag = 1;
	}
	if (flag)
	{
		cout << "So " << n << " co ton tai chu so le.";
		return 0;
	}
	cout << "So " << n << " khong ton tai chu so le.";
	return 0;
}