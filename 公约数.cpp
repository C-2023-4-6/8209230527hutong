#include<iostream>
using namespace std;
int swap(int a, int b)
{
	int temp = a;
	while (temp % b != 0)
	{
		temp += a;
	}
	cout << "��С������Ϊ"<<temp << endl;
	cout << "�������Ϊ" << a * b / temp;
	return temp;
}
int main()
{
	int num1, num2;
	cout << "��������������" << endl;
	cin >> num1 >> num2;
	swap(num1, num2);
	system("pause");
	return 0;
}