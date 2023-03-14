#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int x = a;
	int y = b;
	while (x != y) {
		if (x > y)
			y = y + b;
		else
			x = x + a;
	}
	cout << x;
	return 0;
}