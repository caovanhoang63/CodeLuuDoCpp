#include<iostream>
using namespace std;

int main() {
	int n;
	float x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	float s = x;
	float i = 1;
	while (i <= n) {
		s = s * (x + i);
		i++;
	}
	cout << "s = " << s;
	return 0;
}