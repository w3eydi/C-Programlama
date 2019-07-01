#include <stdio.h>

#define ABS(x) ((x) < 0 ? (-x) : (x)) // Makro tanýmlamada daha sonra deðineceðimiz
// ternary operatör kullanýlmýþtýr.Kýsaca; if - else yapýsýnýn kýsaltýlmýþ versiyonudur.
// Koþul   ?   Doðruysa uygulanacak olan kod   :   Yanlýþsa uygulanacak olan kod

int main() {
	int a;

	printf("Lutfen bir tamsayi giriniz : ");
	scanf("%d", &a);  // Girdi için scanf() fonksiyonu kullanýlýr.
	printf("Girdiginiz sayinin mutlak degeri : %d \n", ABS(a));

	return 0;
}