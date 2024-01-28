#include <iostream>
#include <conio.h>
using namespace std;

//#define FIGURE_0
//#define FIGURE_1
//#define FIGURE_2
#define FIGURE_3

void main()
{
	setlocale(LC_ALL, " ");
#ifdef FIGURE_0
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef FIGURE_1

	int star = 5;
	while (star != 6)
	{
		for (int i = 0; i <= star; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		star++;
	}
#endif

#ifdef FIGURE_2

	int star = 6;
		for (int i = 1; i < star; i++)
		{
			for (int j = 6; j > i; j--)
			{
				cout << "*";
			}
			cout << endl;
		}
	

#endif
	

#ifdef FIGURE_3
		int n = 6;
		for (int i = 1; i < n; i++)
		{
			for (int k = 0; k > n; k++)
			{
				cout << "-";
			}
			for (int j = 6; j > i; j--)
			{
				cout << "*";
			}
			cout << endl;
		}
#endif
}
