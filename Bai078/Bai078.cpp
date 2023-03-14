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
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n) {
		t = t * x;
		s = s + t;
		i = i + 1;
	}
	cout << "s = " << s;
	return 0;
}