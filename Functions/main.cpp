//Functions

#include<iostream>
using namespace std;

int Add(int a, int b); //Прототип функции
int Sub(int a, int b); //здесь мы говорим, что такая функция есть
int Mul(int a, int b); //реализация функция (определение функции - Function definition)
double Div(int a, int b);
int Factorial(int n);

void main()
{
	setlocale(LC_ALL, "");

	//синтаксис функции:
	   /*type name(parameters)
	   {
	      	...;
		    group - of - statements;
		    ...;
	   }*/

	int a, b;
	cout << "Введите 2 числа: "; cin >> a >> b;
	int c = Add(a, b); //использование функции (вызов функции - function call)
	//присваиваем переменной с значение функции
	cout << a << " + " << b <<" = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl; //теперь вызовем не переменную, а саму функцию
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	//cout << << Factorial << endl;
}

int Add(int a, int b) //функция сложения 2х чисел a и b
{
	int sum = a + b;
	return(sum);        //здесь функция возвращает значение суммы
}
int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / b; //поменяли int на double, чтобы вывести значение с запятой
}

int Factorial(int n)
{
	int f = 1;
	for (int i = 0; i <= n; i++)
	{
		f *= i;
	}
	return(f);
}