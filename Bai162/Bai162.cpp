#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int k = 0;
	while (s >= 0) {
		k = k + 1;
		s = n - pow(2, k);
	}
	cout << "k = " << k;
	return 0;
}