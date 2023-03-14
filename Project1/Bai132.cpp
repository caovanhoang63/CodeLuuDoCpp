#include<iostream>
using namespace std;

int main() {
	float xa, ya, xb, yb, xc, yc, xm, ym;
	float Sabc = 1.0 / 2 * (xa * yb + xb * yc + xc * ya - ya * xb - yb * xc - yc * xa);
	float Smab = 1.0 / 2 * (xa * yb + xb * ym + xm * ya - ya * xb - yb * xm - ym * xa);
	float Smac = 1.0 / 2 * (xa * ym + xm * yc + xc * ya - ya * xm - ym * xc - yc * xa);
	float Smbc = 1.0 / 2 * (xm * yb + xb * yc + xc * ym - ym * xb - yb * xc - yc * xm);
	float S = Smab + Smac + Smbc;
	if (S == Sabc)
		cout << "M o trong tam giac ABC";
	else
		cout << "M nam ngoai tam giac ABC";
	return 0;
}