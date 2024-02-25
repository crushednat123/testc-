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
		cout << "\n������� ����� �� 1 - 9:\n1. �������\n"
			<< "2. �������\n"
			<< "3. �������\n"
			<< "4. �������\n"
			<< "5. �������\n"
			<< "6. �������\n"
			<< "7. �������\n"
			<< "8. �������\n"
			<< "9. ����� �� ���������\n";
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
				MessageBox(NULL, L"�� �������� ^_^", L"����������", MB_OK);
				exit(0);
				break;
			default:
				cout << "\n����������� �������. ����������, ������� ����� �� 1 �� 7.";
		}
	}		
}

void ChooseALab::InfoRazrab()
{
	MessageBox(NULL, L"� ���������� ^_^", L"����������", MB_OK);
}
