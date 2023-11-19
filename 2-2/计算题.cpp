#include<iostream>
using namespace std;
int  main()
{
	float x = 0;
	
	cout << "ÇëÊäÈëXµÄÖµ" << endl;
	cin >> x;
	if ( x>0&&x<1)
	{
		cout << 3 - 2 * x << endl;
	}
	else if (1 <= x &&x< 5)
	{
		cout << 2 / (4 * x)+1 << endl;
	}
	else if (5 <=x&& x < 10)

	{
		cout << x * x << endl;
	}
	
}