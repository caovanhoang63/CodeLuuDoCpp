#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a = 1;
	int i = 1;
	while (i <= n) {
		a = a * i;
		cout << a << ",";
		i++;
	}
	return 0;
}