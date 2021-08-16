#include<iostream>
using namespace std;

void Factorial(int n);
void Power(int n, int i);
void Fibonacci(int n);
void main()
{
 #ifdef DEBUG
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int y;
	int e;
	int h;
	cin >> n;
	Factorial(n);
	cout << endl;
	cin >> y;
	cin >> e;
	cout << "Число " << y << " в степени " << e << " равно:";
	Power(y, e);
#endif // DEBUG
	setlocale(LC_ALL, "Russian");
	int h;
	cin>> h;
	Fibonacci(h);
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
int el1 = 0;
int el2 = 1;
int result3 = 1;
int i = 0;
int result2 = 0;

	void Fibonacci(int n)
	{
	i++;
	i / 2 == 0 ? el1 += el2 && cout << el1 : el2 += el1 && cout << el2;
	if (i>=n)
	{
		cout << "Ряд фибоначи";
		return;
	}
	Fibonacci(i / 2 == 0 ? el1:el2);
}