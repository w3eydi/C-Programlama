#include <stdio.h>

int main() {

	printf("sizeof(char) == \t\t%d byte\n", sizeof(char));
	printf("sizeof(signed char) == \t\t%d byte\n", sizeof(signed char));
	printf("sizeof(unsigned char) == \t%d byte\n\n", sizeof(unsigned char));

	printf("sizeof(short) == \t\t%d byte\n", sizeof(short));
	printf("sizeof(unsigned short) == \t%d byte\n\n", sizeof(unsigned short));

	printf("sizeof(int) == \t\t\t%d byte\n", sizeof(int));
	printf("sizeof(signed int) == \t\t%d byte\n", sizeof(signed int));
	printf("sizeof(unsigned int) == \t%d byte\n\n", sizeof(unsigned int));

	printf("sizeof(long) == \t\t%d byte\n", sizeof(long));
	printf("sizeof(unsigned long) == \t%d byte\n", sizeof(unsigned long));
	printf("sizeof(long long) == \t\t%d byte\n\n", sizeof(long long));

	printf("sizeof(float) == \t\t%d byte\n", sizeof(float));
	printf("sizeof(double) == \t\t%d byte\n", sizeof(double));
	printf("sizeof(long double) == \t\t%d byte\n\n", sizeof(long double));


	return 0;
}