#include<iostream>
#include"mytemperature.h";
using namespace std;

double celsius_to_fah(double cel)
{
	return cel * 1.8 + 32;
}
double fahrenheit_to_cels(double fah)
{

	return (fah-32)/1.8;
}

int main()
{
	double cel, fah;
	for (cel = 40; cel > 30; cel--)
	{
		fah=celsius_to_fah(cel);
		cout << cel << "/" << fah << endl;
	}

	for (fah = 120; fah >= 30; fah -= 10)
	{
		cel = fahrenheit_to_cels(fah);
		cout << fah << "/" << cel << endl;
	}

	system("pause");
	return 0;
}




