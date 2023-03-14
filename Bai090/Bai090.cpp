#include<iostream>
using namespace std;

int main()
{
	int n;
	float x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	int dau = -1;
	while (i <= n) {
		t = t * x;
		m = m * i;
		s = s + dau * t / m;
		i++;
		dau = -dau;
	}
	cout << "s = " << s;
	return 0;
}