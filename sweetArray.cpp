#include <iostream>
#include "sweetArray.h"
using namespace std;

SweetArray::SweetArray() {
	array = new int[10];
	size = 10;
}
SweetArray::SweetArray(int n) {
	array = new int[n];
	size = n;
}

int& SweetArray::operator[](int i) {
	return array[i];
}

ostream& operator<<(ostream& out, SweetArray S) {
	if (S.size == 0) return out;
	out << S.array[0];
	for (int i=1; i<S.size; i++)
		out << ", " << S.array[i];
	return out;
}
