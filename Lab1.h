#pragma once
#include <iostream>
#include <vector>
using  std::string;
using std::vector;
class Lab1
{
public:
	/// <summary>
	/// �������� �����
	/// </summary>
	/// <param name="filename">�������� �����</param>
	/// <returns></returns>
	bool FileExists(const string &filename);

	/// <summary>
	/// ���� �����
	/// </summary>
	/// <param name="rankMatrix">����������� �������</param>
	/// <param name="dimensionVector">����������� �������</param>
	void Input(int& rankMatrix, int& dimensionVector);

	/// <summary>
	/// �������� �����, ������ � ����
	/// </summary>
	/// <param name="rankMatrix"></param>
	/// <param name="dimensionVector"></param>
	void CreatFile(int& rankMatrix, int& dimensionVector);

	/// <summary>
	/// ��������� ������ �� �����
	/// </summary>
	/// <param name="rankMatrix"></param>
	/// <param name="dimensionVector"></param>
	void ReadFile(int& rankMatrix, int& dimensionVector, string& nameFale);

	/// <summary>
	/// ����� �������
	/// </summary>
	/// <param name="dimensionVector">����������� �������</param>
	/// <param name="vec">��� ����������� ������</param>
	void VectorOutput(int& dimensionVector, vector<int>& vec, char countColumn);

	/// <summary>
	/// ��������� �������
	/// </summary>
	/// <param name="dimensionVector">������ �������</param>
	/// <param name="vec">������</param>
	void VectorGeneration(int& dimensionVector, vector<int>& vec);

	/// <summary>
	/// ��������������� ������
	/// </summary>
	/// <param name="vec">��� ����������� ������</param>
	void TransposedVector(vector<int>& vec, int& dimensionVector);

	/// <summary>
	/// ��������� �������
	/// </summary>
	/// <param name="rankMatrix">����������� �������</param>
	vector<vector<int>> MatrixGeneration(int& rankMatrix, char typeInput);

	/// <summary>
	/// ����� �������
	/// </summary>
	/// <param name="matrix">������������ �������</param>
	void MatrixOutput(vector<vector<int>>& matrix);

	/// <summary>
	/// ��������� ������� �� �������
	/// </summary>
	/// <param name="vec">������</param>
	/// <param name="mat">�������</param>
	/// <returns>��������� ���������</returns>
	vector<int> MultiplyVecAndMatrx(vector<int>& vec, vector<vector<int>>& mat);

	/// <summary>
	/// ��������� ������������ ����������� ������� �� ��������������� ������ 
	/// </summary>
	/// <param name="vec">���������� ������</param>
	/// <param name="vecTransposed">��������������� ������</param>
	/// <returns></returns>
	int ScalarProduct(const vector<int>& vec, const vector<int>& vecTransposed);

	/// <summary>
	/// ���������� ����� �������
	/// </summary>
	/// <param name="razmerVector">����������� �������</param>
	/// <param name="vec">������������ ������</param>
	/// <param name="rankMatrix">����������� �������</param>
	/// <param name="myMatrix">������������ �������</param>
	/// <param name="resultVecAndMatrc">��������� ��������� ������� �� �������</param>
	/// <param name="vecScalrProduct">��������� ������� �� �������</param>
	/// <param name="result">�������� ���������</param>
	void VectorLength(int& razmerVector, vector<int>& vec, int& rankMatrix, vector<vector<int>>& myMatrix,
		vector<int>& resultVecAndMatrc, int& vecScalrProduct, double& result);
	/// <summary>
	/// ������ �������
	/// </summary>
	void StartLab1();
};

