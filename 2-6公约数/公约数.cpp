#include<iostream>
using namespace std;



int main()
{
	int a, b,c;
	cout << "��������������" << endl;
	cin >> a >> b;
	int temp = a;

	while (temp % b != 0)
	{
		temp += a;
	}
	cout << "��С������Ϊ" << temp << endl;
	cout << "���Լ��Ϊ" << a * b / temp << endl;

}