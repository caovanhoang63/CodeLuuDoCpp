#include<iostream>
using namespace std;
int main()
{
	int n;
	float s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (float i=1;i<n+1;i++)
	{
		s = s + 1.0 / ((i+1)*sqrt(i) + i * sqrt(i + 1));
	}
	cout << "Tong= " << s;
	return 0;
}