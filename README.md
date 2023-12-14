# Laporan-Praktikum-Algoritma-Pemograman

Nama : Muhammad Firman <br>
Nomor Induk Mahasiswa : 23343044 <br>
Jurusan : Informatika <br>
Universitas : Universitas Negeri Padang <br>
Dosen : Randi Proska Sandra, M.Sc <br>
Kode Kelas : INF1.62.1008 <br>
Semester : 1 <br>

<h1> Job Sheet 1 : Pengantar Algoritma dan Pemrograman</h1>

1. **Algoritma:**
   Algoritma adalah rangkaian langkah-langkah terstruktur yang dirancang untuk menyelesaikan suatu masalah atau menjalankan suatu tugas. Algoritma menjadi panduan sistematis dalam menyelesaikan masalah atau mencapai tujuan tertentu.

2. **Pemrograman:**
   Pemrograman adalah proses menulis, menguji, dan memelihara kode komputer untuk menciptakan program komputer. Ini melibatkan penggunaan bahasa pemrograman untuk menginstruksikan komputer agar menjalankan serangkaian tugas atau menyelesaikan masalah tertentu.

3. **Algoritma Pemrograman:**
   Algoritma pemrograman mengacu pada penggunaan algoritma dalam konteks pembuatan program komputer. Ini mencakup merancang dan mengimplementasikan langkah-langkah terstruktur untuk menyelesaikan tugas atau mencapai fungsi tertentu dalam sebuah program. Algoritma pemrograman mencakup pemilihan struktur data, logika kontrol, dan langkah-langkah detail lainnya yang diperlukan untuk menghasilkan program yang efisien dan efektif.

<h1> Job Sheet 2 : Pemrograman Dasar C</h1> 

<h3>1. Struktur Dasar C</h3>

Struktur dasar dalam bahasa pemrograman C mencakup beberapa elemen utama yang membentuk kerangka dasar suatu program. Berikut adalah beberapa poin penting dalam struktur dasar C:

-File Header<br>
-Main Function<br>
-statement<br>
-semicolon<br>
-Identifier<br>
-Commments<br>

<h3>2. Proses Input dan Output</h3>

1. **Input** adalah sesuatu data yang kita masukan ke dalam program. Input biasanya diambil dari perangkat inputan seperti keyboard, mouse, kamera, microphone, dll. Dalam bahasa c Ada tiga macam fungsi yang bisa digunakan untuk menampilkan input, yaitu scanf(), gets(), dan fgets().<br>
2. **Proses** adalah langkah-langkah yang harus dilakukan program untuk menghasilkan output.
3. **Output** adalah informasi yang dihasilkan setelah dilakukan proses. Output biasanya ditampilkan ke layar komputer. Dalam bahasa c Ada dua macam fungsi yang bisa digunakan untuk menampilkan output, yaitu printf() dan puts()

<h1>Job Sheet 3 : Variabel, Konstanta & Tipe Data</h1>

1. **Variabel:**
   - **Definisi:** Variabel digunakan untuk menyimpan dan memanipulasi data dalam program.
   - **Pendeklarasian:** Variabel perlu dideklarasikan sebelum digunakan dengan menyertakan tipe data (int, float, char, dll.) dan nama variabel.
   - **Contoh:**
     ```c
     int angka; // deklarasi variabel
     angka = 10; // inisialisasi variabel
     ```

2. **Konstanta:**
   - **Definisi:** Konstanta adalah nilai yang tetap dan tidak dapat diubah selama eksekusi program.
   - **Pendeklarasian:** Dideklarasikan dengan menggunakan kata kunci `const` sebelum tipe data.
   - **Contoh:**
     ```c
     const float PI = 3.14; // deklarasi konstanta
     ```

3. **Tipe Data:**
   - **Tipe Data Dasar:**
     - `int`: Bilangan bulat.
     - `float`: Bilangan desimal (floating-point).
     - `double`: Bilangan desimal dengan presisi ganda.
     - `char`: Karakter.
   - **Tipe Data Turunan:**
     - `short`, `long`: Modifikasi untuk tipe data `int`.
     - `unsigned`: Hanya bilangan positif, tanpa tanda.
   - **Contoh:**
     ```c
     int umur = 25;
     float nilai = 89.5;
     char huruf = 'A';
     ```

