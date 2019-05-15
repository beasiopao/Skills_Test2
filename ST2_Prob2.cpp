#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x, multp;

	cout << "Enter a number: ";
	cin >> x;

	cout <<"\nMultiplication Table of " << x << ":\n";
	for (multp=1 ; multp<11; multp++)

	cout << multp <<" * "<< x << " = " << multp*x << "\n";


getch ();
return 0;
}