# Starter C Projects

Bu proje, C programlama dilini öğrenenler için hazırlanmış basit uygulamaları içerir. Her dosya, belirli bir temel konsepti örneklemektedir.

## Dosya Listesi ve Açıklamaları

### Anagram.c
İki kelimenin anagram olup olmadığını kontrol eder.

- Girdi: İki string
- Kullanılan işlemler: Karakter sıralama (`qsort`), string karşılaştırma (`strcmp`)
- Amaç: String işlemleri ve sıralama algoritması pratiği

---

### Array Sort.c
Kullanıcının girdiği tamsayılardan oluşan bir diziyi **azalan** sırayla sıralar.

- Yöntem: Bubble Sort
- Amaç: Temel algoritma yapıları ve döngü kontrollü karşılaştırma

---

### Calculator.c
İki sayı ve bir işlem türü alarak dört işlem gerçekleştiren hesap makinesi.

- Desteklenen işlemler: `+`, `-`, `*`, `/`
- switch-case yapısı kullanılmıştır
- Sıfıra bölme kontrolü yapılır

---

### Degrees.c
Fahrenheit cinsinden girilen sıcaklığı Celsius’a çevirir.

- Formül: `(Fahrenheit - 32) * 5 / 9`
- Basit matematik işlemleri içerir

---

### Factorial.c
Girilen bir tamsayının faktöriyelini hesaplar.

- Yöntem: `while` döngüsü
- Başlangıç değeri 1, her döngüde çarpılarak güncellenir

---

### Fibonacci.c
Girilen sayı kadar Fibonacci dizisinin elemanlarını ekrana yazdırır.

- Yöntem: Rekürsif (özyinelemeli) fonksiyon
- Amaç: Fonksiyon kullanımı ve recursive mantık

---

### Opposite For Words.c
Girilen 4 harfli bir kelimeyi tersten yazar ve içindeki ünlü harflerin sayısını hesaplar.

- Fonksiyonlar: `PrintReverse`, `CountVowels`
- Sabit uzunluklu string işlemleri

---

### Password.c
Kullanıcının belirli sayıda deneme hakkı ile doğru şifreyi girmesini bekler.

- Doğru şifre: `123`
- Maksimum 3 deneme hakkı ile erişim kontrolü sağlar

---

### Prime Number.c
Girilen bir sayının asal olup olmadığını kontrol eder.

- Yöntem: 2’den başlayarak kareköküne kadar bölünebilirlik kontrolü
- Amaç: Koşullu döngülerle sayısal algoritma uygulama

---

### Student Informations .c
Bir öğrencinin bilgilerini ve adres bilgilerini yapı (struct) kullanarak tutar.

- Yapılar: `struct Student`, `struct Address`
- Dinamik bellek kullanımı: `malloc`, `free`
- Girdi: Öğrenci adı, numarası, not ortalaması ve adres bilgileri

