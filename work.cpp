#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
using namespace std;
//функции
void Start();
void SummonmenuNoLog();
void SummonmenuLog();
void CreateStorage();
template<typename ArrType>
void FillArray(ArrType staticArr[], ArrType dinArr[], int size);
bool Password(int passwordsNum, bool retur);
template<typename ArrType>
void PrintArray(ArrType dinArr[], int size);
void Shop();
// Значения
int siz = 10;
int* idArr = new int[siz];
string* nameArr = new string[siz];
int* countArr = new int[siz];
double* priceArr = new double[siz];



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	Start(); // Морожонное! Cладкое, Не Очень сладкое, Прям сладкое морожонное, Очень сладное, Клубничное.

	delete[]priceArr;
	delete[]countArr;
	delete[]nameArr;
	delete[]idArr;
	return 0;
}
void Start()
{
	int leave;
	bool exit = false;
	int password;
	bool bols = false;
	do
	{
		SummonmenuNoLog();
		cin >> password;
		if (Password(password, bols) == true)
		{
			exit = true;
			SummonmenuLog();
		}
		else
		{
			cerr << "Неверные логин или пароль\n";
			cout << "Выйти из программы?\n1) Да 2) Нет\n";
			cin >> leave;
			if (leave == 2){}
			else
			{
				break;
			}
		}
	} while (exit != true);
}
void SummonmenuNoLog()
{
	    system("cls");
		cout << "[]======================================================================[]\n\n";
		cout << "\t\tДобро Пожаловать в 'Теплый ледъ'\n";
		cout << "\t\t    Введите Пароль\n\nВвод: ";
}
bool Password(int passwordsNum, bool retur)
{

	if (passwordsNum == 2311)
	{
		return retur = true;
	}
	else
	{
		return retur = false;
	}
}
void CreateStorage()
{
	const int sizest = 10;
	int id[sizest]{0,1,2,3,4,5,6,7,8,9};
	string name[sizest]{ "Cладкое", "Не Очень сладкое", "Прям сладкое морожонное", "Очень сладное", "Клубничное", "Шоколадное"
	, "Банановое", "Пустое", "Ванильное", "Плохое Мороженное"};
	int count[sizest]{4,2,3,3,5,1,4,0,2,1};
	double price[sizest]{120 , 150.75, 149.99 , 72.90 ,179.99, 240.20, 345.50, 63.65, 95.85, 14.88};
	FillArray(id, idArr, sizest);
	FillArray(name, nameArr, sizest);
	FillArray(count, countArr, sizest);
	FillArray(price, priceArr, sizest);

}
void SummonmenuLog()
{
	int vibor;
	do
	{

	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\t\tДобро Пожаловать в 'Теплый ледъ'\n";
	cout << "\t\t   Выберите, что сделать\t\n\n1) Открыть Действ. Склад  \t\n2) Создать новый Cклад\n\n";
	cin >> vibor;
	} while (vibor < 1 || vibor > 2);
	if (vibor == 1)
	{
		CreateStorage();
		Shop();
		
	}
	else
	{
		cout << "in progressive";
	}
}
template<typename ArrType>
void FillArray(ArrType staticArr[], ArrType dinArr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		dinArr[i] = staticArr[i];
	}
}
template<typename ArrType>
void PrintArray(ArrType dinArr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << dinArr[i] << " ";
	}
}
void Shop()
{
	int ch;

	while (true)
	{
		do
		{

		system("cls");
		cout << "[]======================================================================[]\n\n";
		cout << "\t\t#Welcom To admin menu storage#\n\n";

		cout << "1) Показать Склад\n2) Начать Продажу\n3) Изм. Цену\n4) Списать Товар\n5) Пополнить Товар\n6) Изменить Товар\n0) Стоп смену\n";
		cin >> ch;
		} while (ch < 0 || ch > 6);
		if (ch == 1)
		{

		}
		else if (ch == 2)
		{

		}
		else if (ch == 3)
		{

		}
		else if (ch == 4)
		{

		}
		else if (ch == 5)
		{

		}
		else if (ch == 6)
		{

		}
		else if (ch == 0)
		{
			break;
		}
		else
		{
			cerr << "errrrr";
		}



	}

}
