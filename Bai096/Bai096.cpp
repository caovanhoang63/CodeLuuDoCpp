#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n) {
		t = t * i;
		s = sqrt(s + t);
		i++;
	}
	cout << "s = " << s;
	return 0;
}