 #include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
    {
        int rows, first = 1, space, i, j;
        cout << "Введите количество строк:  ";
        cin >> rows;
        cout << "\n";
        for (i = 0; i < rows; i++)
        {
            for (space = 1;space <= rows - i;space++)
            {
                cout << " ";
            }
            for (j = 0;j <= i;j++)
            {
                if (j == 0 || i == 0)
                    first = 1;
                else
                    first = first * (i - j + 1) / j;

                cout << first << " ";
            }
            cout << "\n";
            cout << "\n";
        }
    }
}