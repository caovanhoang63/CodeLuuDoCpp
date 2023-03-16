#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	int t = abs(n);
	int dn = t % 10;
	int flag = 1;
	while (t != 0) {
		int dv = (t / 10) % 10;
		if (dv > dn)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "n gom cac chu so tang dan!!!";
	else
		cout << "n khong gom cac chu so tang dan!!!";
	return 0;

}