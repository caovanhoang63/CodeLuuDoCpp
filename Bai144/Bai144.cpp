#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n) {
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "La so NT";
	else
		cout << "Khong la so NT";
	return 0;
}