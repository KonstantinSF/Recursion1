#include <iostream>
using namespace std; 
#define tab "\t"
int Factorial(int n); 
int factorial = 1;
int FactorialIdeal(int n);
//int Pow(int base, int power);
double Power(int base, double power);
int powResult = 1;
void FibonacсiLimit(int limitFibonacсi, int a=0, int b=1);//отображение ряда Фибоначчи, числом меньше указанного
void FibonacсiNum(int NumFibonacci, int i=0, long long a = 0, long long b = 1);//отображение ряда Фибоначчи, ограниченное количеством чисел

void main()
{
	setlocale(LC_ALL, "");
	int n; 
	int limitFibonacci;
	int NumFibonacci;
	cout << "Введите число для вычисления факториала:"; cin>>n;
	cout << "Значение факториала равно: " << Factorial(n) << endl; 
	cout << "или другим способом: "<<FactorialIdeal(n) << endl;
	int base; int power; 
	cout << "Введите значения основания степени: "; cin >> base;
	cout << "Введите значение показателя степени: "; cin >> power; 
	//cout << base << " в степени " << power << "=" << Pow(base, power) << endl;
	cout << base << " в степени " << power << "= " << Power(base, power) << endl;
	cout << "Введите предельное число для ряда Фибоначчи: "; cin >> limitFibonacci; 
	FibonacсiLimit(limitFibonacci); cout << endl; 
	cout << "Введите предельный номер числа из ряда Фибоначчи: "; cin >> NumFibonacci;
	FibonacсiNum(NumFibonacci);
}

int Factorial(int n)
{
	if (n == 0)
	{
	return factorial;
	} 
	factorial*= n; 
	Factorial(n-1);
}
int FactorialIdeal(int n)
{
	if (n == 0) return 1;
	else return n * FactorialIdeal(n - 1);
	// n==0?1:FactorialIkeal (n-1); При помощи тернарного оператора
}
//int Pow(int base, int power)
//{
//	if (power == 0) return powResult; 
//	powResult *=base;
//	Pow(base, power - 1);
//}
double Power(int base, double power)
{
	/*if (power == 0) return 1;
	else if (power > 0) return base * Power(base, power - 1);
	else return 1 / base * Power(base, power + 1);*/
	return power == 0 ? 1 : power > 0? base * Power(base, power - 1) : 1 / base * Power(base, power + 1);
}

void FibonacсiLimit(int limitFibonacci, int a, int b)
{
	if (a> limitFibonacci) return;
	cout << a << tab; 
	FibonacсiLimit(limitFibonacci, b, a+b);
}
void FibonacсiNum(int NumFibonacci, int i, long long a, long long b)
{
	i++;
if (i>NumFibonacci) return;
cout << a << tab; 
FibonacсiNum(NumFibonacci, i, b, a + b);
}