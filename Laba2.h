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
	   /// �������� ������������ �����
	   /// </summary>
	   complex<double> Create_ComplexNumbers();

	   /// <summary>
	   /// ���� ��� �����
	   /// </summary>		
	   void InputNumber();

	   /// <summary>
	   /// ����� ������ ��������
	   /// </summary>
	   /// <param name="number"></param>
	   int InputOperations(complex<double>& complex1, complex<double>& complex2);

	   /// <summary>
	   /// �������� ����������� ������
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void SummationNumbers(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// ��������� ����������� ������
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void SubtractionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// ��������� ����������� �����
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void MultiplicationNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// ������� ����������� ������
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void DivisionNumber(complex<double>& complexNumber1, complex<double>& complexNumber2);

	   /// <summary>
	   /// ���������� ������ � ���������
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void ModuleArgumentNumber(complex<double>& complexNumber, string txt);

	   /// <summary>
	   /// ������� ������������ � ������ �����
	   /// </summary>
	   /// <param name="complexNumber">����������� �����</param>
	   /// <returns></returns>
	   void RealImaginaryNumber(complex<double>& complexNumber, string txt);

	   /// <summary>
	   /// ���� �����
	   /// </summary>
	   /// <param name="numbers">�����</param>
	   /// <param name="txt">��������� ��������</param>
	   void Input(double& numbers, string txt);

	   /// <summary>
	   /// ��������� ���� 2
	   /// </summary>
	   void StartLab2();
};