4. **Fungsi:**
   - **Definisi:** Fungsi adalah blok kode yang dapat dipanggil untuk menjalankan tugas tertentu.
   - **Pendeklarasian:** Terdiri dari tipe data pengembalian, nama fungsi, dan parameter (jika ada).
   - **Contoh:**
     ```c
     int tambah(int a, int b) {
         return a + b;
     }
     ```
   - **Pemanggilan Fungsi:**
     ```c
     int hasil = tambah(4, 5);
     ```

5. **Variabel Lokal dan Global:**
   - **Variabel Lokal:** Dideklarasikan di dalam fungsi dan hanya dapat diakses di dalam fungsi tersebut.
   - **Variabel Global:** Dideklarasikan di luar fungsi dan dapat diakses oleh seluruh bagian program.

<h1>Job Sheet 4 : Operator</h1>

1. **Operator Aritmatika:**
   - **Contoh:** `+, -, *, /, %`
   - **Fungsi:** Melakukan operasi matematika pada dua operand. `+` untuk penambahan, `-` untuk pengurangan, `*` untuk perkalian, `/` untuk pembagian, dan `%` untuk modulo.

2. **Operator Penugasan:**
   - **Contoh:** `=, +=, -=, *=, /=, %=`
   - **Fungsi:** Memberikan nilai pada variabel. Misalnya, `+=` menambah nilai variabel dengan nilai yang diberikan.

3. **Operator Pembanding:**
   - **Contoh:** `==, !=, <, >, <=, >=`
   - **Fungsi:** Membandingkan dua nilai atau ekspresi dan menghasilkan nilai kebenaran (`true` atau `false`).

4. **Operator Logika:**
   - **Contoh:** `&& (AND), || (OR), ! (NOT)`
   - **Fungsi:** Digunakan untuk menggabungkan atau memanipulasi kondisi logika. `&&` menghasilkan `true` jika kedua kondisi benar, `||` menghasilkan `true` jika salah satu kondisi benar, dan `!` menghasilkan kebalikan dari kondisi.

5. **Operator Bitwise:**
   - **Contoh:** `&, |, ^, ~, <<, >>`
   - **Fungsi:** Melakukan operasi bit pada nilai. `&` untuk AND bit, `|` untuk OR bit, `^` untuk XOR bit, `~` untuk NOT bit, `<<` untuk shift kiri bit, dan `>>` untuk shift kanan bit.

6. **Operator Kondisional (Ternary):**
   - **Contoh:** `condition ? expression1 : expression2`
   - **Fungsi:** Menyediakan cara singkat untuk menulis ekspresi kondisional. Jika kondisi benar, ekspresi1 dievaluasi; jika salah, ekspresi2 dievaluasi.

<h1>Job Sheet 5 : Flow Control: Decision Making</h1>

Percabangan dalam pemrograman C memungkinkan kontrol alur program berdasarkan kondisi tertentu. `if` dan `if else` menyediakan percabangan kondisional, `switch case` memberikan alternatif berdasarkan nilai ekspresi, operator ternary memberikan cara singkat untuk menyatakan kondisi, dan percabangan bersarang memungkinkan keputusan yang lebih kompleks.

1. **Fungsi If:**
   - **Struktur:**
     ```c
     if (kondisi) {
         // blok kode yang dijalankan jika kondisi benar
     }
     ```
   - **Fungsi:** Menjalankan blok kode jika kondisi yang diberikan bernilai `true`. Jika kondisi `false`, blok kode diabaikan.

2. **Fungsi If Else:**
   - **Struktur:**
     ```c
     if (kondisi) {
         // blok kode yang dijalankan jika kondisi benar
     } else {
         // blok kode yang dijalankan jika kondisi salah
     }
     ```
   - **Fungsi:** Memberikan dua pilihan. Jika kondisi benar, jalankan blok pertama; jika salah, jalankan blok kedua.

3. **Switch Case:**
   - **Struktur:**
     ```c
     switch (ekspresi) {
         case nilai1:
             // blok kode
             break;
         case nilai2:
             // blok kode
             break;
         // ...
         default:
             // blok kode default (opsional)
     }
     ```
   - **Fungsi:** Menyediakan alternatif berdasarkan nilai ekspresi. Eksekusi blok kode yang sesuai dengan nilai yang cocok.

