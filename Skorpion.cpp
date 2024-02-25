#include <iostream>
#include "ChooseALab.h"
#include "Skorpion.h"

int main()
{		
	setlocale(LC_ALL, "");
	ChooseALab selectLab;
	selectLab.SelectLab();
}

void SupportForAnsiCodes()
{
	// Включаем поддержку ANSI escape кодов
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(hOut, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(hOut, dwMode);
}

