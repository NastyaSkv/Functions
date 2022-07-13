//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	const int SIZE = 8;
	int brr[SIZE];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n)   //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
}

void Print(int arr[], const int n)      //вывод массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}cout << endl;
}

void Sort(int arr[], const int n)       //сортировка по возрастанию
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