4. **Operator Ternary:**
   - **Struktur:**
     ```c
     (kondisi) ? nilai1 : nilai2;
     ```
   - **Fungsi:** Menyediakan cara singkat untuk menulis ekspresi kondisional. Jika kondisi benar, hasilnya adalah nilai1; jika salah, hasilnya adalah nilai2.

5. **Percabangan Bersarang (Nested):**
   - **Contoh:**
     ```c
     if (kondisi1) {
         if (kondisi2) {
             // blok kode
         } else {
             // blok kode
         }
     } else {
         // blok kode
     }
     ```
   - **Fungsi:** Menempatkan percabangan di dalam percabangan. Digunakan ketika keputusan lebih kompleks dan bergantung pada beberapa kondisi.

<h1>Job Sheet 6 : Flow Control: Loop (Perulangan)</h1>

1. **Perulangan For:**
   - **Struktur:**
     ```c
     for (inisialisasi; kondisi; iterasi) {
         // blok kode yang diulang
     }
     ```
   - **Fungsi:** Mengeksekusi blok kode dalam loop selama kondisi terpenuhi. Inisialisasi dilakukan hanya sekali, kondisi dievaluasi sebelum setiap iterasi, dan iterasi dilakukan setelah setiap iterasi.

2. **Perulangan While:**
   - **Struktur:**
     ```c
     while (kondisi) {
         // blok kode yang diulang
     }
     ```
   - **Fungsi:** Mengeksekusi blok kode dalam loop selama kondisi terpenuhi. Kondisi dievaluasi sebelum setiap iterasi.

3. **Perulangan Do While:**
   - **Struktur:**
     ```c
     do {
         // blok kode yang diulang
     } while (kondisi);
     ```
   - **Fungsi:** Mirip dengan `while`, tetapi blok kode dieksekusi setidaknya satu kali karena kondisi dievaluasi setelah eksekusi.

4. **Perulangan Bersarang (Nested Loop):**
   - **Contoh:**
     ```c
     for (int i = 1; i <= 5; i++) {
         for (int j = 1; j <= 3; j++) {
             // blok kode dalam loop bersarang
         }
     }
     ```
   - **Fungsi:** Menempatkan satu atau lebih loop di dalam loop lainnya. Digunakan untuk melakukan iterasi melalui elemen dalam struktur data berdimensi atau untuk menghasilkan pola khusus.

<h1>Job Sheet 7 : Struktur Data: Array</h1>

**Pengertian Array dan Penggunaan Array dalam Bahasa Pemrograman C:**

Array adalah alat yang kuat dalam bahasa pemrograman C yang memungkinkan pengelolaan kumpulan data dengan cara yang efisien. Penggunaannya sangat umum dalam memproses dan menyimpan data terstruktur, seperti daftar nilai, elemen matriks, atau karakter dalam string.

1. **Pengertian Array:**
   - **Definisi:** Array adalah struktur data yang digunakan untuk menyimpan kumpulan elemen dengan tipe data yang sama dalam satu variabel.
   - **Karakteristik:** Elemen-elemen array diakses melalui indeks numerik, dimulai dari 0. Ukuran array ditentukan saat deklarasi dan tidak dapat diubah setelahnya.

2. **Deklarasi dan Inisialisasi Array:**
   - **Deklarasi:**
     ```c
     tipe_data nama_array[ukuran];
     ```
   - **Inisialisasi:**
     ```c
     tipe_data nama_array[] = {elemen1, elemen2, ..., elemenN};
     ```

3. **Akses Elemen Array:**
   - **Menggunakan Indeks:**
     ```c
     int angka[3] = {10, 20, 30};
     int nilai = angka[1]; // Mengakses elemen kedua (indeks 1)
     ```

4. **Perulangan untuk Memproses Array:**
   - **Contoh Perulangan For:**
     ```c
     for (int i = 0; i < ukuran_array; i++) {
         // Blok kode untuk memproses elemen array
     }
     ```

5. **Operasi pada Array:**
   - **Pengisian Array:**
     ```c
     int numbers[5];
     for (int i = 0; i < 5; i++) {
         numbers[i] = i * 10;
     }
     ```
   - **Penjumlahan Elemen:**
     ```c
     int total = 0;
     for (int i = 0; i < ukuran_array; i++) {
         total += angka[i];
     }
     ```

