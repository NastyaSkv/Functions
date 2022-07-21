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
#define ONE_INT
#define ONE_FLOAT
#define ONE_DOUBLE
#define ONE_CHAR
#define TWO_INT
#define TWO_FLOAT
#define TWO_DOUBLE
#define TWO_CHAR

const int ROWS = 2;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>                                                               //шаблон ф-и Print для одномерного
void Print(T arr[], const int n);
template<typename T>                                                               //шаблон ф-и Print для двумерного
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);
  
template<typename T>                                                               //шаблон ф-и Sum для одномерного
T Sum(T arr[], const int n);
template<typename T>                                                               //шаблон ф-и Sum для двумерного
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>                                                               //шаблон ф-и Avg для одномерного              
double Avg(T arr[], const int n);
template<typename T>                                                               //шаблон ф-и Avg для двумерного  
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
 
template<typename T>                                                               //шаблон ф-и minValueIn для одномерного   
T minValueIn(T arr[], const int n);
template<typename T>                                                               //шаблон ф-и minValueIn для двумерного
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>                                                               //шаблон ф-и maxValueIn для одномерного                       
T maxValueIn(T arr[], const int n);
template<typename T>                                                                 //шаблон ф-и maxValueIn для двумерного
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>                                                               //шаблон ф-и shiftLeft для одномерного
void shiftLeft(T arr[], const int n, int shift);
template<typename T>                                                               //шаблон ф-и shiftLeft для двумерного
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

template<typename T>                                                               //шаблон ф-и shiftRight для одномерного
void shiftRight(T arr[], const int n, int shift);
template<typename T>                                                               //шаблон ф-и shiftRight для двумерного   
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift);

void Streak();

