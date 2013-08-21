#include <iostream>
#include "sweetArray.h"

using namespace std;

const int SIZE = 6;

int main() {
	SweetArray A(SIZE), B(SIZE), C(SIZE);

	for (int i=0; i<SIZE; i++) {
		A[i] = i * 10;
		B[i] = i * 5;

	}
	cout << "Contents of A are: "  << A << endl;
	cout << "Contents of B are: "  << B << endl;
	
	// This portion should work once you implement
	// the requested methods...
	/***
	cout << "The sum of A and B is: " << (A + B) << endl;
	cout << "The intersection of A and B is: " << (A & B) << endl;
	cout << "The union of A and B is: " << (A | B) << endl;

	***/

	return 0;
}

