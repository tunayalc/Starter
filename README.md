# Starter

Temel C programlama pratiği için hazırladığım bağımsız konsol uygulamaları

## Genel Bakış

`Starter`, C dilini öğrenme sürecimde yazdığım ilk seviye uygulamaları bir araya getiriyor. Bu repo bir framework, ürün ya da birleşik sistem değil; her dosyada tek bir temel kavramı görünür hale getiren küçük çalışmaların toplamı.

Buradaki ana amaçlar şunlardı:

- C sözdizimine hakim olmak
- kullanıcı girdisi ve çıktı akışını yönetmek
- koşullar ve döngülerle problem çözmek
- fonksiyon mantığını oturtmak
- string ve dizi üzerinde işlem yapmak
- recursion pratiği kazanmak
- `struct`, pointer ve `malloc` kullanımına giriş yapmak

## Kapsanan Konular

| Dosya | Çalışılan Konu | Teknik Odak |
| --- | --- | --- |
| `degrees.c` | sıcaklık dönüşümü | temel aritmetik ve kullanıcı girdisi |
| `factorial.c` | faktöriyel hesabı | döngü, çarpımsal birikim |
| `calculator.c` | dört işlem mantığı | `switch-case`, operatör kontrolü |
| `prime_number.c` | asal sayı kontrolü | fonksiyon yazımı, doğrulama |
| `fibonacci.c` | Fibonacci serisi | recursion |
| `array_sort.c` | dizi sıralama | karşılaştırma, swap, iç içe döngü |
| `password.c` | parola deneme mantığı | durum kontrolü, tekrar eden akış |
| `opposite_for_words.c` | kelime ters çevirme ve sesli harf sayma | string işleme |
| `anagram.c` | anagram kontrolü | `qsort`, karakter bazlı sıralama |
| `student_informations.c` | öğrenci ve adres modeli | `struct`, pointer, heap bellek |

## Dosya Bazlı Teknik İçerik

### `degrees.c`

Temel seviye kullanıcı etkileşimi ve sayı dönüşümü üzerine kurulu en sade örneklerden biri. Fahrenheit'tan Celsius'a dönüşüm formülü üzerinden değişken tanımı, `scanf` ile veri alma ve hesap sonucunu ekrana yazdırma pratiği yapıldı.

### `factorial.c`

Bir sayının faktöriyelini `while` döngüsü ile hesaplayan çalışma. İteratif düşünme, accumulator değişkeni kullanımı ve döngü içinde state güncelleme mantığını göstermek için yazıldı.

### `calculator.c`

Toplama, çıkarma, çarpma ve bölme işlemlerini destekleyen küçük bir hesap makinesi. Özellikle `switch-case` akışı, operatör yorumlama ve bölme işleminde hata kontrolü gibi temel karar yapıları üzerinde duruyor.

### `prime_number.c`

Asal sayı kontrolünü ana akıştan ayırarak yardımcı fonksiyon içinde çözen örnek. Repo içindeki daha düzenli dosyalardan biri; çünkü hem input validation yapıyor hem de asal kontrolünü ayrı bir soyutlamaya taşıyor.

### `fibonacci.c`

Repo içindeki recursion örneği. Fibonacci değerlerini doğrudan recursive çağrılarla üreterek, taban durumları ve fonksiyonun kendini çağırma yapısı görünür hale getiriliyor.

### `array_sort.c`

Kullanıcının girdiği sayıları sıralayan dizi örneği. Karşılaştırma, swap ve çoklu döngü mantığını temel seviyede pekiştiren bir çalışma. Aynı zamanda sıralama algoritmalarına giriş niteliği taşıyor.

### `password.c`

Sabit bir parola ve sınırlı deneme hakkı mantığı kuran küçük bir kontrol akışı örneği. Burada amaç gerçek güvenlik değil; tekrar eden kullanıcı girişi, sayaç azaltma ve doğru / yanlış senaryolarına göre akış yönetimi.

### `opposite_for_words.c`

Girilen kısa kelimenin tersini yazdıran ve sesli harf sayısını bulan örnek. String üzerinde indeksleme, karakter dolaşımı ve işlevleri iki ayrı yardımcı fonksiyona bölme yaklaşımı kullanıldı.

### `anagram.c`

İki kelimenin anagram olup olmadığını kontrol eden çalışma. Burada özellikle `qsort` kullanımı, karakterlerin sıralanması ve sıralanmış string'lerin karşılaştırılması üzerinden algoritmik düşünme pratiği yapıldı.

### `student_informations.c`

Repo içindeki yapısal olarak en gelişmiş çalışma. `Student` ve `Address` veri yapıları üzerinden pointer zinciri, dinamik bellek ayırma ve bellek serbest bırakma mantığı birlikte ele alınıyor.

## Proje Yapısı

```text
Starter/
|-- src/
|   |-- anagram.c
|   |-- array_sort.c
|   |-- calculator.c
|   |-- degrees.c
|   |-- factorial.c
|   |-- fibonacci.c
|   |-- opposite_for_words.c
|   |-- password.c
|   |-- prime_number.c
|   `-- student_informations.c
`-- README.md
```

## Kullanılan Teknolojiler

- C
- `stdio.h`
- `stdlib.h`
- `string.h`
- `stdbool.h`
