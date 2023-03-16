#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x;
	cout << "Nhap vao gia tri bien x: ";
	cin >> x;
	float fx;
	if (x >= 5)
		fx = 2 * x * x + 5 * x + 9;
	else
		fx = -2 * x * x + 4 * x - 9;
	cout << "\nGia tri cua fx la: " << fx;
	return 0;
}