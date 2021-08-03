#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
const int  ROWS = 3;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void FillRand(char arr[], const int n);
//void FillRand(long arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void Print(char arr[], const int n);
//void Print(long arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
//void Sort(char arr[], const int n);
//void Sort(long arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
//char Sum(char arr[], const int n);
//long Sum(long arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
//char Avg(char arr[], const int n);
//long Avg(long arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
//char minValueIn(char arr[], const int n);
//long minValueIn(long arr[], const int n);
	
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
//char maxValueIn(char arr[], const int n);
//long maxValueIn(long arr[], const int n);
//void Shiftleft(int arr[], const int n, int shear);
//void Shiftright(int arr[], const int n, int shear);
void main()
{
	setlocale(LC_ALL, "Ru");
	cout << "Int: " << endl;
	const int n = 5;
	int arr[n];
	int shear;
	
	{
		FillRand(arr, n);
		Print(arr, n);
		Sort(arr, n);
		Print(arr, n);
		cout << "Сумма элементов массива: " << Sum(arr,n) << endl;
		cout << "Среднее арифмитическое элементов массива: " << Avg(arr, n) << endl;
		cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
		cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
		int i_arr_2[ROWS][COLS];
		FillRand(i_arr_2, ROWS, COLS);
		Print(i_arr_2, ROWS, COLS);
		cout << "Вывод двумерного массива: " << FillRand(i_arr_2, ROWS, COLS); endl;
	}
	///////////////////////////////////////////////////////////////////////////
	cout << "Double: " << endl;
	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, B_SIZE) << endl;
	////////////////////////////////////////////////////////////////////////////////////////////
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
		arr[i] = double(rand() % 10000) / 100;
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
}void Sort(double arr[], const int n)
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
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
#ifdef DEBUG
void Shiftleft(int arr[], const int n, const int shear)
{
	for (int j = 0; j < shear; j++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Shiftright(int arr[], const int n, const int shear)
{
	Shiftright(arr, n, n - shear);
}
#endif // DEBUG
