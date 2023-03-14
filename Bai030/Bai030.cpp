#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float i = 1;
	while (i <= n) {
		s = s + 1 / (2 * i);
		i++;
	}
	cout << "s = " << s;
	return 0;
}