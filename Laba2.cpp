#include "Laba2.h"
#include <windows.h>
#include "Skorpion.h"
#include "ChooseALab.h"

using std::cout;
using std::cin;

complex<double> Laba2::Create_ComplexNumbers()
{
	InputNumber();
	complex<double>complexNumber(cn.realPart, cn.imaginaryPart);
	cout << "Комплексное число: " << complexNumber;
	return complexNumber;
}

void Laba2::InputNumber()
{
	Input(cn.realPart, "вещественное число : ");
	Input(cn.imaginaryPart, "мнимое число: ");
}

int Laba2::InputOperations(complex<double>& complex1, complex<double>& complex2)
{
	while (true)
	{
		int choice;
		cout << "\n\nВведите цифру от 1 - 7:\n1. Сложение\n"
			<< "2. Вычитание\n"
			<< "3. Умножение\n"
			<< "4. Деление\n"
			<< "5. Нахождение модуля и аргумента\n"
			<< "6. Возврат вещественной и мнимой части\n"
			<< "7. В меню\n"
			<< "8. Выход из программы\n";

		cin >> choice;

		switch (choice) {
		case 1:
			cout << "\nВы выбрали сложение.";
			SummationNumbers(complex1, complex2);
			break;
		case 2:
			cout << "\nВы выбрали вычитание.";
			SubtractionNumber(complex1, complex2);
			break;
		case 3:
			cout << "\nВы выбрали умножение.";
			MultiplicationNumber(complex1, complex2);
			break;
		case 4:
			cout << cn.lineColor << "\nВы выбрали деление.";
			DivisionNumber(complex1, complex2);
			cout << cn.lineColor;
			break;
		case 5:
			cout << cn.lineColor << "\nВы выбрали нахождение модуля и аргумента."
				<< "\nФормула для модуля комплексного числа z = a + bi:\n"
				<< "|z| = sqrt(a^2 + b^2)\n\n"
				<< "Формула для аргумента комплексного числа z = a + bi:\n"
				<< "arg(z) = atan2(b, a)\n";

			ModuleArgumentNumber(complex1, "\nДля первого числа \n");
			ModuleArgumentNumber(complex2, "\nДля второго числа \n");
			cout << cn.lineColor;
			break;
		case 6:
			cout << cn.lineColor << "\nВы выбрали возврат вещественной и мнимой части.\n"
				<< "Вещественная часть комплексного числа z = a + bi определяется как Re(z) = a.\n"
				<< "Мнимая часть комплексного числа z = a + bi определяется как Im(z) = b.";
			RealImaginaryNumber(complex1, "первого");
			RealImaginaryNumber(complex2, "второго");
			cout << cn.lineColor;
			break;
		case 7:
			 {
			   ChooseALab lab;
			   lab.SelectLab();
			 }
			break;
		case 8:
			MessageBox(NULL, L"До свидания ^_^", L"Информация", MB_OK);
			exit(0);
			break;
		default:
			cout << "\nНеизвестная команда. Пожалуйста, введите число от 1 до 7.";
		}
	}
	return 0;
}

void Laba2::SummationNumbers(complex<double>& complexNumber1, complex<double>& complexNumber2)
{
	complex<double> result = complexNumber1 + complexNumber2;
	cout << "\nРезультат сложения: " << result << "\n";
}

void Laba2::SubtractionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2)
{
	complex<double> result = complexNumber1 - complexNumber2;
	cout << "\nРезультат вычитания: " << result << "\n";
}

void Laba2::MultiplicationNumber(complex<double>& complexNumber1, complex<double>& complexNumber2)
{
	cout << "Умножение комплексных чисел выполняется по формуле (a+bi)∗(c+di)=(ac−bd)+(ad+bc)i.";
	complex<double> result = complexNumber1 * complexNumber2;
	cout << "\nРезультат умножения: " << result << "\n";
}

void Laba2::DivisionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2)
{
	cout << "Деление комплексных чисел происходит по следующей формуле:\n"
		<< "Если есть два комплексных числа z1 = a + bi и z2 = c + di, то их частное определяется так:\n"
		<< "(a + bi) / (c + di) = (a + bi)(c - di) / (c + di)(c - di) = (ac + bd) / (c^2 + d^2) + (bc - ad) / (c^2 + d^2)i\n";
	complex<double> result = complexNumber1 / complexNumber2;
	cout << "\nРезультат деления: " << result;
}

void Laba2::ModuleArgumentNumber(complex<double>& complexNumber, string txt)
{
	complex<double> result = complexNumber;

	double modulus = abs(result);
	double argument = arg(result);

	cout << txt << "Модуль: " << modulus <<
		" Аргумент: " << argument;
}

void Laba2::RealImaginaryNumber(complex<double>& complexNumber, string txt)
{
	complex<double> result = complexNumber;
	double realPart = result.real();
	double imagPart = result.imag();

	cout << "\n\nДля " << txt << " числа\nВещественная часть : " << realPart
		<< "\nМнимая часть: " << imagPart;
}

void Laba2::Input(double& numbers, string txt)
{
	cout << "Введите " << txt;
	cin >> numbers;
}

void Laba2::StartLab2()
{
	setlocale(LC_ALL, "");

	complex<double> number1, number2;
	Laba2 lab;

	SupportForAnsiCodes();

	cout << "Первое комплексное число ->"
		<< lab.cn.lineColor << "\n";

	number1 = lab.Create_ComplexNumbers();
	cout << "\n\nВторое комплексное число ->"
		<< lab.cn.lineColor << "\n";

	number2 = lab.Create_ComplexNumbers();

	lab.InputOperations(number1, number2);
	system("\npause");
}
