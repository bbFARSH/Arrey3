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

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(short arr[], const int n);
void Print(float arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(short arr[], const int n);
void Sort(float arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
short Sum(short arr[], const int n);
float Sum(float arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(short arr[], const int n);
float Avg(float arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
int MinValueIn(char arr[], const int n);
short MinValueIn(short arr[], const int n);
float MinValueIn(float arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
int MaxValueIn(char arr[], const int n);
short MaxValueIn(short arr[], const int n);
float MaxValueIn(float arr[], const int n);


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
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << "\t";
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				short buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int MinValueIn(char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
short MinValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
float MinValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int MaxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
short MaxValueIn(short arr[], const int n)
{
	short max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
float MaxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}