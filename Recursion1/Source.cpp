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
	cout << "������� ����� ��� ���������� ����������:"; cin>>n;
	cout << "�������� ���������� �����: " << Factorial(n);*/
	/*int base; int power; 
	cout << "������� �������� ��������� �������: "; cin >> base;
	cout << "������� �������� ���������� �������: "; cin >> power; 
	cout << base << " � ������� " << power << "=" << Pow(base, power);*/

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