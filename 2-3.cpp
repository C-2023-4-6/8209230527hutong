#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0, j = 0, k = 0;

    // 比较两个数组的元素，将较小的元素放入新数组中
    while (i < size1 && j < size2)
    {
        if (list1[i] < list2[j])
        {
            list3[k++] = list1[i++];
        }
        else
        {
            list3[k++] = list2[j++];
        }
    }

    // 将剩余的元素放入新数组中
    while (i < size1)
    {
        list3[k++] = list1[i++];
    }

    while (j < size2)
    {
        list3[k++] = list2[j++];
    }
}
int main()
{
    int size1 = 0;
    int size2 = 0;
    int  *list1=new int[size1];
    cout << "请输入第一个数组的大小" << endl;
    cin >> size1;
    cout << "请输入数组1的元素" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    int *list2=new int[size2];
    cout << "请输入第二个数组的大小" << endl;
    cin >> size2;
    cout << "请输入数组2的元素" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    
    int *list3=new int[size1 + size2];
    merge(list1, size1, list2, size2, list3);

    cout << "合并后的数组为: ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << list3[i] << " ";
    }

    return 0;
}



