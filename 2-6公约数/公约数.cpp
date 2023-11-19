#include<iostream>
using namespace std;



int main()
{
	int a, b,c;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	int temp = a;

	while (temp % b != 0)
	{
		temp += a;
	}
	cout << "最小公倍数为" << temp << endl;
	cout << "最大公约数为" << a * b / temp << endl;

}