#include <stdio.h> // Standart giriþ çýkýþ iþlemleri kütüphanesi dahil edildi.
// Bu þekilde C dilinde olmayan ama C diliyle yazýlan printf("") fonksiyonunu tanýtmýþ olduk.

int main(){ // Her C programý main() fonksiyonu içermelidir. Önündeki int anahtar sözcüðü döndüreceði
	// veri tipini bildirir. Her fonksiyon { küme parantezleriyle baþla ve } biter.

printf("Merhaba C"); // Ekrana çýktý yazmamýzý saðlayan printf() fonksiyonu ; noktalý virgül ile komutlar sonlandýrýlýr.

return 0; // return 0 deðeri programýn sonucunu 0 olarak döndürür ve bu iyidir.
	// Çünkü; aslýnda baþta garip gelse de programýn hatasýz olarak sonlandýðý anlamýna gelir. Ve böylece 0 deðeri
	// dýþýndaki deðerler de hata alýnýr. Zaten program hata alýyorsa; return 0 deyimine gelmeyecektir.

}