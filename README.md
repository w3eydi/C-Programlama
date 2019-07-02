## Deðiþkenler

Deðiþkenler kýsaca bellekte yer tutan bilgi parçacýklarýna verilen addýr.Yani; günlük yapmakta
olduðumuz bütün iþlemler bilgisayarýn belleðinde anlýk olarak tutulur. Kullanýlýr, silinebilir 
ve tekrar oluþturulabilir. Her biri kendine göre bellekte belli bir yer kaplar. Aþaðýdaki
tabloda konuyla alakalý detaylý bilgi verilmiþtir. **sizeof()** fonksiyonu ile boyutlarýný 
sizde öðrenebilirsiniz.

Deðiþkenler harf veya _(altçizgi) ile baþlayabilir. Sayý tanýmlamada kullanýlsa da asla baþlangýçta olamaz.

`
int HarfAyrimi_Vardir = 10;  // Þeklinde olabileceði gibi..
`
Örneðin; **char camelCase2** þeklinde tanýmlamak mümkündür. Ayrýca; **büyük - küçük** harf ayrýmý vardýr.
CamelCase deðiþken tanýmlamada kolay okunabilirlik için kullanýlan bir metoddur.Ýnternette bolca 
konuyla alakalý örnek bulabilirsiniz.
`
int a, b, c;  // Sýralý tanýmlanabilirler.
`

| Deðiþken Tipleri | Deðer Aralýklarý |
| ------- | ---------------------- |
| char, signed char | -128 <> +127 |
| unsigned char | 0 <> +255 |
| short int | -32768 <> +32767 |
| unsigned short int | 0 <> +65535 |
| int | -2147483648 <> +2147483647 |
| unsigned int | 0 <> +4294967295 |

Diðer deðiþken tip deðerleri daha fazla olduðu için yazýlmamýþtýr.Genel olarak

- long
- unsigned long
- long long
- float
- double
- long double

bulunmaktadýr. Yukarýdaki degiskenboyutlari.c dosyasini inceleyebilirsiniz.
