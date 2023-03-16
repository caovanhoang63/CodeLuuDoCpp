#include<iostream>
using namespace std;
int main()
{
	int n, dv = 0, t,flag=1;
	cout << "Nhap n:";
	cin >> n;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag==1)
		cout << n << " toan chan";
	else cout << n << " khong toan chan";
	return 0;
}