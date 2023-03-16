#include<iostream>
using namespace std;
int main()
{
	int n;
	float at = 2, ahh,bt=1,bhh;
	do {
		cout << ":Nhap n: ";
		cin >> n;
	} while (n < 2);
	for (int i = 1; i < n; i++)
	{
		ahh = pow(at,2)+2*pow(bt,2);
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	cout<< "a" <<n<<"=" << ahh << endl;
	cout<< "b"<<n<<"=" << bhh ;
	return 0;
}