## 🤖 C++ Module 00 | Ecole 42

Bu repository, 42 müfredatının C++ serisinin ilk modülü olan Module 00'ı içerir. Bu modül, C programlama dilinden C++'a geçişi hedefler ve Nesne Yönelimli Programlama'nın **(Object-Oriented Programming - OOP)** temel kavramlarını tanıtır. Proje, bir dizi küçük ve bağımsız egzersizden oluşur.

---

#### 🚀 Projenin Amacı ve Hedefleri

Bu modülün temel amacı, C++'ın temel sözdizimini, konseptlerini ve C'den ayrılan yönlerini öğretmektir. Her egzersiz, belirli bir C++ özelliğini anlamayı ve uygulamayı hedefler. Modülün sonunda kazanılması beklenen yetkinlikler şunlardır:

+ **Sınıflar ve Nesneler**: Kendi veri tiplerinizi oluşturma ve nesnelerle çalışma.

+ **Erişim Belirleyiciler**: public ve private alanlarının kullanımıyla veri gizleme (encapsulation).

+ **Üye Fonksiyonları**: Sınıflara ait davranışlar tanımlama.

+ **Standart Girdi/Çıktı Akışları**: stdio.h yerine <iostream> (cin, cout, endl) kullanımı.

+ **İsim Alanları (Namespaces)**: Kod organizasyonu için namespace kullanımı.

+ **Makefile**: C++ projelerini derlemek için Makefile yapılandırması.

---

### 🛠️ Egzersizlerin Detayları

Modül, farklı konseptte iki ana egzersizden oluşur:

**ex00: Megaphone**

+ Bu basit program, C++'da komut satırı argümanlarının nasıl işlendiğini ve temel string manipülasyonunu gösterir.

+ Programa verilen tüm argümanları birleştirir ve büyük harflerle ekrana basar.

+ Eğer hiçbir argüman verilmezse, standart bir "bağırma" metni basar: * LOUD AND UNBEARABLE FEEDBACK NOISE *

**ex01: My Awesome PhoneBook**

+ Bu egzersiz, C++'da sınıf ve nesne oluşturmanın temellerini öğretir. Basit bir telefon rehberi uygulamasıdır.

+ Sınıflar: Contact ve PhoneBook adında iki sınıf içerir.

+ Komutlar: Kullanıcıdan ADD, SEARCH ve EXIT olmak üzere üç komut alır.

+ Depolama: Rehber, en fazla 8 kişi saklayabilir. 9. kişi eklendiğinde, en eski kişinin üzerine yazılır.

+ Amaç: Bellek yönetimi, sınıf tasarımı ve kullanıcı girdisini işlemeyi öğretir.

---

### ⚙️ Nasıl Derlenir ve Kullanılır?

Projeyi derlemek için Makefile dosyasındaki hedefleri kullanabilirsiniz.

```Bash

# Repoyu klonla
git clone https://github.com/serhatozbek/42_Cpp_Module__00.git

# Klasöre git
cd 42_Cpp_Module_00
# Derlemek istediğin egsersiz klasörüne git
cd ex00 || cd ex01

# Egzersizi derle
make
````
**Egzersizleri Çalıştırma**

Her egzersiz, kendi çalıştırılabilir dosyasını oluşturur.

Adım 1: Megaphone (ex00)

```Bash

# Örnek kullanım
./megaphone "Merhaba Dünya 42 Kocaeli"

# Çıktı: MERHABA DÜNYA 42 KOCAELİ
```
Adım 2: PhoneBook (ex01)

```Bash

# Programı çalıştırın
./phonebook

# Program sizden komut girmenizi bekleyecektir (ADD, SEARCH, EXIT)
```

---

### ⚠️ Sorumluluk Reddi

Bu repository'deki çözümler tamamen eğitim ve portföy amaçlıdır. 42'nin onur kuralları (honour code) gereği, Common Core sürecindeki öğrencilerin çözümleri kopyalaması kesinlikle yasaktır. Buradaki kodlar, bu modülü tamamlamış biri olarak gelişimimi göstermek ve gelecekteki projelerim için bir referans noktası oluşturmak amacıyla paylaşılmıştır.

---
