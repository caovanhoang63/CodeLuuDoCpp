#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap nam: ";
	cin >> n;


	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		cout << "Nam nhuan";
	else
		cout << "Nam khong nhuan";
	return 1;
}