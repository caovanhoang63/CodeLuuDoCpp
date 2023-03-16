#include<iostream>
using namespace std;
int main()
{
	float i = 1, s =4.0-1.0/2-1.0/5-1.0/6;
	int t = 1;
	float e = s;
	while (abs(e)>=pow(10,-6))
	{
		t = t * 16;
		e = (4/(8*i+1)-2/(8*i+4)-1/(8*i+5)-1/(8*i+6)) / t;
		s = s + e;
		i++;
	}
	cout << s;
	return 0;
}