#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a = 0;
	float b = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	cout <<fixed <<setprecision(2) << b << endl;

}