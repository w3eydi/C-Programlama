#include <stdio.h>
// Öntanýmlý makrolar aþaðýda belirtilmiþtir.
int main() {

	printf("File :%s\n", __FILE__);
	printf("Line :%d\n", __LINE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);

	getch();  // Ekran hemen kapanmasýn diye getch() fonksiyonu kullanýlmýþtýr.

	return 0;
}