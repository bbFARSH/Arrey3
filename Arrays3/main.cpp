#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
void main()
{
    setlocale(LC_ALL, "");
    cout << "Int:" << endl;
    int i_arr_2[ROWS][COLS];
    FillRand(i_arr_2, ROWS, COLS);
    Print(i_arr_2, ROWS, COLS);
    Sort(i_arr_2, ROWS, COLS);
    cout << endl;
    Print(i_arr_2, ROWS, COLS);
    cout << "Сумма всех элементов в массиве: " << Sum(i_arr_2, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
    cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
    cout << endl;

    cout << "Double:" << endl;
    double i_arr_3[ROWS][COLS];
    FillRand(i_arr_3, ROWS, COLS);
    Print(i_arr_3, ROWS, COLS);
    Sort(i_arr_3, ROWS, COLS);
    cout << endl;
    Print(i_arr_3, ROWS, COLS);
    cout << "Сумма всех элементов в массиве: " << Sum(i_arr_3, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_3, ROWS, COLS) << endl;
    cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_3, ROWS, COLS) << endl;
    cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_3, ROWS, COLS) << endl;
    cout << endl;

    cout << "Short:" << endl;
    short i_arr_4[ROWS][COLS];
    FillRand(i_arr_4, ROWS, COLS);
    Print(i_arr_4, ROWS, COLS);
    Sort(i_arr_4, ROWS, COLS);
    cout << endl;
    Print(i_arr_4, ROWS, COLS);
    cout << "Сумма всех элементов в массиве: " << Sum(i_arr_4, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_4, ROWS, COLS) << endl;
    cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_4, ROWS, COLS) << endl;
    cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_4, ROWS, COLS) << endl;
    cout << endl;

    cout << "Float:" << endl;
    float i_arr_5[ROWS][COLS];
    FillRand(i_arr_5, ROWS, COLS);
    Print(i_arr_5, ROWS, COLS);
    Sort(i_arr_5, ROWS, COLS);
    cout << endl;
    Print(i_arr_5, ROWS, COLS);
    cout << "Сумма всех элементов в массиве: " << Sum(i_arr_5, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_5, ROWS, COLS) << endl;
    cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_5, ROWS, COLS) << endl;
    cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_5, ROWS, COLS) << endl;
    cout << endl;

    cout << "Char:" << endl;
    char i_arr_6[ROWS][COLS];
    FillRand(i_arr_6, ROWS, COLS);
    Print(i_arr_6, ROWS, COLS);
    Sort(i_arr_6, ROWS, COLS);
    cout << endl;
    Print(i_arr_6, ROWS, COLS);
    cout << "Сумма всех элементов в массиве: " << Sum(i_arr_6, ROWS, COLS) << endl;
    cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_6, ROWS, COLS) << endl;
    cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_6, ROWS, COLS) << endl;
    cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_6, ROWS, COLS) << endl;
    cout << endl;
}