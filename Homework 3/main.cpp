//Написать перегруженные функции для работы с одномерными и двумерными массивами
// типа int, float, double и char:: 
//                  Sum (возвращает сумму элементов массива);
//                  Avg (возвращает среднее-арифметическое элементов массива);
//                  minValueIn (возвращает минимальное значение из массива);
//                  maxValueIn (возвращает максимальное значение из массива);
//                  shiftLeft (циклически сдвигает массив на заданное число элементов влево);
//                  shiftRight (циклически сдвигает массив на заданное число элементов вправо).

#include<iostream>
using namespace std;

#define tab "\t"
#define qw "- - - - - - - - -"
//#define ONE_INT
//#define ONE_DOUBLE
//#define ONE_CHAR
#define TWO_INT

const int ROWS = 2;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);

void shiftLeft(int arr[], const int n, int shift);
void shiftLeft(double arr[], const int n, int shift);
void shiftLeft(char arr[], const int n, int shift);

void shiftRight(int arr[], const int n, int shift);
void shiftRight(double arr[], const int n, int shift);
void shiftRight(char arr[], const int n, int shift);

void Streak();

void main()
{
	setlocale(LC_ALL, "");
	int shift;

	cout << tab << tab << "ОДНОМЕРНЫЕ МАССИВЫ" << endl << endl;
	const int n = 10;
	int arr[n];
	
	const int m = 9;
	double brr[m];
	
	const int t = 8;
	char vrr[t];
	
	int crr[ROWS][COLS];

#ifdef ONE_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(arr, n);                                                                                //ф-я заполнения int
	Print(arr, n);                                                                                   //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(arr, n) << endl << endl;
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(arr, n) << endl << endl; //ф-я среднего арифметического
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
#endif

#ifdef ONE_DOUBLE
	cout << qw "->  DOUBLE   <-" << qw << endl;
	FillRand(brr, m);                                                                                 //ф-я заполнения double
	Print(brr, m);                                                                                    //ф-я вызова                                                                         
	cout << "**1.**  Сумма элементов массива = " << Sum(brr, m) << endl << endl;                      //ф-я суммы
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(brr, m) << endl << endl;     //ф-я среднего арифметического                                                             
	cout << "**3.**  Минимальное значение массива = " << minValueIn(brr, m) << endl << endl;          // ф - я мин.значения                                                                  
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(brr, m) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(brr, m, shift);                                                                          //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(brr, m);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(brr, m, shift);                                                                       //ф-я сдвига вправо
#endif

#ifdef ONE_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(vrr, t);                                                                                //ф-я заполнения int
	Print(vrr, t);                                                                                 //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(vrr, t) << endl << endl;
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(vrr, t) << endl << endl; //ф-я среднего арифметического                                                                  
	cout << "**3.**  Минимальное значение массива = " << minValueIn(vrr, t) << endl << endl;           //ф-я мин. значения                                                                   
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(vrr, t) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(vrr, t, shift);                                                                        //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(vrr, t);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(vrr, t);
	Print(vrr, t);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(vrr, t, shift);
#endif
cout << tab << tab << "ДВУМЕРНЫЕ МАССИВЫ" << endl << endl;
#ifdef TWO_INT
cout << qw "->   INT   <-" << qw << endl;
FillRand(crr, ROWS, COLS);                                                                           //ф-я заполнения int
Print(crr, ROWS, COLS);
#endif
}

void FillRand(int arr[], const int n)        //заполнение массива int случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)        //заполнение массива double случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(char arr[], const int n)        //заполнение массива double случайными числами char
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
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

void Print(int arr[], const int n)           //вывод массива int
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(double arr[], const int n)           //вывод массива double
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(char arr[], const int n)           //вывод массива char
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)           //вывод массива int
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}

int Sum(int arr[], const int n)              //сумма элементов массива int
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
double Sum(double arr[], const int n)              //сумма элементов массива double
{
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
char Sum(char arr[], const int n)              //сумма элементов массива char
{
	char s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}

double Avg(int arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return(char)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)       //возвращает минимальное значение из массива int
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
double minValueIn(double arr[], const int n)       //возвращает минимальное значение из массива double
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
char minValueIn(char arr[], const int n)       //возвращает минимальное значение из массива double
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}

int maxValueIn(int arr[], const int n) //возвращает максимальное значение из массива int
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
double maxValueIn(double arr[], const int n) //возвращает максимальное значение из массива double
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
char maxValueIn(char arr[], const int n) //возвращает максимальное значение из массива double
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}

void shiftLeft(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево int
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево double
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево double
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо int
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(double arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо double
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void shiftRight(char arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо double
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}

void Streak()
{
	string p = "- - - - - - - - - - - - - - - - - - - - -";
	cout << p << endl << p << endl << endl;
}