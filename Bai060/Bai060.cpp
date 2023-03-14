#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int s = 1;
	while (t != 0) {
		int dv = t % 10;
		s = s * dv;
		t = t / 10;
	}
	cout << "s = " << s;
	return 0;
}