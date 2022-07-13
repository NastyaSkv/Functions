//добавить функции: Sum (возвращает сумму элементов массива);
//                  Avg (возвращает среднее-арифметическое элементов массива);
//                  minValueIn (возвращает минимальное значение из массива);
//                  maxValueIn (возвращает максимальное значение из массива);
//                  shiftLeft (циклически сдвигает массив на заданное число элементов влево);
//                  shiftRight (циклически сдвигает массив на заданное число элементов вправо).

#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
float Avg(int arr[], const int n, int s);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int shift);
void shiftRight(int arr[], const int n, int shift);
void Streak();

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int shift;

	FillRand(arr, n);                                                                                //ф-я заполнения
	Print(arr, n);                                                                                   //ф-я вызова
	int s = Sum(arr, n);                                                                             //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << s << endl << endl;
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(arr, n, s) << endl << endl; //ф-я среднего арифметического
	int min = minValueIn(arr, n);                                                                    //ф-я мин. значения
	cout << "**3.**  Минимальное значение массива = " << min << endl << endl;
	int max = maxValueIn(arr, n);                                                                    //ф-я макс. значения
	cout << "**4.**  Максимальное значение массива = " << max << endl << endl;
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(arr, n, shift);                                                                        //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(arr, n);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(arr, n, shift);                                                                       //ф-я сдвига вправо
} 

void FillRand(int arr[], const int n)        //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)           //вывод массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}

int Sum(int arr[], const int n)              //сумма элементов массива
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}

float Avg(int arr[], const int n, int s)
{
	return(s / (float)n);
}

int minValueIn(int arr[], const int n)       //возвращает минимальное значение из массива
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}

int maxValueIn(int arr[], const int n) //возвращает максимальное значение из массива
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}

void shiftLeft(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	do {
		for (int i = 0; ; )
		{
			int buffer = arr[n - 1];
			arr[n - 1] = arr[i];
			arr[i] = arr[i + 1];
			for (int j = (i + 1); j < (n - 2); j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 2] = buffer;
			break;
		}shift--;
	} while (shift);
}

void shiftRight(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо
{
	do {
		for (int i = 0; ; )
		{
			int buffer = arr[n - 1];
			for (int j = (n - 1); j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i] = buffer;
			break;
		}shift--;
	} while (shift);
	Print(arr, n);
}

void Streak()
{
	string p = "- - - - - - - - - - - - - - - - - - - - -";
	cout << p << endl << p << endl << endl;
}