#include<iostream>
using namespace std;
int main()
{
	int n, x , t ,m=1;
	float s;
	cout << ":Nhap n: ";
	cin >> n;
	cout << "Nhap x:";
	cin >> x;
	t = x;
	s = 1 + x;
	for (int i = 3; i <= 2 * n + 1; i = i + 2) {
		t = t * x * x;
		m = m * (i - 1) * i;
		s = s + 1.0*t/m;
	}
	cout << s;
	return 0;
}