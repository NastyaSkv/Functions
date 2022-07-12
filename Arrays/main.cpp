//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Soft(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Soft(arr, n);
	Print(arr, n);
	FillRand(arr, n);
	/*//заполним массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}

	//вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl;*/
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Soft(int arr[], const int n)
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