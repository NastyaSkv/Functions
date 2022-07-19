//�������� ������������� ������� ��� ������ � ����������� � ���������� ���������
// ���� int, float, double � char:: 
//                  Sum (���������� ����� ��������� �������);
//                  Avg (���������� �������-�������������� ��������� �������);
//                  minValueIn (���������� ����������� �������� �� �������);
//                  maxValueIn (���������� ������������ �������� �� �������);
//                  shiftLeft (���������� �������� ������ �� �������� ����� ��������� �����);
//                  shiftRight (���������� �������� ������ �� �������� ����� ��������� ������).

#include<iostream>
using namespace std;

#define tab "\t"
#define qw "- - - - - - - - -"
#define ONE_INT
#define ONE_DOUBLE
#define ONE_CHAR

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

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

	cout << tab << tab << "���������� �������" << endl << endl;
	const int n = 10;
	int arr[n];
	const int m = 9;
	double brr[m];
	const int t = 8;
	char vrr[t];

#ifdef ONE_INT
	cout << qw "->   INT   <-" << qw << endl;
	FillRand(arr, n);                                                                                //�-� ���������� int
	Print(arr, n);                                                                                   //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(arr, n) << endl << endl;
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(arr, n) << endl << endl; //�-� �������� ���������������
	int min = minValueIn(arr, n);                                                                    //�-� ���. ��������
	cout << "**3.**  ����������� �������� ������� = " << min << endl << endl;
	int max = maxValueIn(arr, n);                                                                    //�-� ����. ��������
	cout << "**4.**  ������������ �������� ������� = " << max << endl << endl;
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(arr, n, shift);                                                                        //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(arr, n);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(arr, n, shift);                                                                       //�-� ������ ������
#endif

#ifdef ONE_DOUBLE
	cout << qw "->  DOUBLE   <-" << qw << endl;
	FillRand(brr, m);                                                                                 //�-� ���������� double
	Print(brr, m);                                                                                    //�-� ������                                                                         
	cout << "**1.**  ����� ��������� ������� = " << Sum(brr, m) << endl << endl;                      //�-� �����
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(brr, m) << endl << endl;     //�-� �������� ���������������                                                             
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(brr, m) << endl << endl;          // � - � ���.��������                                                                  
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(brr, m) << endl << endl;         //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(brr, m, shift);                                                                          //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(brr, m);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(brr, m);
	Print(brr, m);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(brr, m, shift);                                                                       //�-� ������ ������
#endif

#ifdef ONE_CHAR
	cout << qw "->   CHAR   <-" << qw << endl;
	FillRand(vrr, t);                                                                                //�-� ���������� int
	Print(vrr, t);                                                                                 //�-� ������                                                                            //�-� �����
	cout << "**1.**  ����� ��������� ������� = " << Sum(vrr, t) << endl << endl;
	cout << "**2.**  ������� �������������� ��������� ������� = " << Avg(vrr, t) << endl << endl; //�-� �������� ���������������                                                                  
	cout << "**3.**  ����������� �������� ������� = " << minValueIn(vrr, t) << endl << endl;           //�-� ���. ��������                                                                   
	cout << "**4.**  ������������ �������� ������� = " << maxValueIn(vrr, t) << endl << endl;         //�-� ����. ��������
	cout << "������� ���������� �������: "; cin >> shift;
	shiftLeft(vrr, t, shift);                                                                        //�-� ������ �����
	cout << endl << "**5.**  ����� ������� �����:" << endl;
	Print(vrr, t);
	Streak();
	cout << "��� \"�������\" ������������ ����������� ����� ������: " << endl;
	FillRand(vrr, t);
	Print(vrr, t);
	cout << "������� ���������� �������: "; cin >> shift;
	cout << endl << "**6.**  ����� ������� ������:" << endl;
	shiftRight(vrr, t, shift);
#endif
}

void FillRand(int arr[], const int n)        //���������� ������� int ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)        //���������� ������� double ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 1000;
	}
}
void FillRand(char arr[], const int n)        //���������� ������� double ���������� ������� char
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)           //����� ������� int
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(double arr[], const int n)           //����� ������� double
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}
void Print(char arr[], const int n)           //����� ������� char
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;
}

int Sum(int arr[], const int n)              //����� ��������� ������� int
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
double Sum(double arr[], const int n)              //����� ��������� ������� double
{
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return(s);
}
char Sum(char arr[], const int n)              //����� ��������� ������� char
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

int minValueIn(int arr[], const int n)       //���������� ����������� �������� �� ������� int
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
double minValueIn(double arr[], const int n)       //���������� ����������� �������� �� ������� double
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
char minValueIn(char arr[], const int n)       //���������� ����������� �������� �� ������� double
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

int maxValueIn(int arr[], const int n) //���������� ������������ �������� �� ������� int
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
double maxValueIn(double arr[], const int n) //���������� ������������ �������� �� ������� double
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
char maxValueIn(char arr[], const int n) //���������� ������������ �������� �� ������� double
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

void shiftLeft(int arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� int
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� double
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ����� double
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];            //�������� ����������
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������ int
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
void shiftRight(double arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������ double
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
void shiftRight(char arr[], const int n, int shift) //���������� �������� ������ �� �������� ����� ��������� ������ double
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