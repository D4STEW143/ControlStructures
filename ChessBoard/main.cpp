#include <iostream>

using namespace std;

#define WHITE char(219)
#define BLACK char(32)
#define LEFT_UP char(218)
#define RIGHT_UP char(191)
#define VERTICAL char(179)
#define HORIZONTAL char(196)
#define LEFT_DOWN char(192)
#define RIGHT_DOWN char(217)

void main()
{
	setlocale(LC_ALL, "C");
	int n;
	cout << "Type in board size: " << endl;
	cin >> n;

	cout << LEFT_UP;
	for (int k = 0; k < n * 2; k++)
	{
		cout << HORIZONTAL;
	}
	cout << RIGHT_UP << endl;

	for (int i = 0; i < n; i++)
	{
		cout << VERTICAL;
		for (int j = 0; j < n * 2 ; j++)
		{
			cout << (i % 2 == j/2 % 2 ? WHITE  : BLACK);
		}
		cout << VERTICAL << endl;
	}
	
	cout << LEFT_DOWN;
	for (int k = 0; k < n * 2; k++)
	{
		cout << HORIZONTAL;
	}
	cout << RIGHT_DOWN << endl;

	
	 


}