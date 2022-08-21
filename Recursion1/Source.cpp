#include <iostream>
using namespace std; 

int Factorial(int n); 
int factorial = 1;
int Pow(int base, int power);
int powResult = 1; 

void main()
{
	setlocale(LC_ALL, "");
	/*int n; 
	cout << "Введите число для вычисления факториала:"; cin>>n;
	cout << "Значение факториала равно: " << Factorial(n);*/
	/*int base; int power; 
	cout << "Введите значения основания степени: "; cin >> base;
	cout << "Введите значение показателя степени: "; cin >> power; 
	cout << base << " в степени " << power << "=" << Pow(base, power);*/

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
int Pow(int base, int power)
{
	if (power == 0) return powResult; 
	powResult *=base;
	Pow(base, power - 1);
}