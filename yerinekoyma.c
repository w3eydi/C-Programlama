#include <stdio.h>

#define TAMSAYI int  // U� bir �rnekte olsa yerine koyma metodunun g�sterimi.

TAMSAYI main() {
	TAMSAYI a, b;  // Tan�mlanan TAMSAYI �ni�lemcisi int yerine koyuluyor.

	printf("iki tamsayi giriniz :");
	scanf("%d%d", &a, &b);  // Girdi fonksiyonu ile de�erleri klavyeden al�yoruz.
	printf("Ilk sayi = %d ve ikinci sayi = %d\n", a, b);  // Say�lar� ekrana yazd�r�yoruz.
	getch();  // E�er F5 tu�u ile derliyorsan�z, ekran�n kapanmas�n� engelliyoruz.
			  // Ctrl + F5 i�in getch() fonksiyonuna Visual Studio 'da gerek kalm�yor.
	return 0;
}