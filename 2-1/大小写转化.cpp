#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�" << endl;
	cin >> a;
	if ((int)a >=97)
	{
		a = toupper(a);
		cout << a << endl;
		
	}
	else
	{
		cout << (int)a << endl;
	}
		
}//toupper