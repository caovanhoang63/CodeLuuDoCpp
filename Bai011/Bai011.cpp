#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int x1, y1, x2, y2, x3, y3;
	cout << "\nNhap vao toa do diem A: ";
	cin >> x1 >> y1;
	cout << "\nNhap vao toa do diem B: ";
	cin >> x2 >> y2;
	cout << "\nNhap vao toa do diem C: ";
	cin >> x3 >> y3;
	float a = sqrt(pow((x3 - x2), 2) + pow(y3 - y2, 2));
	float b = sqrt(pow((x3 - x1), 2) + pow(y3 - y1, 2));
	float c = sqrt(pow((x2 - x1), 2) + pow(y2 - y1, 2));
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "\nDien tich tam giac ABC la: " << s;
	return 0;
}