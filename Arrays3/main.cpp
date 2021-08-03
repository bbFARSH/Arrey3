#include "stdafx.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
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
		cout << "����� ��������� �������: " << Sum(arr,n) << endl;
		cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
		cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
		cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
		cout << "����� ���������� �������: " << endl;
		int i_arr_2[ROWS][COLS];
		FillRand(i_arr_2, ROWS, COLS);
		Print(i_arr_2, ROWS, COLS);
	}
	///////////////////////////////////////////////////////////////////////////
	cout << "Double: " << endl;
	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "����� ��������� �������: " << Sum(brr, B_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, B_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, B_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, B_SIZE) << endl;
	////////////////////////////////////////////////////////////////////////////////////////////
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
