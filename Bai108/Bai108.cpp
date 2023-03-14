#include<iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	float t = 1;
	float m = 1;
	float e = 1;
	float i = 1;
	while (e <= 1.0 / 1000000) {
		t = t * x;
		m = m * i;
		e = t / m;
		s = s + e;
		i++;
	}
	cout << "s = " << s;
	return 0;
}