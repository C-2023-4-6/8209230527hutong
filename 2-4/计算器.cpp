#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "������һ����ʽ : " << endl;
	cin >> a;
	cin >> c;
	cin >> b;
	switch (c)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '%': cout << a << " % " << b << " = " << a % b << endl; break;
	case '/': {
		if (b == 0)
			cout << "�����ʽ�ӣ�û������ ." << endl;
		else
			cout << a << " / " << b << " = " << a / b << endl; break; }
	default: cout << "������һ����ȷ����ʽ ." << endl; break;
	}

	return 0;
}

	