#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, x;
	float s,t;
	cout << ":Nhap n: ";
	cin >> n;
	cout << "Nhap x:";
	cin >> x;
	s = sin(x);
	t = sin(x);
	for (int i = 2; i <=n; i = i + 2) {
		t = t * sin(x);
		s = s + t;
	}
	cout << s;
	return 0;
}