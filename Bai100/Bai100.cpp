#include<iostream>
using namespace std;
int main()
{
	int n,t=1;
	float s = 0;
	cout << ":Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		t = t * i;
		s = pow(s + t, 1.0/(i + 1));
	}
	cout << s;
	return 0;
}