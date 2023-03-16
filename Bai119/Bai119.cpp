#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao n: ";
	cin >> n;
	int at = 2;
	int i = 2;
	float ahh;
	while (i <= n) {
		ahh = (float)(at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	cout << "\nGia tri cua so hang thu n la: " << ahh;
	return 0;

}