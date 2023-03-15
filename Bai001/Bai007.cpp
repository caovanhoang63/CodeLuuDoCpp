#include <iostream>
using namespace std;

int main()
{
	float doF;
	cout << "Nhap do F: ";
	cin >> doF;
	float doC = (float)5 / 9 * (doF - 32);
	cout << "Do C la: " << doC;
	return 0;
}