#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int flag = 0;
	while (t != 0) {
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
	return 0;
}