#include<iostream>
using namespace std;


struct stud {
	int id;
	int score;
};
struct stud arr[5]
{
	{666 ,56},
	{999 ,68},
	{555 ,75},
	{888 ,99},
	{685 ,68}
};
void max(struct stud arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].score < arr[j + 1].score)
			{
				struct stud temp = arr[j];//注意这里输入temp的方式
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
void print(struct stud arr[], int len)
{
	
		cout << "最高分学号" << arr[0].id << endl;
	
}
int main()
{
	int len = sizeof(arr) / sizeof(arr[0]);
	max(arr, len);
	print(arr, len);

}