#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n; // ���������� ������ ������ � �����
	cout << "������� ������ �����: ";
	cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (i/n%2==j/n%2? "* ":"  ");
		}
		cout << endl;
	}
}