// Aleksander kijewski
// 26/10/2021
// Lab 6b

#include <stdio.h>
int jsfdk();

int main() {
	int* pc;
	int c;
	c = 22;
	printf("Address of c:%p\n", &c);
	printf("Value of c:%d\n\n", c);
	// Address of c: 0x2FFA13
	// Value of c: 22
	pc = &c;
	printf("Address of pointer pc:%p\n", pc);
	printf("Content of pointer pc:%d\n\n", *pc);
	// Address of pointer pc: 0x2FFA13 same as &c
	// Content of pointer pc: 22
	c = 41;
	printf("Address of pointer pc:%p\n", pc);
	printf("Content of pointer pc:%d\n\n", *pc);
	// Address of pointer pc: 0x2FFA13 same as &c
	// Content of pointer pc: 41
	*pc = 2;
	printf("Address of c:%p\n", &c);
	printf("Value of c:%d\n\n", c);
	// Address of c: 0x2FFA13
	// Value of c: 2#
	jsfdk(&pc);
	printf("%d", pc);
	return 0;
}

int jsfdk(int* a)
{
	*a = 5;
}