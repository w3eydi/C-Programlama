#include <stdio.h>
// Öntanımlı makrolar aşağıda belirtilmiştir.
int main() {

	printf("File :%s\n", __FILE__);
	printf("Line :%d\n", __LINE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);

	getch();  // Ekran hemen kapanmasın diye getch() fonksiyonu kullanılmıştır.

	return 0;
}