#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	int i = 0;
	int ai;
	cout << "Day gia tri can tinh la: ";
	while (i <= n)
	{
		ai = pow(2, i + 1);
		cout << ai << " ";
		i = i + 1;
	}
	return 0;

}