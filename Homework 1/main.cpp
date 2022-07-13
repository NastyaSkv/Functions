//добавить функции: Factorial(принимает число, и возвращает Факториал этого числа);
//                  Power (принимает основание и показатель степени, и возвращает степень);

#include<iostream>
using namespace std;

#define TASK_1
#define TASK_2

int Factorial(int number);
int Exponentiation(int basis, int indicator);

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef TASK_1
	int number;
	cout << "Введите число: "; cin >> number;
	int f = Factorial(number);
	cout << "Факториал числа [ " << number << "! ] = " << f << endl << endl;
#endif

#ifdef TASK_2
	int basis, indicator;
	cout << "Введите основание числа: "; cin >> basis;
	cout << "Введите показатель степени: "; cin >> indicator;
	int n = Exponentiation(basis, indicator);
	cout << "Число " << basis << " в степени " << indicator << " = " << n << endl;
#endif
}

int Factorial(int number)
{
	int f = 1;
	for (int i = 1; i <= number; i++)f *= i;
	return(f);
}

int Exponentiation(int basis, int indicator)
{
	int n = 1;
	for (int i = 0; i < indicator; i++)n *= basis;
	return(n);
}