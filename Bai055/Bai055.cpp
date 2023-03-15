#include <iostream>
using namespace std;

int main()
{
	int n, t = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
			t = t * i;
	}
	cout << "t = " << t;
	return 0;
}