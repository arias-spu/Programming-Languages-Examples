#include <iostream>
using std::cout;
using std::endl;
using std::cin;

long int Factorial(unsigned short int n);

int main(int argc, char* argv[]){
	unsigned short int value;
	cout << "n = ";
	cin >> value;
	cout << "Factorial = " << Factorial(value) << endl;
	return 0;
}

long int Factorial(unsigned short int n){
	if (n <= 1)
		return 1;
	else
		return n * Factorial(n - 1);
}


