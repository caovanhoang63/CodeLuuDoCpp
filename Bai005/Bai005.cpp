#include <iostream>
#include <cmath>
using namespace std;
int main() {

	float r;
	cout << "\nNhap vao r: ";
	cin >> r;
	float V;
	V = 4 * 3.14 * r * r * r / 3;
	cout << "\nThe tich la: " << V;
	return 0;
}