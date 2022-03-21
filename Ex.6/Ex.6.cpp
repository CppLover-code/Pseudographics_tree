// Ex.6
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "RUS");
	cout << " Ёлочка\n" << "\n";
	cout << " Введите количество ярусов ёлочки:\n";
	int a;
	cin >> a;
	cout << " Введите высоту яруса ёлочки:\n";
	int b;
	cin >> b;

	int spaces = a * b / 2 - 1;
	int stars = 1;
	int Z = spaces;

	for (int i = 0; i < a; i++) // ярусы
	{
		int X = stars; 
		int Y = spaces;

		for (int y = 0; y < b; y++) // строки
		{

				for (int s = 0; s < Y; s++)
				{
					cout << " ";
				}
				for (int x = 0; x < X; x++)
				{
					cout << "*"; 
				}
				cout << "\n";

					Y--; 
					X += 2; 
		}
		stars += 2;
		spaces--;
	}
	

	for (int y = 0; y < a; y++) // ствол 
	{
		
			for (int s = 0; s < Z - 1; s++)
			{
				cout << " ";
			}

			for (int x = 0; x < a; x++)
			{
				cout << "*";
			}
			cout << "\n";
	}
}