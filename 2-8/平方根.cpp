#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "������a��ֵ" << endl;
	cin >> a;
	double i = a;
	double j = (i + a / i) / 2;
	for (i, j; abs(j - i) >= 10e-5; i = j, j = (i + a / i) / 2) {}
	cout << "a��ƽ���� Ϊ"<< j << endl;
	return 0;
}