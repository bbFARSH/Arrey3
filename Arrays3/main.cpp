#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Sort(T arr[], const int n);


template <typename T>
T Sum(T arr[], const int n);

template <typename T>
double Avg(T arr[], const int n);

template <typename T>
T MinValueIn(T arr[], const int n);

template <typename T>
T MaxValueIn(T arr[], const int n);



void main()
{
	setlocale(LC_ALL, "Ru");
	cout << "Int" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов в массиве: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl << endl;

	cout << "Double" << endl;
	const int B_size = 8;
	double brr[B_size];
	FillRand(brr, B_size);
	Print(brr, B_size);
	Sort(brr, B_size);
	Print(brr, B_size);
	cout << "Сумма всех элементов в массиве: " << Sum(brr, B_size) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, B_size) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, B_size) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, B_size) << endl << endl;
	
	cout << "Char" << endl;
	const int С_SIZE = 8;
	char crr[С_SIZE];
	FillRand(crr, С_SIZE);
	Print(crr, С_SIZE);
	Sort(crr, С_SIZE);
	Print(crr, С_SIZE);
	cout << "Сумма всех элементов в массиве: " << Sum(crr, С_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, С_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(crr, С_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(crr, С_SIZE) << endl << endl;
	
	cout <<"Short" << endl;
	const int D_SIZE = 8;
	short drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "Сумма всех элементов в массиве: " << Sum(drr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(drr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(drr, D_SIZE) << endl << endl;
	
	cout << "Float" << endl;
	const int F_SIZE = 8;
	float err[F_SIZE];
	FillRand(err, F_SIZE);
	Print(err, F_SIZE);
	Sort(err, F_SIZE);
	Print(err, F_SIZE);
	cout << "Сумма всех элементов в массиве: " << Sum(err, F_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(err, F_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(err, F_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(err, F_SIZE) << endl << endl;
	cout << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 10;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template <typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}