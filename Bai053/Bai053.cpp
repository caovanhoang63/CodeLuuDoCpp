#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so nguyen n: ";
	cin >> n;
	int i = 1;
	cout << "\nTat ca cac uoc so le cua n la: ";
	while (i <= n) {
		if (n % i == 0)
			cout << "\n" << i;
		i = i + 2;
	}

	return 0;

}