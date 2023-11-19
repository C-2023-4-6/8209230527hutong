#include<iostream>
using namespace std;
int main()
{
	float a = 1.6;
	int i = 1;
	float sum = 0;
	for (int i = 2; i< 100; i = i * 2)
	{
		sum = sum + i * 0.8;
	}
	cout << sum/6 << endl;
	
	
	
			
	return 0;
}