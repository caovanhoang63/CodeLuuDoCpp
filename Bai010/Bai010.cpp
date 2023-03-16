#include<iostream>
#include<math.h>
using namespace std;
struct point {
	int x;
	int y;
};
void nhap(point &a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
float perimeter(point a,point b, point c)
{
	float a1,b1,c1,p;
	a1 = sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
	b1 = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
	c1 = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	p = a1 + b1 + c1;
	return p;
}
int main()
{
	point a, b, c;
	nhap(a);
	nhap(b);
	nhap(c);
	cout << "Chu vi tam giac la: " << perimeter(a, b, c);
	return 0;
}