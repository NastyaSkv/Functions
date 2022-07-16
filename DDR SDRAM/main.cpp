#include<iostream>
using namespace std;

#define tab "\t"

void Heading(int t);
void Feffective(float freal[], float feffective[], const int r, int times);
void Screen(float freal[], float feffective[], float throughput[], const int r, int times);
void Parameters(float freal[], float feffective[], float throughput[], const int r, int N, int t, int times);

void main()
{
	setlocale(LC_ALL, "Russian");

	int N = 8;
	int t = 1;
	int times = 0;
	const int r = 4;
	float freal[r] = { 100, 133.3333, 166.6666, 200 };
	float feffective[r] = {};
	float throughput[r] = {};

	times = 2;
	Parameters(freal, feffective, throughput, r, N, t, times);  //DDR 1
	cout << endl << endl;
	times = 4; ++t;
	Parameters(freal, feffective, throughput, r, N, t, times);  //DDR 2
	cout << endl << endl;
	times = 8; ++t;
	Parameters(freal, feffective, throughput, r, N, t, times);  //DDR 3
	cout << endl << endl;
	times = 16; ++t;
	Parameters(freal, feffective, throughput, r, N, t, times);  //DDR 4
	cout << endl << endl;
	times = 32; ++t;
	Parameters(freal, feffective, throughput, r, N, t, times);  //DDR 5
}

void Heading(int t)                                                                                             //вывод шапки
{
	cout << "----------" << tab << " DDR " << t << " SDRAM " << tab << "----------" << endl << endl;
	cout << "Freal, MHz" << tab << "Feffective, MHz " << tab << "N, Byte " << tab << "Throughput, MBps" << endl;
}

void Feffective(float freal[], float feffective[], const int r, int times)                                      //подсчет эффективной частоты
{
	for (int i = 0; i < r; i++)
	{
		feffective[i] = freal[i] * times;
	}
}

void Screen(float freal[], float feffective[], float throughput[], const int r, int N)                          //вывод на экран
{
	for (int i = 0; i < r; i++)
	{
		cout << (int)freal[i] << tab << tab << tab << (int)feffective[i] << tab << tab << N << tab << tab << tab << (int)throughput[i] << endl;
	}
}

void Parameters(float freal[], float feffective[], float throughput[], const int r, int N, int t, int times)    //общая ф-я для одного DDR
{
	Heading(t);                                       //вывод шапки
	Feffective(freal, feffective, r, times);          //подсчет эффективной частоты
	Feffective(feffective, throughput, r, N);         //вызываем ещё раз функцию, но считаем пропускную способность
	Screen(freal, feffective, throughput, r, N);      //вывод на экран
}