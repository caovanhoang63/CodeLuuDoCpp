#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int a = n;
	while (a>1)
	{
		if (a % 2 != 0)
			a = 3 * a + 1;
		else a = a / 2;
		cout << a<<",";
	}
	return 0;
}