#include <iostream>
#include <conio.h>
using namespace std;

#define FIGURE_0
#define FIGURE_1
#define FIGURE_2
#define FIGURE_3
#define FIGURE_4
#define FIGURE_5

void main()
{
	setlocale(LC_ALL, " ");
#ifdef FIGURE_0
	int a = 5;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
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

cout << endl;

#ifdef FIGURE_2

	int star_2 = 6;
		for (int i = 1; i < star_2; i++)
		{
			for (int j = 6; j > i; j--)
			{
				cout << "*";
			}
			cout << endl;
		}


#endif
	
cout << endl;

#ifdef FIGURE_3
		int b = 5;
		for (int i = 0; i <= b; i++) //���������
		{
			for (int k = 0; k < i; k++) //�������
			{
				cout << " ";
			}
			for (int j = 5; j > i; j--) //�����������
			{
				cout << "*";
			}
			cout << endl;
		}
#endif

#ifdef FIGURE_4

		int c = 5;
		for (int i = 0; i <= c; i++)
		{
			for (int j = 5; j > i; j--)
			{
				cout << " ";
			}
			for (int k = 0; k < i; k++)
			{
				cout << "*";
			}
			cout << endl;
		}

#endif

cout << endl;

#ifdef FIGURE_5
		int e = 10;
		for (int i = 0; i < e; i++)
		{
			for (int j = 0; j < e; j++)
			{
				cout << (i % 2 == j % 2 ? "+" : "-");
			}
			cout << endl;
		}
#endif
}
