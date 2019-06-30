## C 'de Türkçe Karakterler yazdýrmak!

Hemen hemen hepimiz bu sorunu yaþamýþýzdýr.

C dilinde Türkçe karakter yazdýktan sonra **printf()** fonksiyonu ile ekrana yazdýrmaya çalýþtýðýmýzda ekranda garip simgeler görmekteyiz.

Bu sorunu 

```
#include <locale.h> // Header(```**baþlýk**```) dosyasýný kodumuza ekliyoruz.
```

**main() {  ..  }** bloðu içerisinde ise kodlar baþlarken;

```
main(){
setlocale(LC_ALL, ""); // setlocale(LC_ALL, "Turkish"); þeklinde de olabilir.

...

}
```

**setlocale()** fonksiyonunu gösterilen þekillerden biriyle yükleyebiliriz.

