#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0, j = 0, k = 0;

    // �Ƚ����������Ԫ�أ�����С��Ԫ�ط�����������
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

    // ��ʣ���Ԫ�ط�����������
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
    cout << "�������һ������Ĵ�С" << endl;
    cin >> size1;
    cout << "����������1��Ԫ��" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
    int *list2=new int[size2];
    cout << "������ڶ�������Ĵ�С" << endl;
    cin >> size2;
    cout << "����������2��Ԫ��" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    
    int *list3=new int[size1 + size2];
    merge(list1, size1, list2, size2, list3);

    cout << "�ϲ��������Ϊ: ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << list3[i] << " ";
    }

    return 0;
}



