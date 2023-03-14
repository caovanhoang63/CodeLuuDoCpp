#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int t = 2;
	int i = 1;
	while (i <= x) {
		t = t * x;
		i++;
	}
	cout << "t = " << t;
	return 0;
}