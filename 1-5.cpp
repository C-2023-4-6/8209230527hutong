#include<iostream>
using namespace std;
int sss(int day)
{
	if (day == 10)
		return 1;
	else
	{
		return (sss(day + 1) + 1) * 2;
	}
}


int main() {
	int day;
	cout << sss(1) << endl;
}