#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "请输入一个算式 : " << endl;
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
			cout << "错误的式子，没有意义 ." << endl;
		else
			cout << a << " / " << b << " = " << a / b << endl; break; }
	default: cout << "请输入一个正确的算式 ." << endl; break;
	}

	return 0;
}

	