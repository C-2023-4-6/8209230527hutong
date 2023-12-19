#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int i, int j)
	{
		x = 1;
		y = j;
	}
	void setpoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "×ø±êÖµÎª" << x << ":" << y << endl;
	}
};
int main()
{
	point p(60, 80);
	p.setpoint(20, 30);
	p.display();
	return 0;
}