#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::setw;

unsigned long long int Factorial(unsigned short int n);
unsigned long long int Fibonacci(unsigned short int n);



int main() {
	cout << "Factorial(5) = " << Factorial(5) << endl;
	cout << "Fibonacci" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << setw(4) << i << setw(6) << Fibonacci(i) << endl;
	}
	return 0;
}

unsigned long long int Factorial(unsigned short int n){
	if (n <= 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

unsigned long long int Fibonacci(unsigned short int n){
	if (n <= 1)
		return n;
	else
		return Fibonacci(n - 2) + Fibonacci(n - 1);
}
