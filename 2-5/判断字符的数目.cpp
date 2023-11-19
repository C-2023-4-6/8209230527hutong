#include<iostream>
using namespace std;
int main() {
	int letter = 0, space = 0, num = 0, other = 0;
	char ch;
	cin >> ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')letter++;
		else if (ch == ' ')space++;
		else if (ch >= '0' && ch <= '9')num++;
		else other++;

	}
	cout << "字母" << letter+1 <<"空格"<< space<<"数字" << num <<"其他" << other << endl;
}