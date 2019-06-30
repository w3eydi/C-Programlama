## C 'de T�rk�e Karakterler yazd�rmak!

Hemen hemen hepimiz bu sorunu ya�am���zd�r.

C dilinde T�rk�e karakter yazd�ktan sonra **printf()** fonksiyonu ile ekrana yazd�rmaya �al��t���m�zda ekranda garip simgeler g�rmekteyiz.

Bu sorunu 

```
#include <locale.h> // Header(*ba�l�k*) dosyas�n� kodumuza ekliyoruz.
```

**main() {  ..  }** blo�u i�erisinde ise kodlar ba�larken;

```
main(){
setlocale(LC_ALL, ""); // setlocale(LC_ALL, "Turkish"); �eklinde de olabilir.

...

}
```

**setlocale()** fonksiyonunu g�sterilen �ekillerden biriyle y�kleyebiliriz.

