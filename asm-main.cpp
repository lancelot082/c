#include <iostream.h>
int n_a, n_b, n_c = 0;
long int numerator, denominator, result = 0;

extern "C" {void lab1ub(void);}

// Lab1 - Unsigned byte
// (-74/n_a+n_c-5)/(1+n_c*n_b/2);

void F_C(void);
void F_ASM(void);

int main(void) {
	cout << "Enter A: ";
	cin >> n_a;
	cout << "Enter B: ";
	cin >> n_b;
	cout << "Enter C: ";
	cin >> n_c;
	cout << "\n";
	F_C();
	F_ASM();
	return 0;
}

void F_C(void) {
	numerator = (-74/n_a+n_c-5);
	denominator = (1+n_c*n_b/2);
	result =  numerator / denominator;
	cout << "C++: numerator		= " << numerator << "\n";
	cout << "C++: denominator 	= " << denominator << "\n";
	cout << "C++: result		= " << result << "\n";
}

void F_ASM(void) {
	lab1ub();
	result = numerator / denominator;
	cout << "ASM: numerator		= " << numerator << "\n";
	cout << "ASM: denominator 	= " << denominator << "\n";
	cout << "ASM: result		= " << result << "\n";
}
