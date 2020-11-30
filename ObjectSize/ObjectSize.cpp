#include <iostream>
int main() {
	char c1;
	char c2;
	long l1 = 4;
	long l2 =2;
	double d1 = 1.5;
	double d2 = 3.2;
	char* pc1 = &c1;
	char* pc2 = &c2;
	size_t sizeChar = sizeof(c1);
	long* pl1 = &l1;
	long* pl2 = &l2;
	size_t sizelong = sizeof(l1);
	double* pd1 = &d1;
	double* pd2 = &d2;
	size_t sizeDouble = sizeof(d1);
}