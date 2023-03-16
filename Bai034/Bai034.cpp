#include<iostream>
using namespace std;

int main()
{
	int n ;
	float s = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (float i = 0; i<2*n+1;i=i+2)
	{
		s = s + (i+1)/(i+2);
		
	}
	cout << s;
	return 0;
}