#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || c + b <= a)
	{
		cout << "该三角形不是三角形" << endl;
	}
	else if (a == b || b == c || a == c)
	{
		cout << "该三角形是等腰三角形" << endl;
	}
	else
	{
		cout << "该三角形不是等腰三角形" << endl;

	}
}