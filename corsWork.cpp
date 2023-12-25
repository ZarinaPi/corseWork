// corsWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;

int main()
{
	setlocale(0, "RUS");
    int num;
    cout << "Введите номер лабораторно работы которую хотите запустить: \n";
    cin >> num;
	switch (num){
	case 1:
	{
		system("попытка_хз_какая.exe");
		break;
	}
	case 2:
	{
		system("array.exe");
		break;
	}
	case 3:
	{
		system("Laba3.exe");
		break;
	}
	case 4:
	{
		system("Laba4.exe");
		break;
	}
	default:
		break;
	}
}
