#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello controls" << endl;

	int temperature;
	cout << "������� ����������� �������: " << endl;
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����." << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
}