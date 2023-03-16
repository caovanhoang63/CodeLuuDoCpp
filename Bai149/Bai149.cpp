#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cout << "Nhap vao hai so a va b: ";
	cin >> a >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0) {
		if (m > n)
			m = m - n;
		else
			n = n - m;

	}
	int UCLN = m + n;
	cout << "\nUoc chung lon nhat cua a va b la: " << UCLN;

	return 0;

}