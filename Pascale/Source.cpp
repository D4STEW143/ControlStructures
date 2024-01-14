#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите высоту треугольника"; cin >> n;
	int fi = 1;
	for (int i = 0; i < n; i++)
	{
		cout.width(6);
		cout << "";
	}
	cout << 1 << endl;
	for (int i = 1; i <= n; i++)
	{
		fi *= i;
		int fj = 1;
		for (int j = 0; j < n - i; j++)
		{
			cout.width(6);
			cout << "";
		}
		for (int j = 1; j <= i; j++)
		{
			fj *= j;
			int fk = 1;
			for (int k = 1; k <= i; k++)
			{
				fk *= k;
			}
			int bin = fi / fj / fk;
			cout << bin << "\t";
		}
		cout << endl;
	}
}