6. **Array Multidimensi:**
   - **Deklarasi dan Inisialisasi:**
     ```c
     tipe_data nama_array[baris][kolom] = {
         {elemen1, elemen2},
         {elemen3, elemen4}
         // ...
     };
     ```
   - **Akses Elemen:**
     ```c
     int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int nilai = matriks[1][2]; // Mengakses elemen baris kedua, kolom ketiga
     ```

7. **Penggunaan Pointer dengan Array:**
   - **Contoh:**
     ```c
     int angka[] = {10, 20, 30};
     int *pointer = angka;
     int nilai = *pointer; // Mendapatkan nilai pertama dalam array
     ```

<h1>Job Sheet 8 : Fungsi & Prosedur</h1>

1. **Pengertian Fungsi:**
   - **Definisi:** Fungsi adalah blok kode terorganisir yang dapat dipanggil oleh nama dan dapat digunakan untuk mengeksekusi tugas tertentu. Fungsi membantu membagi program menjadi bagian-bagian yang lebih kecil dan terkelola.

2. **Penggunaan Fungsi:**
   - **Deklarasi dan Definisi:**
     ```c
     tipe_data nama_fungsi(parameter) {
         // Blok kode fungsi
     }
     ```
   - **Pemanggilan Fungsi:**
     ```c
     tipe_data hasil = nama_fungsi(argumen);
     ```

3. **Fungsi Rekursif:**
   - **Definisi:** Fungsi yang memanggil dirinya sendiri selama eksekusi.
   - **Contoh:** Faktorial
     ```c
     int faktorial(int n) {
         if (n == 0 || n == 1)
             return 1;
         else
             return n * faktorial(n - 1);
     }
     ```

4. **Variabel Lokal & Global:**
   - **Variabel Lokal:**
     - Dideklarasikan di dalam fungsi dan hanya dapat diakses di dalam fungsi tersebut.
     - Hidup selama eksekusi fungsi.
   - **Variabel Global:**
     - Dideklarasikan di luar fungsi dan dapat diakses oleh seluruh bagian program.
     - Hidup sepanjang program.

5. **Pass by Value:**
   - **Definisi:** Metode melewatkan argumen ke fungsi dengan menyalin nilainya.
   - **Karakteristik:**
     - Variabel asli tidak terpengaruh oleh perubahan di dalam fungsi.
     - Efisiensi memori karena nilai disalin.
   - **Contoh:**
     ```c
     void fungsi(int x) {
         x = x + 10;
     }
     ```

6. **Pass by Reference:**
   - **Definisi:** Metode melewatkan argumen ke fungsi dengan memberikan referensi atau alamat memorinya.
   - **Karakteristik:**
     - Perubahan di dalam fungsi mempengaruhi variabel asli.
     - Memerlukan operator dereference (`*`) untuk mengakses nilai.
   - **Contoh:**
     ```c
     void fungsi(int *x) {
         *x = *x + 10;
     }
     ```

<h1>Job Sheet 9 : Pointer</h1>

1. **Pengertian Pointer:**
   - **Definisi:** Pointer adalah variabel yang berisi alamat memori. Mereka digunakan untuk menyimpan alamat memori dari variabel atau fungsi.

2. **Penggunaan Pointer:**
   - **Deklarasi dan Inisialisasi:**
     ```c
     tipe_data *nama_pointer;
     ```
   - **Menggunakan Operator Address-of (&) dan Dereference (*):**
     ```c
     int angka = 10;
     int *pointer_angka = &angka; // Pointer menyimpan alamat memori
     int nilai = *pointer_angka; // Mengakses nilai dengan dereference
     ```

3. **Pointer untuk Pass by Reference:**
   - **Menggunakan Pointer sebagai Parameter Fungsi:**
     ```c
     void tambahSepuluh(int *x) {
         *x = *x + 10;
     }
     // Pemanggilan fungsi
     int angka = 5;
     tambahSepuluh(&angka);
     ```
   - **Fungsi di atas akan mengubah nilai variabel `angka` karena melewatkan alamat memori ke fungsi.**

4. **Pointer untuk Mengakses Array:**
   - **Deklarasi Pointer untuk Array:**
     ```c
     int angka[] = {1, 2, 3, 4, 5};
     int *pointer_angka = angka; // Pointer menyimpan alamat elemen pertama
     ```
   - **Menggunakan Pointer untuk Mengakses Elemen Array:**
     ```c
     for (int i = 0; i < 5; i++) {
         printf("%d ", *(pointer_angka + i)); // Mengakses elemen dengan pointer
     }
     ```

