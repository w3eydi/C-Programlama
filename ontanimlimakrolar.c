#include <stdio.h>
// �ntan�ml� makrolar a�a��da belirtilmi�tir.
int main() {

	printf("File :%s\n", __FILE__);
	printf("Line :%d\n", __LINE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);

	getch();  // Ekran hemen kapanmas�n diye getch() fonksiyonu kullan�lm��t�r.

	return 0;
}