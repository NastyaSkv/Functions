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
	cout << "¬ведите число: "; cin >> number;
	int f = Factorial(number);
	cout << "‘акториал числа [ " << number << "! ] = " << f << endl << endl;
#endif

#ifdef TASK_2
	int basis, indicator;
	cout << "¬ведите основание числа: "; cin >> basis;
	cout << "¬ведите показатель степени: "; cin >> indicator;
	int n = Exponentiation(basis, indicator);
	cout << "„исло " << basis << " в степени " << indicator << " = " << n << endl;
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