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
	float t = x;
	int i = 1;
	while (i <= n) {
		t = sin(t);
		s = s + t;
		i++;
	}
	cout << "s = " << s;
	return 0;
}