#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float at = 2;
	float bt = 1;
	float ahh = 0;
	float bhh = 0;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang an la: " << ahh << endl << "So hang bn la: " << bhh;
	return 1;
}