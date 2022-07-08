//Functions

#include<iostream>
using namespace std;

int Add(int a, int b) //функция сложения 2х чисел a и b
{
	int c = a + b;
	return(c);
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
	int c = Add(a, b); //присваиваем переменной с значение функции
	cout << a << " + " << b <<" = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl; //теперь вызовем не переменную, а саму функцию
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}