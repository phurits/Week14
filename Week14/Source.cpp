#include<iostream>
using namespace std;

double Addition(double* ptr1, double* ptr2);
double Subtraction(double* ptr1, double* ptr2);

int main()
{
	char choice;
	double num[3];
	cout << "\tChoose between '+' or '-'\n";
	cin >> choice;
	do
	{
		if (choice != '+' && choice != '-')
		{
			cout << "\tChoose Again\n";
			cin >> choice;
		}
	} while (choice != '+' && choice != '-');
	cout << "\tInput 2 number\n";
	cin >> num[0] >> num[1];
	if (choice == '+')
		num[2] = Addition(&num[0], &num[1]);
	else if (choice == '-')
		num[2] = Subtraction(&num[0], &num[1]);
	cout << "Answer: " << num[2];
	return 0;
}

double Addition(double *ptr1, double *ptr2)
{
	*ptr1 = *ptr1 + *ptr2;
	return *ptr1;
}

double Subtraction(double* ptr1, double* ptr2)
{
	*ptr1 = *ptr1 - *ptr2;
	return *ptr1;
}

