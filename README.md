## �ni�lemciler (Preprocessor)

C dilinde �ni�lemciler kaynak program�n **#** karakteriyle ba��na yaz�lan, program derlenmeden hemen �nce devreye giren ve derleyici taraf�ndan denetlenen buyruk�ulard�r.


| Direktif (Buyruk) | Tan�m� |
| ------- | ---------------------- |
| \# | Hi�bir eylemde bulunulmayaca��n� g�steren NULL buyruk�usu. |
| \#include | En �ok kulland���m�z ve dosya �a��rmaya yarayan direktif. |
| \#define | Makro veya yerine koymalarda kullanabilece�iniz bir buyruk�u tipi. |
| \#line | Sat�r numas�na m�dahale etmenizi sa�lar. |
| \#undef | Mevcut �ni�lemcileri yok etmek i�in kullan�l�r. |
| \#if | �ni�lemci olarak **if** yap�s� kurabiliriz. Mevcut makronun de�erini kontrol edebilir. |
| \#ifdef | Yazaca��n�z makro daha �nceden tan�mlanm��sa **true** d�nd�r�r. |
| \#ifndef | Makro daha �nceden tan�ml� **de�ilse true** d�nd�r�r. |
| \#else | **if** kullan�rken b�t�n se�enekler olmaz ise �al��acak blo�u i�erir. |
| \#elif | **else if** ifadesinin �ni�lemci versiyonudur. |
| \#endif | **if** ile tan�mlanm�� �ni�lemci ko�ulunu durdurur. |
| \#error | Derleme i�lemini sonland�r�r ve stderr'a hata g�nderir. |
| \#pragma | Derleyiciye ek bilgi g�ndererek, derleyicinin belirli �zelliklerini kontrol eder. |
| \#region | Kulland���m�z IDE'de belirledi�imiz kod bloklar�n� sol tarafta bulunan panelle saklamam�za yarar. |
| \#endregion | Saklanmas� istenen kod blo�unun bitece�i yeri g�sterir. |
| \_\_LINE__ | Kodun bulundu�u sat�r� belirtir. \#line ile m�dahale edilebilir. |
| \_\_FILE__ | Kodun kaynak dosyas�n�n uzant�s�n� g�sterir. |
| \_\_DATE__ | Kodun derlendi�i tarihi belirtir. |
| \_\_TIME__ | Y�r�t�len zaman�, saat, dakika ve saniye cinsinden g�sterir. |

�ni�lemci komutlar� g�z�n�z� korkutmas�n. �rnekler ile ve zamanla al��acaks�n�z. �stelik belli ba�l� ifadeleri s�k�a kullanmaktay�z, di�erlerini g�z a�inal��� olsun diye tabloya yerle�tirdik.