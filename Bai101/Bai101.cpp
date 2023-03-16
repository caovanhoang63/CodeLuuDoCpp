#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	float s = 0;
	float e = 1;
	int i = 1;
	cout << setprecision(8);
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 1;

	}
	cout << "Gia tri cua bieu thuc can tim la: " << s;
	return 0;

}