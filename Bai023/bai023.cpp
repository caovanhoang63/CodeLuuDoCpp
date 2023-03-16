#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	int hc = (n / 10) % 10;
	cout << "\nChu so hang chuc cua so nguyen n la: " << hc;
	return 0;
}