#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[10];//��������
    for (int i = 0; i < 10; i++)
    {
        cout << "������ĵ�" << i << "������";
        cin >> arr[i];//���������Ԫ�ز��������iλ��
    }
    set<int>unique_number;//����һ�������͵ļ���
    for (int i = 0; i < 10; i++)
    {
      unique_number.insert(arr[i]);//�������е�ÿ���������뵽������
    }
    cout << "�������Ψһ����Ϊ" << endl;
    for (int num : unique_number)
    {
        cout << num << " ";
    }

    return 0;
}