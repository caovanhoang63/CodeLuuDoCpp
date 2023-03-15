#include <iostream>
using namespace std;

int main()
{
	int n, flag = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int t = n; t > 1; t /= 2)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
	}
	if (flag)
		cout << n << " co dang 2^m.";
	else
		cout << n << " khong co dang 2^m.";
	return 0;
}