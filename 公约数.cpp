#include<iostream>
using namespace std;
int swap(int a, int b)
{
	int temp = a;
	while (temp % b != 0)
	{
		temp += a;
	}
	cout << "最小公倍数为"<<temp << endl;
	cout << "最大公因数为" << a * b / temp;
	return temp;
}
int main()
{
	int num1, num2;
	cout << "请输入两个整数" << endl;
	cin >> num1 >> num2;
	swap(num1, num2);
	system("pause");
	return 0;
}