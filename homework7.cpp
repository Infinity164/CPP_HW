

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    // задание 1 
    // Создать массив типа int на 10 элементов и заполнить его случайными числами от 1 до 14. 
    // После заполнения перезаписать все числа, которые больше  десяти:  от хранимого значение отнять 10.

    /*const int an = 10;
    int array[an] = {};
    for (int i = 0; i < an; i++) {
        array[i] = 1 + rand() % 14;
        if (array[i] > 10) array[i] -= 10;
        cout << array[i] << endl;
    }*/

    // задание 2
    // Заполнить массив из 50-ти элементов нечётными числами от 1 до 99.

    /*const int n = 50;
    int array[n] = {};
    for (int i = 0; i < n; i++) {
        array[i] = 1 + rand() % 99;
        if (array[i] % 2 == 0) array[i]++;
        cout << array[i] << endl;
    }*/

    // задание 3
    // Объявить три массива. Первые два заполнить случайными значениями  от 1 до 10. 
    // В элементы третьего массива записать сумму соответствующих элементов первых двух массивов.

   /* const int n = 5;
    int arr[n] = {};
    int arr2[n] = {};
    int arrf[n] = {};
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 10;
        arr2[i] = 1 + rand() % 10;
        arrf[i] = arr[i] + arr2[i];
        cout << arrf[i] << endl;
    }*/
}


