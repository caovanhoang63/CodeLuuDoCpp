#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float m = 0;
	int i = 1;
	while (i <= n) {
		m = m + i;
		s = s + 1 / m;
		i = i + 1;
	}
	cout << "s = " << s;
	return 0;
}