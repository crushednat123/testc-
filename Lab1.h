#pragma once
#include <iostream>
#include <vector>
using  std::string;
using std::vector;
class Lab1
{
public:
	/// <summary>
	/// ѕроверка файла
	/// </summary>
	/// <param name="filename">название файла</param>
	/// <returns></returns>
	bool FileExists(const string &filename);

	/// <summary>
	/// ¬вод вывод
	/// </summary>
	/// <param name="rankMatrix">размерность матрицы</param>
	/// <param name="dimensionVector">размерность вектора</param>
	void Input(int& rankMatrix, int& dimensionVector);

	/// <summary>
	/// —оздание файла, запись в файл
	/// </summary>
	/// <param name="rankMatrix"></param>
	/// <param name="dimensionVector"></param>
	void CreatFile(int& rankMatrix, int& dimensionVector);

	/// <summary>
	/// ѕолучение данных из файла
	/// </summary>
	/// <param name="rankMatrix"></param>
	/// <param name="dimensionVector"></param>
	void ReadFile(int& rankMatrix, int& dimensionVector, string& nameFale);

	/// <summary>
	/// ¬ывод вектора
	/// </summary>
	/// <param name="dimensionVector">размерность вектора</param>
	/// <param name="vec">наш заполненный вектор</param>
	void VectorOutput(int& dimensionVector, vector<int>& vec, char countColumn);

	/// <summary>
	/// √енераци€ вектора
	/// </summary>
	/// <param name="dimensionVector">размер вектора</param>
	/// <param name="vec">вектор</param>
	void VectorGeneration(int& dimensionVector, vector<int>& vec);

	/// <summary>
	/// “ранспонируемый вектор
	/// </summary>
	/// <param name="vec">наш заполненный вектор</param>
	void TransposedVector(vector<int>& vec, int& dimensionVector);

	/// <summary>
	/// √енераци€ матрицы
	/// </summary>
	/// <param name="rankMatrix">размерность матрицы</param>
	vector<vector<int>> MatrixGeneration(int& rankMatrix, char typeInput);

	/// <summary>
	/// ¬ывод матрицы
	/// </summary>
	/// <param name="matrix">передаваема€ матрица</param>
	void MatrixOutput(vector<vector<int>>& matrix);

	/// <summary>
	/// ”множение вектора на матрицу
	/// </summary>
	/// <param name="vec">вектор</param>
	/// <param name="mat">матрица</param>
	/// <returns>результат умножени€</returns>
	vector<int> MultiplyVecAndMatrx(vector<int>& vec, vector<vector<int>>& mat);

	/// <summary>
	/// —кал€рное произведение полученного вектора на транспонируемый вектор 
	/// </summary>
	/// <param name="vec">полученный вектор</param>
	/// <param name="vecTransposed">транспонируемый вектор</param>
	/// <returns></returns>
	int ScalarProduct(const vector<int>& vec, const vector<int>& vecTransposed);

	/// <summary>
	/// Ќахождение длины вектора
	/// </summary>
	/// <param name="razmerVector">размерность вектора</param>
	/// <param name="vec">передаваемый вектор</param>
	/// <param name="rankMatrix">размерность матрицы</param>
	/// <param name="myMatrix">передаваема€ матрица</param>
	/// <param name="resultVecAndMatrc">результат умножени€ вектора на матрицу</param>
	/// <param name="vecScalrProduct">умножение вектора на матрицу</param>
	/// <param name="result">итоговый результат</param>
	void VectorLength(int& razmerVector, vector<int>& vec, int& rankMatrix, vector<vector<int>>& myMatrix,
		vector<int>& resultVecAndMatrc, int& vecScalrProduct, double& result);
	/// <summary>
	/// «апуск задани€
	/// </summary>
	void StartLab1();
};