void main()
{
	setlocale(LC_ALL, "");
	int shift;

	const int n = 10;
	int arr[n];

	const int w = 9;
	float crr[w];

	const int m = 8;
	double brr[m];

	const int t = 7;
	char vrr[t];

	int drr[ROWS][COLS];
	float trr[ROWS][COLS];
	double yrr[ROWS][COLS];
	char urr[ROWS][COLS];

	cout << tab << tab << "ОДНОМЕРНЫЕ МАССИВЫ" << endl << endl;

#ifdef ONE_INT
	cout << endl << endl << qw "->   INT   <-" << qw << endl;
	FillRand(arr, n);                                                                                //ф-я заполнения int
	Print(arr, n);                                                                                   //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(arr, n) << endl << endl;                     //ф-я суммы     
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(arr, n) << endl << endl;    //ф-я среднего арифметического                                                                 
	cout << "**3.**  Минимальное значение массива = " << minValueIn(arr, n) << endl << endl;         //ф-я мин. значения                                                             
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(arr, n) << endl << endl;        //ф-я макс. значения
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

#ifdef ONE_FLOAT
	cout << endl << endl << qw "->   FLOAT   <-" << qw << endl;
	FillRand(crr, w);                                                                                //ф-я заполнения int
	Print(crr, w);                                                                                   //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(crr, w) << endl << endl;                     //ф-я суммы   
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(crr, w) << endl << endl;    //ф-я среднего арифметического                                                               
	cout << "**3.**  Минимальное значение массива = " << minValueIn(crr, w) << endl << endl;         //ф-я мин. значения                                                          
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(crr, w) << endl << endl;        //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(crr, w, shift);                                                                        //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(crr, w);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(crr, w);
	Print(crr, w);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(crr, w, shift);                                                                       //ф-я сдвига вправо
#endif

#ifdef ONE_DOUBLE
	cout << endl << endl << qw "->  DOUBLE   <-" << qw << endl;
	FillRand(brr, m);                                                                                 //ф-я заполнения double
	Print(brr, m);                                                                                    //ф-я вызова                                                                         
	cout << "**1.**  Сумма элементов массива = " << Sum(brr, m) << endl << endl;                      //ф-я суммы
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(brr, m) << endl << endl;     //ф-я среднего арифметического                                                             
	cout << "**3.**  Минимальное значение массива = " << minValueIn(brr, m) << endl << endl;          //ф-я мин.значения                                                                  
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(brr, m) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(brr, m, shift);                                                                         //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(brr, m);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(brr, m, shift);                                                                        //ф-я сдвига вправо
#endif

#ifdef ONE_CHAR
	cout << endl << endl << qw "->   CHAR   <-" << qw << endl;
	FillRand(vrr, t);                                                                                 //ф-я заполнения int
	Print(vrr, t);                                                                                    //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(vrr, t) << endl << endl;                      //ф-я суммы   
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(vrr, t) << endl << endl;     //ф-я среднего арифметического                                                                  
	cout << "**3.**  Минимальное значение массива = " << minValueIn(vrr, t) << endl << endl;          //ф-я мин. значения                                                                   
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(vrr, t) << endl << endl;         //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(vrr, t, shift);                                                                         //ф-я сдвига влево
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
	cout << endl << endl << qw "->   INT   <-" << qw << endl;
	FillRand(drr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(drr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(drr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(drr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(drr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(drr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(drr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(drr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(drr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(drr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(drr, ROWS, COLS, shift);
#endif

#ifdef TWO_FLOAT
	cout << endl << endl << qw "->   FLOAT   <-" << qw << endl;
	FillRand(trr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(trr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(trr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(trr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(trr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(trr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(trr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(trr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(trr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(trr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(trr, ROWS, COLS, shift);
#endif

#ifdef TWO_DOUBLE
	cout << endl << endl << qw "->   DOUBLE   <-" << qw << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(yrr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(yrr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(yrr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(yrr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(yrr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(yrr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(yrr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(yrr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(yrr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(yrr, ROWS, COLS, shift);
#endif

#ifdef TWO_CHAR
	cout << endl << endl << qw "->   CHAR   <-" << qw << endl;
	FillRand(urr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(urr, ROWS, COLS);                                                                                  //ф-я вызова                                                                            //ф-я суммы
	cout << "**1.**  Сумма элементов массива = " << Sum(urr, ROWS, COLS);
	cout << "**2.**  Среднее арифметическое элементов массива = " << Avg(urr, ROWS, COLS) << endl << endl; //ф-я среднего арифметического                                                                   
	cout << "**3.**  Минимальное значение массива = " << minValueIn(urr, ROWS, COLS) << endl << endl;               //ф-я мин. значения
	cout << "**4.**  Максимальное значение массива = " << maxValueIn(urr, ROWS, COLS) << endl << endl;              //ф-я макс. значения
	cout << "Введите количество сдвигов: "; cin >> shift;
	shiftLeft(urr, ROWS, COLS, shift);                                                                              //ф-я сдвига влево
	cout << endl << "**5.**  Сдвиг массива влево:" << endl;
	Print(urr, ROWS, COLS);
	Streak();
	cout << "Для \"чистоты\" эксперимента сгенерируем новый массив: " << endl;
	FillRand(urr, ROWS, COLS);                                                                           //ф-я заполнения int
	Print(urr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> shift;
	cout << endl << "**6.**  Сдвиг массива вправо:" << endl;
	shiftRight(urr, ROWS, COLS, shift);
#endif
}

void FillRand(int arr[], const int n)        //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)        //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(double arr[], const int n)        //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(char arr[], const int n)        //заполнение массива  случайными числами 
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
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 1000;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 1000;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>                                                            //шаблон ф-и Print для одномерного
void Print(T arr[], const int n)           //вывод массива 
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
template<typename T>                                                            //шаблон ф-и Print для двумерного
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)           //вывод массива 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl << endl;
	}
}

template<typename T>                                                            //шаблон ф-и Sum для одномерного
T Sum(T arr[], const int n)              //сумма элементов массива 
{
	T s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
template<typename T>                                                            //шаблон ф-и Sum для двумерного
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)              //сумма элементов массива 
{
	T s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}cout << endl;
	}
	return(s);
}            

template<typename T>                                                            //шаблон ф-и Avg для одномерного
double Avg(T arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
template<typename T>                                                            //шаблон ф-и Avg для двумерного
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>                                                            //шаблон ф-и minValueIn для одномерного
T minValueIn(T arr[], const int n)       //возвращает минимальное значение из массива 
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return(min);
}
template<typename T>                                                            //шаблон ф-и minValueIn для двумерного
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)       //возвращает минимальное значение из массива 
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return(min);
}

template<typename T>                                                            //шаблон ф-и maxValueIn для одномерного
T maxValueIn(T arr[], const int n) //возвращает максимальное значение из массива
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return(max);
}
template<typename T>                                                            //шаблон ф-и maxValueIn для двумерного
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS) //возвращает максимальное значение из массива
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return(max);
}

template<typename T>                                                            //шаблон ф-и shiftLeft для одномерного
void shiftLeft(T arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов влево
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];            //буферная переменная
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>                                                            //шаблон ф-и shiftLeft для двумерного
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов влево 
{
	for (int y = 0; y < shift; y++)
	{
		T buffer = arr[0][0];            //буферная переменная
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1)break;
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template<typename T>                                                            //шаблон ф-и shiftRight для одномерного
void shiftRight(T arr[], const int n, int shift) //циклически сдвигает массив на заданное число элементов вправо
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
template<typename T>                                                            //шаблон ф-и shiftRight для двумерного
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift) //циклически сдвигает массив на заданное число элементов вправо
{
	for (int y = 0; y < shift; y++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0) { break; }
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
	Print(arr, ROWS, COLS);
}

void Streak()
{
	string p = "- - - - - - - - - - - - - - - - - - - - -";
	cout << p << endl << p << endl << endl;
}