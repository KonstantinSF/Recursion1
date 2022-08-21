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
	cout << "¬ведите число дл€ вычислени€ факториала:"; cin>>n;
	cout << "«начение факториала равно: " << Factorial(n);*/
	/*int base; int power; 
	cout << "¬ведите значени€ основани€ степени: "; cin >> base;
	cout << "¬ведите значение показател€ степени: "; cin >> power; 
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