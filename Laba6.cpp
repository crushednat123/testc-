#include "Laba6.h"
#include <vector>
#include <random>
#include <iostream>


using std::vector;
using std::cout;
using std::cin;

template <typename T>
void Laba6::PrintSubsets(vector<T> arr)
{
    int n = arr.size();

    for (int i = 0; i < (1 << n); i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "}" << "\n";
    }
}

void Laba6::StartLaba6()
{
    srand(time(0));
   
    int a;
    cout << "Введите размерность массива: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Ваш случайный массив: " << '\n';
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << "" << '\n';
    cout << "Все подмножества вашего массива: " << '\n';
    PrintSubsets(arr);
}
