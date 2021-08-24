#include<iostream>
#include<conio.h>
#include <Windows.h>
using namespace std;

void Factorial(int n);
void Power(int n, int i);
void Fibonacci(int n);
void Fibonacci2(int n);
void tictactoe(int n);
void main()
{
 
	setlocale(LC_ALL, "Russian");

	
	cout << "Для вывод меню программ нажмите на Enter: " << endl;
	char program;
	do
	{
	int n;
	int y;
	program = _getch();
	switch (program)
	{
	
	case '1':
		system("CLS");
		cout << "Введите число: " << endl;
		cin >> n;
		Factorial(n);
		cout << endl;
		break;
	case '2':
		system("CLS");
		cout << "Введите число и сепень числа: " << endl;
		cin >> n;
		cin >> y;
		cout << "Число " << n << " в степени " << y << " равно: ";
		Power(n, y);
		break;
	case '3':
		system("CLS");
		cout << "Введите заданное кол-во значений из ряда Фибоначчи" << endl;
		cin >> n;
		Fibonacci(n);
		break;
	case '4':
		system("CLS");
		cout << "Введте число до которого ввыводиьь ряд Фибоначчи: " << endl;
		cin >> n;
		Fibonacci2(n);
		break;
	case 13:
		system("CLS");
		cout << "Программа №1 ""\"Рекурсивную функцию Factorial, которая принимает число. и возвращает факториал этого числа""\": " << endl;
		cout << "Программа №2 ""\"Рекурсивную функцию Power, которая возводит указанное число в указанную степень""\": " << endl;
		cout << "Программа №3 ""\"Рекурсивную функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи""\": " << endl;
		cout << "Программа №4 ""\"Рекурсивную функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа""\": " << endl;
		cout << "Программа №5 ""\"Скоро!!!В следующем обновлении репозирория ""\": " << endl;
		break;
	default:
		system("CLS");
		cout << "Для вывод меню программ нажмите на Enter или нажмите на escape, чтобы завершить работу: " << endl;
		break;
	}
	} while (true);
}

int result = 1;
void Factorial(int n)
{
	result *=  n;
	if (n==1)
	{
		cout << n << ' ';
		cout << "Факториал числа: " << result;
		return;
	}
	cout << n << '*';
	Factorial(n-1);
}
int j = 1;
int n1;
void  Power(int n, int f)
{
	if (j == 1)
	{
	 n1 = n;
	}
	if (f == 1)
	{
		cout << n1 << endl;
		return;
	}
	n1 *= n;
	++j;
	Power(n,f-1);
}
int el1 = 1;
int el2 = 0;
int result3 = 0;
int i = 0;
int result2 = 0;

void Fibonacci(int n)
	{
	if (i==n)
	{
		cout << "Ряд фибоначи";
		return;
	}
	++i;
	result2 = el1 + el2;
	i % 2 == 0 ? el2 = result2 : el1 = result2;
	cout << result2<<" ";
	Fibonacci(n);
}

void Fibonacci2(int n)
{
	if (result3 >= n)
	{
		cout << "Ряд фибоначи";
		return;
	}
	++i;
	result3 = el1 + el2;
	i % 2 == 0 ? el2 = result3 : el1 = result3;
	cout << result3<<" ";
	Fibonacci2(n);
}

void tictactoe(int n)
{
	
}