#pragma once

#include <iostream>
#include <complex>

using std::string;
using std::complex;

class Laba2
{
   public:
	   struct Laba
	   {
		   double realPart;
		   double imaginaryPart;
		   const string lineColor = "\n\033[32m" + std::string(50, '-') + "\033[0m";
	   };

	   Laba cn;

	   /// <summary>
	   /// Создание комплексного числа
	   /// </summary>
	   complex<double> Create_ComplexNumbers();

	   /// <summary>
	   /// Ввод два числа
	   /// </summary>		
	   void InputNumber();

	   /// <summary>
	   /// Выбор номера операции
	   /// </summary>
	   /// <param name="number"></param>
	   int InputOperations(complex<double>& complex1, complex<double>& complex2);

	   /// <summary>
	   /// Сложение комплексных частей
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void SummationNumbers(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// Вычитание комплексных частей
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void SubtractionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// Умножение комплексных чисел
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void MultiplicationNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// Деление комплексных частей
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void DivisionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// Нахождение модуля и аргумента
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void ModuleArgumentNumber(complex<double>& complexNumber, string txt);

	   /// <summary>
	   /// Возврат вещественной и мнимой части
	   /// </summary>
	   /// <param name="complexNumber">комплексное число</param>
	   /// <returns></returns>
	   void RealImaginaryNumber(complex<double>& complexNumber, string txt);

	   /// <summary>
	   /// Ввод чисел
	   /// </summary>
	   /// <param name="numbers">число</param>
	   /// <param name="txt">требуемое значение</param>
	   void Input(double& numbers, string txt);

	   /// <summary>
	   /// Запускает лабу 2
	   /// </summary>
	   void StartLab2();
};

