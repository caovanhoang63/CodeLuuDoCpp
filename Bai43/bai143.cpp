#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	while (i < n) {
		if (n % i == 0)
			s = s + i;
		i = i + 1;

	}
	if (s == n)
		cout << "\nn la so hoan thien!!";
	else
		cout << "\nn khong la so hoan thien!!";
	return 0;

}