#include "ChooseALab.h"
#include "Lab1.h"
#include "Laba2.h"
#include "Laba6.h"
 
using std::cout;
using std::cin;

void ChooseALab::SelectLab()
{
	while (true)
	{
		int choice;
		cout << "\nВведите цифру от 1 - 9:\n1. Задание\n"
			<< "2. Задание\n"
			<< "3. Задание\n"
			<< "4. Задание\n"
			<< "5. Задание\n"
			<< "6. Задание\n"
			<< "7. Задание\n"
			<< "8. Задание\n"
			<< "9. Выход из программы\n";
		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				Lab1 lab;
				lab.StartLab1();
				break;
			}
			case 2:
			{
				Laba2 laba2;
				laba2.StartLab2();
				break;
			}				
			case 3:
				InfoRazrab();
				break;
			case 4:			
				InfoRazrab();
				break;
			case 5:
				InfoRazrab();			
				break;
			case 6:
			{
				Laba6 lab;
				lab.StartLaba6();
				break;
			}			
			case 7:
				InfoRazrab();
				break;
			case 8:
				InfoRazrab();
				break;
			case 9:
				MessageBox(NULL, L"До свидания ^_^", L"Информация", MB_OK);
				exit(0);
				break;
			default:
				cout << "\nНеизвестная команда. Пожалуйста, введите число от 1 до 7.";
		}
	}		
}

void ChooseALab::InfoRazrab()
{
	MessageBox(NULL, L"В разработке ^_^", L"Информация", MB_OK);
}
