#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float e = 0.5;
	int i = 2;
	while (e <= 1.0 / 1000000) {
		e = 1 / i;
		s = s + e;
		i = i + 2;
	}
	cout << "s = " << s;
	return 0;
}