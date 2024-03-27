#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
using namespace std;
void Start();
void SummonmenuNoLog();
void SummonmenuLog();
void OpenStorage();
bool Password(int passwordsNum, bool retur);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	Start(); // Морожонное! Cладкое, Не Очень сладкое, Прям сладкое морожонное, Очень сладное, Клубничное.

	return 0;
}
void Start()
{
	int password;
	bool bols = false;
	SummonmenuNoLog();
	cin >> password;
	if (Password(password, bols) == true)
	{
		SummonmenuLog();



	}
}
void SummonmenuNoLog()
{
	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\t\tДобро Пожаловать в'Теплый ледъ'\n";
	cout << "\t\t   Введите Пароль\n\nВвод: ";
}
bool Password(int passwordsNum, bool retur)
{
	if (passwordsNum == 2)
	{
		return retur = true;
	}
	else
	{
		return retur = false;
	}
}
void OpenStorage()
{


}
void SummonmenuLog()
{
	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\t\tДобро Пожаловать в'Теплый ледъ'\n";
	cout << "\t\t   Выберите, что сделать\t\n1)  \t\n2)  \n";
	cout << "[]======================================================================[]\n\n";
}