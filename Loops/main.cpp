#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FOR
//#define FACTORIAL
//#define MUL
//#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1


	int i = 0; //счетчик цикла
	int n;     //количество итераций
	cout << "¬ведите количество итераций n: ";
	cin >> n;

	while (i < n)
	{
		cout << ++i << " Hello" << endl; //можно инкремент выполнить в выражении, а можно и сразу в условии (но только постфиксный)
		//i++;
	}

#endif 

#ifdef WHILE_2
	int n;
	cout << "¬ведите количество итераций: ";
	cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif

#ifdef DO_WHILE //DO_WHILE
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
#endif //DO_WHILE


#ifdef FOR
	int n;
	cout << "¬ведите количество итераций: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR

#ifdef FACTORIAL
	int n;
	cout << "¬ведите количество итераций: ";
	cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;

#endif // FACTORIAL

#ifdef MUL

	int n = 10;
	int a;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a = i * j;
			cout << i << "\t" << a << endl;
		}
		cout << endl;
	}
#endif // MUL

#ifdef PIFAGOR
	int n = 10;
	int a;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			a = i * j;
			cout << a << "\t";
		}
		cout << endl;
	}
#endif // PIFAGOR

}