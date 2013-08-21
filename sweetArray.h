#ifndef SWEET_H
#define SWEET_H

#include <iostream>
using namespace std;
class SweetArray {
private:	
	int *array;
	int size;
public:
	SweetArray();
	SweetArray(int n);
	int& operator[](int i);

friend ostream& operator<<(ostream& out, SweetArray S);

};

#endif

