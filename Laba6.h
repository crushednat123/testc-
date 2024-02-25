#pragma once
#include <vector>
using std::vector;
class Laba6
{
public:
	/// <summary>
	/// Создаёт шаблон функции любого типа
	/// </summary>
	/// <type param name="T">тип передаваемого параметра</type param>
	/// <param name="arr">миссив</param>
	template <typename T>
	void PrintSubsets(vector<T> arr);

	/// <summary>
	/// Запуск лабы 6
	/// </summary>
	void StartLaba6();
};

