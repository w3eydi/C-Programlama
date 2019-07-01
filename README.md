## Öniþlemciler (Preprocessor)

C dilinde öniþlemciler kaynak programýn **#** karakteriyle baþýna yazýlan, program derlenmeden hemen önce devreye giren ve derleyici tarafýndan denetlenen buyrukçulardýr.


| Direktif (Buyruk) | Tanýmý |
| ------- | ---------------------- |
| \# | Hiçbir eylemde bulunulmayacaðýný gösteren NULL buyrukçusu. |
| \#include | En çok kullandýðýmýz ve dosya çaðýrmaya yarayan direktif. |
| \#define | Makro veya yerine koymalarda kullanabileceðiniz bir buyrukçu tipi. |
| \#line | Satýr numasýna müdahale etmenizi saðlar. |
| \#undef | Mevcut öniþlemcileri yok etmek için kullanýlýr. |
| \#if | Öniþlemci olarak **if** yapýsý kurabiliriz. Mevcut makronun deðerini kontrol edebilir. |
| \#ifdef | Yazacaðýnýz makro daha önceden tanýmlanmýþsa **true** döndürür. |
| \#ifndef | Makro daha önceden tanýmlý **deðilse true** döndürür. |
| \#else | **if** kullanýrken bütün seçenekler olmaz ise çalýþacak bloðu içerir. |
| \#elif | **else if** ifadesinin öniþlemci versiyonudur. |
| \#endif | **if** ile tanýmlanmýþ öniþlemci koþulunu durdurur. |
| \#error | Derleme iþlemini sonlandýrýr ve stderr'a hata gönderir. |
| \#pragma | Derleyiciye ek bilgi göndererek, derleyicinin belirli özelliklerini kontrol eder. |
| \#region | Kullandýðýmýz IDE'de belirlediðimiz kod bloklarýný sol tarafta bulunan panelle saklamamýza yarar. |
| \#endregion | Saklanmasý istenen kod bloðunun biteceði yeri gösterir. |
| __LINE__ | Kodun bulunduðu satýrý belirtir. \#line ile müdahale edilebilir. |
| __FILE__ | Kodun kaynak dosyasýnýn uzantýsýný gösterir. |
| __DATE__ | Kodun derlendiði tarihi belirtir. |
| __TIME__ | Yürütülen zamaný, saat, dakika ve saniye cinsinden gösterir. |

Öniþlemci komutlarý gözünüzü korkutmasýn. Örnekler ile ve zamanla alýþacaksýnýz. Üstelik belli baþlý ifadeleri sýkça kullanmaktayýz, diðerlerini göz aþinalýðý olsun diye tabloya yerleþtirdik.