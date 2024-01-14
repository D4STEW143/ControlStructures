#include <iostream>
#include <conio.h>
using namespace std;


//Рубрика эксперименты
//#define UP 87,119
//#define DOWN 83 && 115
//#define LEFT 65 || 97
//#define RIGHT (68 || 100)
#define SPACE 32
#define ENTER 13
#define ESCAPE 27

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		if (key == 87 || key == 119)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 83 || key == 115)
		{
			cout << "Назад" << endl;
		}
		else if (key == 65 || key == 97)
		{
			cout << "Налево" << endl;
		}
		else if (key == 68 || key == 100)
		{
			cout << "Направо" << endl;
		}
		else if (key == SPACE)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == ENTER)
		{
			cout << "Огонь" << endl;
		}
	} while (key != ESCAPE);
}