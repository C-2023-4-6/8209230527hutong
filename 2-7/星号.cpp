#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i=0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)cout << '*';
		cout << endl;
	}
	system("pause");
	return 0;
}