#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
	}
	void out()
	{
		cout << hour << ":" <<minute << ":" << sec << endl;
	}

};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.settime();
	t1.out();
	return 0;
}
