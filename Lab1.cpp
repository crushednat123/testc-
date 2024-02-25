#include "Lab1.h"
#include <fstream>
#include <filesystem>
#include <ctime>
#include <cmath>
#include <iostream> 
#include "ChooseALab.h"

using std::cout;
using std::cin;
using std::ofstream;
using std::ifstream;
using namespace std::filesystem;

bool Lab1::FileExists(const string& filename)
{
    return exists(filename);
}

void Lab1::Input(int& rankMatrix, int& dimensionVector)
{
	cout << "\nВведите Ранг матрицы: ";
	cin >> rankMatrix;

	cout << "Введите размерность вектора: ";
	cin >> dimensionVector;

	do
	{
		if (rankMatrix != dimensionVector)
		{
			if (rankMatrix < dimensionVector)
			{
				cout << "Измените пожалуйста ранг матрицы, так как дальнейшие операции не возможно будет выполнить."
					<< "\n";
				cin >> rankMatrix;
			}

			if (rankMatrix > dimensionVector)
			{
				cout << "Измените пожалуйста размерность вектора, так как дальнейшие операции не возможно будет выполнить."
					<< "\n";
				cin >> dimensionVector;
			}
		}
		else
		{
			cout << "Ранг матрицы равен " << rankMatrix << ", размерность вектора равен " << dimensionVector << "\n";
		}
	} while (rankMatrix != dimensionVector);
}

void Lab1::CreatFile(int& rankMatrix, int& dimensionVector)
{
	ofstream myFile("test.txt");
	myFile << rankMatrix << "\n" << dimensionVector;
	myFile.close();
}

void Lab1::ReadFile(int& rankMatrix, int& dimensionVector, string& nameFale)
{
	ifstream file(nameFale);
	file >> rankMatrix >> dimensionVector;
	file.close();
}

void Lab1::VectorOutput(int& dimensionVector, vector<int>& vec, char countColumn)
{
	if (countColumn == 0)
	{
		cout << "Наш вектор: ";
		for (int i = 0; i < dimensionVector; i++)
		{
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	else
	{
		cout << "\nТранспонируемый вектор: \n";
		for (const auto& num : vec)
		{
			cout << num << '\n';
		}
	}
}

void Lab1::VectorGeneration(int& dimensionVector, vector<int>& vec)
{
	srand(time(0));
	vec.resize(dimensionVector);
	for (int i = 0; i < dimensionVector; i++)
	{
		vec[i] = rand() % 10;
	}
	VectorOutput(dimensionVector, vec, 0);
}

void Lab1::TransposedVector(vector<int>& vec, int& dimensionVector)
{
	// вектор-столбец
	vector<vector<int>> vec_column(vec.size(), vector<int>(1));

	for (int i = 0; i < vec.size(); i++)
	{
		// заполняем столбец
		vec_column[i][0] = vec[i];
	}
	VectorOutput(dimensionVector, vec, 1);
}

vector<vector<int>> Lab1::MatrixGeneration(int& rankMatrix, char typeInput)
{
	int rows, cols;
	rows = rankMatrix;
	cols = rankMatrix;
	srand(time(0));

	vector<vector<int>> matrix(rows, vector<int>(cols));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	if (typeInput == 1)
	{
		MatrixOutput(matrix);
	}
	return matrix;
}

void Lab1::MatrixOutput(vector<vector<int>>& matrix)
{
	cout << "\nСгенерированная матрица: \n";
	for (const auto& row : matrix) {
		for (int num : row) {
			cout << num << ' ';
		}
		cout << '\n';
	}
}

vector<int> Lab1::MultiplyVecAndMatrx(vector<int>& vec, vector<vector<int>>& mat)
{
	vector<int> result(mat[0].size(), 0);

	for (size_t i = 0; i < mat.size(); ++i)
	{
		for (size_t j = 0; j < mat[0].size(); ++j)
		{
			result[j] += vec[i] * mat[i][j];
		}
	}
	cout << "\nРезультат умножение вектора на матрицу:  ";
	return result;
}

int Lab1::ScalarProduct(const vector<int>& vec, const vector<int>& vecTransposed)
{
	int product = 0;
	for (size_t i = 0; i < vec.size(); ++i)
	{
		product += vec[i] * vecTransposed[i];
	}

	return product;
}

void Lab1::VectorLength(int& razmerVector, vector<int>& vec, int& rankMatrix, vector<vector<int>>& myMatrix, vector<int>& resultVecAndMatrc, int& vecScalrProduct, double& result)
{
	VectorGeneration(razmerVector, vec);
	MatrixGeneration(rankMatrix, 1);

	TransposedVector(vec, razmerVector);
	myMatrix = MatrixGeneration(rankMatrix, 0);
	resultVecAndMatrc = MultiplyVecAndMatrx(vec, myMatrix);

	for (int val : resultVecAndMatrc) {
		cout << val << " ";
	}

	vecScalrProduct = ScalarProduct(vec, resultVecAndMatrc);
	cout << "\nРезультат умножения полученного вектора на транспонированный вектор: " << vecScalrProduct << "\n";

	result = sqrt(vecScalrProduct);

	cout << "Результат: " << result << " (^_^)\n";
}

void Lab1::StartLab1()
{
	int rankMatrix, razmerVector, vecScalrProduct;
	double result;
	vector<int> vec, resultVecAndMatrc;
	vector<vector<int>> myMatrix;
	string nameFile = "test.txt";
	if (FileExists(nameFile))
	{
		ReadFile(rankMatrix, razmerVector, nameFile);
		VectorLength(razmerVector, vec, rankMatrix, myMatrix, resultVecAndMatrc, vecScalrProduct, result);
	}
	else
	{
		Input(rankMatrix, razmerVector);
		CreatFile(rankMatrix, razmerVector);
		ReadFile(rankMatrix, razmerVector, nameFile);
		VectorLength(razmerVector, vec, rankMatrix, myMatrix, resultVecAndMatrc, vecScalrProduct, result);
	}
	ChooseALab lab;
	lab.SelectLab();
	system("\npause");
}
