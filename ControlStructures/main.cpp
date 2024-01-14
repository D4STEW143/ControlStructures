#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello controls" << endl;

	int temperature;
	cout << "Введите температуру воздуха: " << endl;
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло." << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
}