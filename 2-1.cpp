#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[10];//定义数组
    for (int i = 0; i < 10; i++)
    {
        cout << "您输入的第" << i << "个整数";
        cin >> arr[i];//输入数组的元素并将其放入i位置
    }
    set<int>unique_number;//创建一个整数型的集合
    for (int i = 0; i < 10; i++)
    {
      unique_number.insert(arr[i]);//将数组中的每个整数插入到集合中
    }
    cout << "您输入的唯一整数为" << endl;
    for (int num : unique_number)
    {
        cout << num << " ";
    }

    return 0;
}