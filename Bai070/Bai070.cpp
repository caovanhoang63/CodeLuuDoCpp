#include<iostream>
using namespace std;
int main()
{
	int n, x, s = 0, t, m;
	cout << ":Nhap n: ";
	cin >> n;
	cout << "Nhap x:";
	cin >> x;
	t = 1;
	for (int i = 2; i < 2 * n + 1; i = i + 2) {
		t = t * x * x;
		s = s + t;
	}
	cout << s;
	return 0;
}