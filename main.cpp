#include <iostream>

using std::cout;
using std::endl;
using std::cerr;
using std::cin;

unsigned long long int Factorial(unsigned short int n);
unsigned long long int Fibonacci(unsigned short int n);



int main() {
	cout << Factorial(5);
	return 0;
}

unsigned long long int Factorial(unsigned short int n){
	if (n <= 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

unsigned long long int Fibonacci(unsigned short int n){
	return 0;
}
