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
	cout << "����� ���� ��������� � �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(arr, n) << endl << endl;

	cout << "Double" << endl;
	const int B_size = 8;
	double brr[B_size];
	FillRand(brr, B_size);
	Print(brr, B_size);
	Sort(brr, B_size);
	Print(brr, B_size);
	cout << "����� ���� ��������� � �������: " << Sum(brr, B_size) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, B_size) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(brr, B_size) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(brr, B_size) << endl << endl;
	
	cout << "Char" << endl;
	const int �_SIZE = 8;
	char crr[�_SIZE];
	FillRand(crr, �_SIZE);
	Print(crr, �_SIZE);
	Sort(crr, �_SIZE);
	Print(crr, �_SIZE);
	cout << "����� ���� ��������� � �������: " << Sum(crr, �_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(crr, �_SIZE) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(crr, �_SIZE) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(crr, �_SIZE) << endl << endl;
	
	cout <<"Short" << endl;
	const int D_SIZE = 8;
	short drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "����� ���� ��������� � �������: " << Sum(drr, D_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(drr, D_SIZE) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(drr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(drr, D_SIZE) << endl << endl;
	
	cout << "Float" << endl;
	const int F_SIZE = 8;
	float err[F_SIZE];
	FillRand(err, F_SIZE);
	Print(err, F_SIZE);
	Sort(err, F_SIZE);
	Print(err, F_SIZE);
	cout << "����� ���� ��������� � �������: " << Sum(err, F_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(err, F_SIZE) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(err, F_SIZE) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(err, F_SIZE) << endl << endl;
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