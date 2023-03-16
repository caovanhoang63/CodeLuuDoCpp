#include<iostream>
using namespace std;
int main()
{
	int n;
	float s=0;
	cout << ":Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++ ) {
		s = sqrt(s+i);
	}
	cout << s;
	return 0;
}