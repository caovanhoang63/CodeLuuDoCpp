#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	float s = 0;
	float i = 1;
	while (i <= n) {
		s = s + 1 / (i * (i + 1));
		i++;
	}
	cout << "s = " << s;
	return 0;
}