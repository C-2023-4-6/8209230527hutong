#include<iostream>
#include<vector>
using namespace std;
void bs(vector<double>& list)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < list.size()-1; j++)
		{
			if (list[j] > list[j + 1])
			{ 
			double temp = list[j];
			list[j] = list[j + 1];
			list[j + 1] = temp;
			changed = true;
			}
		}

	} while (changed);
}
int main()
{
	vector<double> list = { 1.2,6.5,95.5,66.6,4.3,1.6,8.6 };
	for (double num : list)
	{
		cout << num << " ";
	}
	cout << endl;
	bs(list);
	for (double num : list)
	{
		cout << num << " " ;
	}
	cout << endl;
	return 0;
}