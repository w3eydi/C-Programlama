#include <stdio.h>

#define PI 3.14159  // Pi sayýsý tanýmlandý.
#define alan(r) ( PI * (r) * (r) )  // Fonksiyon olarak görev yapan makro tanýmlandý.

int main() {
	float yariCap;  // Ondalýklý deðiþken tanýmlama için float kullanýlýr.
	float alan;  // Bir sonraki konuda deðiþken tanýmlamaya deðineceðiz.

	printf("Cember alan hesabi icin yaricap giriniz : ");
	scanf("%f", &yariCap);
	alan = alan(yariCap);
	printf("Alan = %.3f \n", alan);  // \n ile imleci alt satýra geçiriyoruz. %.3f sayýyý virgülden sonra
									 // sadece 3 rakam olacak þekilde göstermesini belirtiyoruz.
	return 0;
}