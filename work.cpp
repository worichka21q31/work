#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>

using namespace std;
// Функции...
void Start();
void SummonmenuNoLog();
void SummonmenuLog();
void Selling();
void IzmName();
void AddProduct();
void DelElemt();
void AddElem2End();
void CreateStorage();
void DeleteProduct();
template<typename ArrType>
void FillArray(ArrType staticArr[], ArrType dinArr[], int size);
bool Password(int passwordsNum, bool retur);
template<typename ArrType>
void PrintArray(ArrType dinArr[], int size);
void Shop();
void Delete();
void OpenStore();
void IzmPrise();
void AddElem2bill(int& receoptSize, int id, int count);
void PrintBill();
void IzmStorage();
// Значения...
int siz = 10;
int* idArr = new int[siz];
string* nameArr = new string[siz];
int* countArr = new int[siz];
double* priceArr = new double[siz];
// Значения чека...
int receoptSize = 1;
string* nameReciptArr = new string[receoptSize];
int* countReceiptArr = new int[receoptSize];
double* receoptPriceArr = new double[receoptSize];

int main()
{

	srand(time(NULL));


	Start(); 

	Delete();
	return 0;
}
void Delete()
{
	delete[]priceArr;
	delete[]countArr;
	delete[]nameArr;
	delete[]idArr;

	delete[]nameReciptArr;
	delete[]countReceiptArr;
	delete[]receoptPriceArr;
}
void Start()
{
	system("cls");
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
			if (leave == 2) {}
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
	int id[sizest]{ 0,1,2,3,4,5,6,7,8,9 };
	string name[sizest]{ "Cладкое ", "Карамель", "Фруктовое", "Огурцовое", "Клубничное", "Шоколадное"
	, "Банановое", "Пустое  ", "Ванильное", "Кокосовое" };
	int count[sizest]{ 4,2,3,3,5,1,4,0,2,1 };
	double price[sizest]{ 125 , 150.75, 149.89 , 72.85 ,179.89, 240.20, 345.50, 65.65, 94.85, 139.98 };
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

			cout << "1) Показать Склад(готово)\n2) Начать Продажу(не готово)\n3) Изм. Цену(готово)\n4) Списать Товар(готово)\n5) Пополнить Товар(готово)\n6) Изменить Товар(готово 90%)\n7) Изменить Склад\n0) Стоп смену(готово)\n";
			cin >> ch;
		} while (ch < 0 || ch > 7);
		if (ch == 1)
		{
			system("cls");
			OpenStore();
			system("pause");
		}
		else if (ch == 2)
		{
			system("cls");
			Selling();
		}
		else if (ch == 3)
		{
			system("cls");
			IzmPrise();
		}
		else if (ch == 4)
		{
			system("cls");
			DeleteProduct();
		}
		else if (ch == 5)
		{
			system("cls");
			AddProduct();
		}
		else if (ch == 6)
		{
			system("cls");
			IzmName();
		}
		else if (ch == 7)
		{
			system("cls");
			IzmStorage();
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
void OpenStore()
{
	cout << "[]======================================================================[]\n";
	cout << "[]\tid\t\tName\t\t\tPrise\t\tCount   []\n[]——————————————————————————————————————————————————————————————————————[]\n";
	for (int i = 0; i < siz; i++)
	{
		cout << "#" << "\t " << idArr[i] + 1 << "\t\t" << nameArr[i] << "\t\t" << priceArr[i] << "\t\t  " << countArr[i] << "      #\n";
	}
	cout << "[]======================================================================[]\n\n";
}
void IzmPrise()
{
	int vibor;
	double price;
	do
	{

		cout << "[]======================================================================[]\n\n";
		cout << "\tВведите id продукта\n\tВвод: ";
		cin >> vibor;
	} while (vibor < 0 || vibor > siz);
	do
	{
	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\tВведите цену для " << nameArr[vibor - 1] << " Cейчас ее цена: " << priceArr[vibor - 1] << "\n\tВвод: ";
	cin >> price;
	priceArr[vibor - 1] = price;
	} while (price < 0.01 || price > 200000.02);
	system("cls");
	cout << "**************************************************************************\n\n";
	cout << "\tОперация Успешна! Товар: " << nameArr[vibor - 1] << " Изменил свою Цену на: " << priceArr[vibor - 1] << "\n\n";
	cout << "**************************************************************************\n\n";
	system("pause");

}
void Selling()
{
	int viborId, vibCount = 0;
	int yesOrNot;
	bool first = true;
	while (true)
	{

		do
		{
			system("cls");
			cout << "[]======================================================================[]\n\n";
			cout << "\tВведите id продукта\n\tВвод: ";
			cin >> viborId;
			if (viborId < 1 || viborId > siz)
			{
				cerr << "\nThis is invalid id\n";
				system("pause");
				continue;
			}
			if (countArr[viborId - 1] > 0)
			{
				while (true)
				{
					system("cls");
					cout << "[]======================================================================[]\n\n";
					cout << "\tВведите Сколько вам нужно " << nameArr[viborId - 1] << "\n\tСейчас на складе: " << countArr[viborId - 1] << "\n\tВвод: ";
					cin >> vibCount;
					if (vibCount < 1 || vibCount > countArr[viborId - 1])
					{
						cerr << "\tТовара не хватает\n";
						system("pause");
						continue;
					}
					else
					{
						break;
					}
				}
			}
			if (countArr[viborId - 1] > 0)
			{
				system("cls");
				cout << "[]======================================================================[]\n\n";
				cout << "\tВы выбрали " << nameArr[viborId - 1] << " В Количестве: " << vibCount << "\n";
				cout << "\tПодтвердите выбор:\n\t1)Да \n\t2)Нет\n\tВвод: ";
				cin >> yesOrNot;
				if (yesOrNot == 2)
				{
					continue;
				}
				countArr[viborId - 1] = countArr[viborId - 1] - vibCount;
				break;
				system("cls");
			}
		} while (viborId < 0 || viborId > siz);
		if (first)
		{
			first = false;
			nameReciptArr[receoptSize - 1] = nameArr[viborId - 1];
			countReceiptArr[receoptSize - 1] = vibCount;
			receoptPriceArr[receoptSize - 1] = priceArr[viborId - 1] * vibCount;
		}
		else
		{
			AddElem2bill(receoptSize, viborId, vibCount);
			system("pause");
		}
		system("cls");
		cout << "[]======================================================================[]\n\n";
		cout << "\tКупить еще товара?\n";
		cout << "\t1) Да 2) Нет\n\tВвод: ";
		cin >> yesOrNot;
		if (yesOrNot == 2)
		{
			break;
		}
		else
		{
			continue;
		}
		break;
	}
	PrintBill();
}
void DeleteProduct()
{
	int vibor;
	int count;
	do
	{

		cout << "[]======================================================================[]\n\n";
		cout << "\tВведите id продукта\n\tВвод: ";
		cin >> vibor;
	} while (vibor < 0 || vibor > siz);
	do
	{

	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\tВведите сколько убрать " << nameArr[vibor - 1] << " Cейчас ее: " << countArr[vibor - 1] << "\n\tВвод: ";
	cin >> count;
	if (count > countArr[vibor - 1])
	{
		cerr << "[]===============================Error==================================[]\n\n";
		cerr << "\tСтолько кол-ва товара нету в наличии\n\n";
		system("pause");
	}
	} while (count > countArr[vibor - 1]);
	countArr[vibor - 1] = countArr[vibor - 1] - count;
	system("cls");
	cout << "**************************************************************************\n\n";
	cout << "\tОперация Успешна! Товар: " << nameArr[vibor - 1] << " Изменил свое Кол-во на: " << countArr[vibor - 1] << "\n\n";
	cout << "**************************************************************************\n\n";
	system("pause");

}
void AddProduct()
{
	int vibor;
	int count;
	do
	{

		cout << "[]======================================================================[]\n\n";
		cout << "\tВведите id продукта\n\tВвод: ";
		cin >> vibor;
	} while (vibor < 0 || vibor > siz);
	do
	{
	    system("cls");
	    cout << "[]======================================================================[]\n\n";
	    cout << "\tВведите сколько Добавить " << nameArr[vibor - 1] << " Cейчас ее: " << countArr[vibor - 1] << "\n\tВвод: ";
	    cin >> count;
	} while (count < 0 );
    countArr[vibor - 1] = countArr[vibor - 1] + count;
	system("cls");
	cout << "**************************************************************************\n\n";
	cout << "\tОперация Успешна! Товар: " << nameArr[vibor - 1] << " Изменил свое Кол-во на: " << countArr[vibor - 1] << "\n\n";
	cout << "**************************************************************************\n\n";
	system("pause");

}
void IzmName()
{
	string temp;
	int vibor;
	string name;
	do
	{

		cout << "[]======================================================================[]\n\n";
		cout << "\tВведите id продукта\n\tВвод: ";
		cin >> vibor;
	} while (vibor < 0 || vibor > siz);
	system("cls");
	cout << "[]======================================================================[]\n\n";
	cout << "\tВведите имя для " << nameArr[vibor - 1]  << "\n\tВвод: ";

	cin >> name;

	temp = nameArr[vibor - 1];
	nameArr[vibor - 1] = name;
	system("cls");
	cout << "**************************************************************************\n\n";
	cout << "\tОперация Успешна! Товар: " << temp << " Изменил свое имя на: " << nameArr[vibor - 1] << "\n\n";
	cout << "**************************************************************************\n\n";
	system("pause");

}
void AddElem2bill(int& receoptSize, int id, int count)
{
	string* nameReciptArrTemp = new string[receoptSize];
	int* countReceiptArrTemp = new int[receoptSize];
	double* receoptPriceArrTemp = new double[receoptSize];
	
	for (int i = 0; i < receoptSize; i++)
	{
		nameReciptArrTemp[i] = nameReciptArr[i];
		countReceiptArrTemp[i] = countReceiptArr[i];
		receoptPriceArrTemp[i] = receoptPriceArr[i];
	}
	delete[]nameReciptArr;
	delete[]countReceiptArr;
	delete[]receoptPriceArr;
	receoptSize++;
	nameReciptArr = new string[receoptSize];
	countReceiptArr = new int[receoptSize];
	receoptPriceArr = new double[receoptSize];

	for (int i = 0; i < receoptSize; i++)
	{
		 nameReciptArr[i] = nameReciptArrTemp[i];
		 countReceiptArr[i] = countReceiptArrTemp[i];
		 receoptPriceArr[i] = receoptPriceArrTemp[i];
	}
	nameReciptArr[receoptSize-1] = nameArr[receoptSize-1];
	countReceiptArr[receoptSize-1] = count;
	receoptPriceArr[receoptSize-1] = priceArr[receoptSize-1] * count;

	delete[]nameReciptArrTemp;
	delete[]countReceiptArrTemp;
	delete[]receoptPriceArrTemp;
}
void AddElem2End()
{
    int* idArrTemp = new int[siz];
	string* nameArrTemp = new string[siz];
	int* countArrTemp = new int[siz];
	double* PriceArrTemp = new double[siz];
	
	for (int i = 0; i < siz; i++)
	{
	    idArrTemp[i] = idArr[i];
		nameArrTemp[i] = nameArr[i];
		countArrTemp[i] = countArr[i];
		PriceArrTemp[i] = priceArr[i];
	}
	delete[]idArr;
	delete[]nameArr;
	delete[]countArr;
	delete[]priceArr;
	siz++;
	idArr = new int[siz];
	nameArr = new string[siz];
	countArr = new int[siz];
	priceArr = new double[siz];

	for (int i = 0; i < siz - 1; i++)
	{
	     idArr[i] = idArrTemp[i];
		 nameArr[i] = nameArrTemp[i];
		 countArr[i] = countArrTemp[i];
		 priceArr[i] = PriceArrTemp[i];
	}
	idArr[siz-1] = siz-1;
	
    delete[]idArrTemp;
	delete[]nameArrTemp;
	delete[]countArrTemp;
	delete[]PriceArrTemp;
	
	system("cls");
	cout << "[]=============================================================================[]\n";
	cout << "\n\tВведите имя нового товара: \n\t";
	cin >> nameArr[siz-1];
	cout << "\tВведите Кол-во нового товара: \n\t";
	cin >> countArr[siz-1];
	cout << "\tВведите Цену нового товара: \n\t";
	cin >> priceArr[siz-1];
	system("cls");
	cout << "[]=============================================================================[]\n";
	cout << "\n\t Товар успешно добавлен!";
	cout << "\n\n[]=============================================================================[]\n";
}
void PrintBill()
{
	system("cls");
	cout << "[]===============================#Итоговый Чек#=====================================[]\n";
	cout << "[]\tName\t\tPrise\t\tCount                                       []\n[]——————————————————————————————————————————————————————————————————————————————————[]\n";
	for (int i = 0; i < receoptSize; i++)
	{
		cout << "#"  << "\t" << nameReciptArr[i] << "\t" << receoptPriceArr[i]* countReceiptArr[i] << "\t\t  " << countReceiptArr[i] << "                                          #\n";
	}
	cout << "[]==================================================================================[]\n\n";
	system("pause");
}
void BornNewStorage()
{
	int newsiz;
	string name;
	cout << "[]======================================================================[]\n\n";
	cout << "\t\t#Welcom To admin menu storage#\n\n";
	cout << "[]======================================================================[]\n\n";
	cout << "\tВведите Кол-во ячеек новых товаров\n";
	cin >> newsiz;
	for (int i = 0; i < newsiz; i++)
	{
		system("cls");
		cout << "[]======================================================================[]\n\n";
		cout << "\tВведите имя для " << i << "\nТовара";
		cin >> name;
	}
}
void IzmStorage()
{
        int vibor;
        do
        {
  		    system("cls");
		    cout << "[]======================================================================[]\n\n";
		    cout << "\tИзменение Склада\n\n\t1) Добавить Товар \n\t2) Удалить Товар\n\t3) Выход\n\nВвод: ";
		    cin >> vibor;
		}while(vibor < 1 || vibor > 3);
		if(vibor == 1)
		{
		    AddElem2End();
		}
		else if(vibor == 2)
		{
		    DelElemt();
		}
		else if(vibor == 3)
		{
		    
		}
		else
		{
		    cerr << "Ошибка" ;
		}
}
void DelElemt()
{
    int* idArrTemp = new int[siz];
	string* nameArrTemp = new string[siz];
	int* countArrTemp = new int[siz];
	double* PriceArrTemp = new double[siz];
	
	for (int i = 0; i < siz; i++)
	{
	    idArrTemp[i] = idArr[i];
		nameArrTemp[i] = nameArr[i];
		countArrTemp[i] = countArr[i];
		PriceArrTemp[i] = priceArr[i];
	}
	delete[]idArr;
	delete[]nameArr;
	delete[]countArr;
	delete[]priceArr;   
	
	siz--;
	
	idArr = new int[siz];
	nameArr = new string[siz];
	countArr = new int[siz];
	priceArr = new double[siz];
	
	int index = 0;
	system("cls");
    cout << "[]======================================================================[]\n\n";
	cout << "\tКакой Товар Удалить?'\n\tВведите Id: ";
	cin >> index;
	for(int i = 0, j = 0 ; i < siz, j < siz; j++, i++)
	{
	    if (i == index - 1)
	    {
	       i++;
	       idArr[j] = idArrTemp[j];
           nameArr[j] = nameArrTemp[i];
	       countArr[j] = countArrTemp[i];
	       priceArr[j] = PriceArrTemp[i];
	       
	    }
	    else
	    {
	       idArr[j] = idArrTemp[j];
           nameArr[j] = nameArrTemp[i];
	       countArr[j] = countArrTemp[i];
	       priceArr[j] = PriceArrTemp[i]; 
	    }
	    
	    delete[]idArrTemp;
	    delete[]nameArrTemp;
	    delete[]countArrTemp;
	    delete[]PriceArrTemp;
	}
}
