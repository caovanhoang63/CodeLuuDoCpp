#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)1 / i;
		cout << "a(" << i << ") = " << s << "  ";
	}
	return 0;
}