#include <stdio.h>

#define PI 3.14159  // Pi say�s� tan�mland�.
#define alan(r) ( PI * (r) * (r) )  // Fonksiyon olarak g�rev yapan makro tan�mland�.

int main() {
	float yariCap;  // Ondal�kl� de�i�ken tan�mlama i�in float kullan�l�r.
	float alan;  // Bir sonraki konuda de�i�ken tan�mlamaya de�inece�iz.

	printf("Cember alan hesabi icin yaricap giriniz : ");
	scanf("%f", &yariCap);
	alan = alan(yariCap);
	printf("Alan = %.3f \n", alan);  // \n ile imleci alt sat�ra ge�iriyoruz. %.3f say�y� virg�lden sonra
									 // sadece 3 rakam olacak �ekilde g�stermesini belirtiyoruz.
	return 0;
}