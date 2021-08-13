#include "Sort.h"
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
}
void Sort(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						short buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
}
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						float buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int a = 0; a < ROWS; a++)
			{
				for (int b = 0; b < COLS; b++)
				{
					if (arr[a][b] > arr[i][j])
					{
						char buffer = arr[i][j];
						arr[i][j] = arr[a][b];
						arr[a][b] = buffer;
					}
				}
			}
		}
	}
}