#include<iostream>
using namespace std;
int main()
{
	int x, y, n;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	n = x;
	while (n<y)
	{
		if (n % 400 == 0||(n%4==0&&n%100!=0))
			cout << n<<endl;
		n = n + 1;
	}
	return 0;
}