<h1>Job Sheet 10 : Enumerasi & Structure</h1>

1. **Pengertian Enum:**
   - **Definisi:** Enum (Enumerated Types) adalah tipe data khusus yang memungkinkan programmer untuk mendefinisikan kumpulan konstanta bernama yang memiliki nilai-nilai terkait.

2. **Pengertian Structure:**
   - **Definisi:** Structure adalah tipe data yang memungkinkan penyimpanan berbagai tipe data yang berbeda dalam satu unit, yang disebut sebagai "struktur."

3. **Penggunaan Enum:**
   - **Deklarasi dan Penggunaan:**
     ```c
     enum Hari {MINGGU, SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU};
     enum Hari hari_ini = SELASA;
     ```

4. **Penggunaan Struct:**
   - **Deklarasi dan Penggunaan:**
     ```c
     struct Mahasiswa {
         char nama[50];
         int usia;
         float ipk;
     };
     struct Mahasiswa mhs1;
     ```

5. **Penggunaan typedef pada Struct:**
   - **Deklarasi dengan typedef:**
     ```c
     typedef struct {
         char nama[50];
         int usia;
         float ipk;
     } Mahasiswa;
     Mahasiswa mhs1;
     ```

6. **Struct Bersarang:**
   - **Contoh Struct Bersarang:**
     ```c
     struct Alamat {
         char jalan[50];
         char kota[30];
     };

     struct Mahasiswa {
         char nama[50];
         int usia;
         struct Alamat alamat;
     };
     ```

7. **Passing Struct ke dalam Fungsi:**
   - **Menggunakan Parameter:**
     ```c
     void tampilkanMahasiswa(struct Mahasiswa mhs) {
         printf("Nama: %s\nUsia: %d\n", mhs.nama, mhs.usia);
     }
     // Pemanggilan fungsi
     tampilkanMahasiswa(mhs1);
     ```
   - **Menggunakan Pointer:**
     ```c
     void updateUsia(struct Mahasiswa *mhs, int usia_baru) {
         mhs->usia = usia_baru;
     }
     // Pemanggilan fungsi
     updateUsia(&mhs1, 22);
     ```

<h1>Job Sheet 11 : File Handling in C</h1>

File handling adalah kemampuan untuk membaca, menulis, dan memanipulasi file di dalam program bahasa C. File handling dapat digunakan untuk berbagai keperluan, antara lain:

* **Menyimpan data**
* **Membaca data**
* **Mengedit data**
* **Menghapus data**
* **Membuat file baru**

**Fungsi-fungsi File Handling dalam Bahasa C**

Berikut adalah beberapa fungsi file handling yang sering digunakan dalam bahasa C:

* **fopen()** : digunakan untuk membuka file
* **fclose()** : digunakan untuk menutup file
* **fread()** : digunakan untuk membaca data dari file
* **fwrite()** : digunakan untuk menulis data ke file
* **fseek()** : digunakan untuk memindahkan posisi pointer di file
* **ftell()** : digunakan untuk mendapatkan posisi pointer di file

**Contoh Penggunaan File Handling**

Berikut adalah contoh penggunaan file handling untuk menulis data ke file:

```c
#include <stdio.h>

int main() {
  // membuka file untuk ditulis
  FILE *file = fopen("data.txt", "w");

  // menulis data ke file
  fprintf(file, "Ini adalah data yang akan ditulis ke file.\n");

  // menutup file
  fclose(file);

  return 0;
}
```

Output:

```
Ini adalah data yang akan ditulis ke file.
```

Berikut adalah contoh penggunaan file handling untuk membaca data dari file:

```c
#include <stdio.h>

int main() {
  // membuka file untuk dibaca
  FILE *file = fopen("data.txt", "r");

  // membaca data dari file
  char buffer[100];
  fgets(buffer, sizeof(buffer), file);

  // menutup file
  fclose(file);

  // menampilkan data yang dibaca
  printf("Data yang dibaca dari file: %s\n", buffer);

  return 0;
}
```

Output:

```
Data yang dibaca dari file: Ini adalah data yang akan ditulis ke file.
```

**Kesimpulan**

File handling adalah kemampuan yang penting dalam bahasa C. File handling dapat digunakan untuk berbagai keperluan, antara lain untuk menyimpan, membaca, dan memanipulasi file.
