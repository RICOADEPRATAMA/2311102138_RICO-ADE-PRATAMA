# <h1 align="center">LAPORAN PRAKTIKUM MODUL 8 : ALGORITMA SEARCHING</h1>
<p align="center">RICO ADE PRATAMA - 2311102138</p>

# Dasar Teori

## A. PENGERTIAN ALGORITMA SEARCHING
Algoritma adalah sistematika yang sifatnya berurutan secara logis untuk menyelesaikan suatu permasalahan melalui perintah-perintah yang dibuat secara jelas. Sementara searching adalah proses mendapatkan informasi berdasarkan kunci tertentu dari sejumlah informasi yang telah disimpan. Jadi, Algoritma Searching adalah urutan langkah-langkah yang digunakan untuk menemukan data tertentu dalam kumpulan data. Algoritma Searching atau Pencarian merupakan proses yang sangat penting dalam pengolahan data. Proses pencarian dasar adalah menemukan nilai (data) tertentu didalam sekumpulan data yang bertipe sama. Searching (pencarian) pada struktur data mengacu pada proses algoritma dalam memeriksa, menemukan, mengambil posisi elemen tertentu (target) dari kumpulan elemen di sebuah data. Kumpulan elemen tersebut dapat berupa array, list, linked list, tree, dan lain sebagainya. Ada dua metode dalam algoritma pencarian, yaitu Binary Search dan Sequential Search.

## B. PENGERTIAN BINATY SEARCH
Binary search adalah algoritma pencarian untuk data terurut. Pencarian dilakukan dengan membandingkan data yang dicari dengan data di tengah. Jika sama, data ditemukan. Jika tidak, pencarian dilanjutkan pada bagian kiri atau kanan dari data tengah, tergantung pada perbandingan antara data yang dicari dengan data tengah. Proses ini diulang hingga data ditemukan atau tidak ada lagi yang bisa diperiksa. Singkatnya Binary Search adalah algoritma pencarian pada array/list dengan elemen terurut. Algoritma ini sering digabungkan dengan algoritma sorting karena data harus diurutkan terlebih dahulu. Konsep Binary Search :

- Data diambil dari posisi 1 sampai akhir (N).
- Data dibagi menjadi dua untuk mendapatkan posisi tengah.
- Data yang dicari dibandingkan dengan data di posisi tengah. Jika data yang dicari lebih besar dari data tengah, pencarian dilanjutkan di bagian kanan. Sedangkan jika data yang dicari lebih kecil, pencarian dilanjutkan di bagian kiri.
- Proses pembagian terus berlanjut hingga data ditemukan atau tidak ada lagi data yang bisa dibagi.
- Jika data sama dengan data tengah, pencarian berhenti karena data ditemukan.

Algoritma pencarian biner dapat dituliskan sebagai berikut :
1) L  0
2) R  N – 1
3) ketemu  false
4) Selama (L <= R) dan (tidak ketemu) kerjakan baris 5 sampai dengan 8
5) m  (L + R) / 2
6) Jika (Data[m] = x) maka ketemu  true
7) Jika (x < Data[m]) maka R  m – 1
8) Jika (x > Data[m]) maka L  m + 1
9) Jika (ketemu) maka m adalah indeks dari data yang dicari, jika tidak data
tidak ditemukan

Contoh Penjelasan dari Binary Search, yaitu:
Int A[5] = {11, 15, 21, 31, 33}
![Contoh Ilustrasi Binary Search.png](/pertemuan08/LAPRAK08_RICO%20A.P_2311102138_S1IF-11-D/Foto%20Output/Contoh%20Ilustrasi%20Binary%20Search.png)

- Terdapat sebuah array yang menampung 5 elemen pada gambar di atas. Nilai yang akan dicari pada array tersebut adalah 11.
- Jadi karena konsep dari binary search ini adalah membagi array menjadi dua bagian, yaitu kanan dan kiri. maka pertama-tama kita cari nilai tengahnya dulu. Total elemen dibagi 2 yaitu 5/2 = 2.5 di bulatkan menjadi 2.
- Maka urutan ke-3 adalah nilai tengah, yaitu angka 21 pada indeks ke-2.
- Kemudian kita cek apakah 11 > 21 atau 11 < 21?
- Karena 11 lebih kecil dari 21, maka kemungkinan besar angka 11 berada sebelum 21 atau di sebelah kiri. Selanjutnya, kita cari ke kiri dan kita dapat mengabaikan elemen yang ada di kanan.
- Setelah itu, kita cari lagi nilai tengahnya di bagian kiri array lagi, yang tersisa adalah [11, 15, 21]. Nilai tengah dari bagian ini adalah 15 pada indeks ke-1.
- Kemudian kita cek apakah 11 > 15 atau 11 < 15?
- Ternyata 11 lebih kecil dari 15, maka selanjutnya kita cari ke kiri bagian ini, yaitu [11].
- Karena tersisa hanya satu elemen saja, maka elemen tersebut adalah nilai tengahnya. Setelah dicek ternyata elemen pada indeks ke-0 adalah elemen yang dicari, maka telah selesai untuk proses pencariannya.

  Jadi, nilai 11 ditemukan pada indeks ke-0 dari array. Proses ini menunjukkan bagaimana binary search efisien dalam menemukan nilai dalam array yang terurut.

## C. PENGERTIAN SEQUENTIAL SEARCH
Sequential Search adalah algoritma pencarian untuk data yang acak atau tidak terurut. Ini adalah teknik paling sederhana, di mana setiap elemen array dibaca satu per satu dari indeks terkecil hingga terbesar, atau sebaliknya. Konsepnya adalah :

- Membandingkan setiap elemen array satu per satu.
- Pencarian dimulai dari indeks pertama hingga terakhir.
- Pencarian berhenti saat data ditemukan. Jika tidak ditemukan hingga akhir array, pencarian berhenti.
- Perulangan terjadi sebanyak jumlah elemen dalam array (N).

Algoritma Sequential Search adalah sebagai berikut :

- i ← 0
- ketemu ← false
- Selama (tidak ketemu) dan (i < N), lakukan:
- Jika (Data[i] = x) maka ketemu ← true, jika tidak, i ← i + 1
- Jika (ketemu) maka i adalah indeks data yang dicari, jika tidak, data tidak ditemukan.

Contoh Penjelasan dari Sequential Search, yaitu:
Int A[8] = {9,1,5,2,7,6,11,3}
![Contoh Ilustrasi Sequential Search.png](/pertemuan08/LAPRAK08_RICO%20A.P_2311102138_S1IF-11-D/Foto%20Output/Contoh%20Ilustrasi%20Sequential%20Search.png)

- Misal seperti pada gambar diatas nilai atau angka yang dicari adalah X = 7, maka elemen yang diperiksa adalah 9, 1, 5, 2, 7. (ditemukan) Jadi indeks larik yang dikembalikan berada di indeks ke-4 atau I = 4.
- Misal nilai yang dicari adalah X = 10, maka elemen yang diperiksa adalah 9, 1, 5, 2, 7, 6, 11, 3. (tidak ditemukan) Jadi indeks larik yang dikembalikan tidak ditemukan atau I = 0.

## D. PERBEDAAN BINARY SEARCH DAN SEQUENTIAL SEARCH
Perbedaan utama antara Binary Search dan Sequential Search terletak pada cara kerja, efisiensi, persyaratan data, dan penerapannya :

 Binary Search :
- Cara Kerjanya memeriksa setiap elemen secara berurutan dari awal hingga akhir atau sampai target ditemukan.
- Efisiensinya cenderung Kurang efisien untuk kumpulan data besar. Kompleksitas waktu rata-rata dan terburuk adalah O(n).
- Persyaratan Datanya tidak memerlukan data terurut.
- Penerapannya cocok untuk data kecil atau data yang tidak terurut.

 Sequential Search :
- Cara Kerjanya membagi kumpulan data menjadi dua bagian secara terus-menerus dan hanya memeriksa bagian yang relevan.
- Efisiensinya cenderung lebih efisien untuk kumpulan data besar. Kompleksitas waktu rata-rata dan terburuk adalah O(log n).
- Persyaratan Datanya memerlukan data yang sudah terurut.
- Penerapannya cocok untuk data besar yang sudah terurut.

## E. CONTOH KASUS BINARY SEARCH DAN SEQUENTIAL SEARCH
Contoh kasusnya Misalkan untuk mencari nama "RICO" dalam daftar mahasiswa ITTP (Institut Teknologi Telkom Purwokerto).

Binary Search :
1. Syarat : Daftar mahasiswa harus sudah diurutkan berdasarkan nama secara alfabetis.
2. Mulai dari Tengah : Pemeriksaan dimulai dari mahasiswa yang berada di tengah daftar.
3. Periksa dan Bandingkan : Nama mahasiswa di tengah daftar dibandingkan dengan nama "RICO".
   - Jika Cocok : Jika nama mahasiswa di tengah daftar adalah "RICO", pencarian berhenti dan informasi mahasiswa tersebut ditampilkan.
   - Jika "RICO" Lebih Awal : Jika nama "RICO" secara alfabetis seharusnya berada sebelum nama mahasiswa di tengah daftar, maka pencarian dilanjutkan hanya pada bagian awal daftar (sebelum mahasiswa di tengah).
   Jika "RICO" Lebih Akhir : Jika nama "RICO" secara alfabetis seharusnya berada setelah nama mahasiswa di tengah daftar, maka pencarian dilanjutkan hanya pada bagian akhir daftar (setelah mahasiswa di tengah).
4. Ulangi : Langkah 2 dan 3 diulangi dengan membagi bagian daftar yang relevan menjadi dua secara terus-menerus hingga nama "RICO" ditemukan atau hingga bagian daftar yang tersisa tidak memungkinkan lagi untuk dibagi.

 Sequential Search :
1. Mulai dari Awal : Pemeriksaan dimulai dari mahasiswa pertama dalam daftar.
2. Periksa dan Bandingkan : Nama setiap mahasiswa diperiksa satu per satu dan dibandingkan dengan nama "RICO".
   - Jika Cocok : Jika nama mahasiswa saat ini adalah "RICO", pencarian berhenti dan informasi mahasiswa tersebut ditampilkan (misalnya, NIM, jurusan, dll.).
   - Jika Tidak Cocok : Jika nama mahasiswa saat ini bukan "RICO", lanjutkan ke mahasiswa berikutnya.
3. Ulangi : Langkah 2 diulangi hingga nama "RICO" ditemukan atau sampai semua mahasiswa dalam daftar telah diperiksa.
4. Tidak Ditemukan : Jika setelah memeriksa semua mahasiswa, nama "RICO" tidak ditemukan, maka dapat disimpulkan bahwa RICO tidak terdaftar sebagai mahasiswa ITTP.

 Catatan :
- Jika daftar mahasiswa ITTP tidak terlalu besar, Sequential Search mungkin sudah cukup efisien.
- Jika daftar mahasiswa ITTP sangat besar dan sudah terurut berdasarkan nama, Binary Search akan jauh lebih efisien daripada Sequential Search.


## Guided 

### 1. [Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.]

```C++
#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int data[n] = {9,4,1,7,5,12,4,13,4,10};
    int cari = 10;
    bool ketemu = false;
    int i;

    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }

    cout << "Program Sequential Search" << endl;
    cout << "data : {9,4,1,7,5,12,4,13,4,10}" << endl;

    if (ketemu){
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    }else{
        cout << "data tidak ditemukan" << endl;
    }

    return 0;
}
```

Kode di atas digunakan untuk mengimplementasikan program sederhana dari struktur data algoritma Sequential Search dalam bahasa C++. Sequential Search digunakan untuk mencari suatu nilai dalam sebuah array dengan memeriksa setiap elemen array satu per satu hingga nilai yang dicari ditemukan atau seluruh elemen telah diperiksa. Berikut adalah penjelasan langkah-langkah dalam program:

- n : ukuran dari array, yaitu 10.
- data : array yang berisi 10 elemen : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}.
- cari : nilai yang ingin dicari dalam array, yaitu 10.
- ketemu : variabel boolean yang digunakan untuk menandakan apakah nilai yang dicari ditemukan atau tidak, diinisialisasi dengan false.
- i : variabel untuk iterasi. Program menggunakan loop for untuk memeriksa setiap elemen dalam array data. Jika elemen pada indeks i sama dengan nilai cari, maka ketemu diubah menjadi true dan loop dihentikan menggunakan break. Setelah itu Program akan mencetak pesan "Program Sequential Search" dan isi array.
- Jika nilai cari ditemukan (ketemu bernilai true), program mencetak indeks di mana nilai tersebut ditemukan.
- Jika nilai cari tidak ditemukan, program mencetak pesan bahwa data tidak ditemukan

  Contoh programnya array yang berisi 10 elemen : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10} dan nilai yang ingin dicari dalam array, yaitu angka 10. Jadi angka 10 ditemukan pada indeks ke-9. Lebih jelasnya yang hasil programnya seperti gambar output diatas.

#### Hasil dari output program diatas seperti :
![Output_Guided1_Laprak7.png](/pertemuan07/LAPRAK07_RICO%20A.P_2311102138/Foto%20Output/Output_Guided1_Laprak7.png)


### 2. [Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search.]

```C++
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int dataArray[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void Selection_Sort(){
    int temp, min, i, j;
    for(i = 0; i < 7; i++){
        min = i;
        for(j = i + 1; j < 7; j++){
            if(dataArray[j] < dataArray[min]){
                min = j;
            }
        }
        temp = dataArray[i];
        dataArray[i] = dataArray[min];
        dataArray[min] = temp;
    }
}

void BinarySearch(){
    int awal, akhir, tengah;
    bool b_flag = false;
    awal = 0;
    akhir = 6;
    while(!b_flag && awal <= akhir){
        tengah = (awal + akhir)/2;
        if(dataArray[tengah] == cari){
            b_flag = true;
        } else if(dataArray[tengah] < cari){
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag){
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\nData tidak ditemukan" << endl;
    }
}

int main(){
    cout << "BINARY SEARCH" << endl;
    cout << "\nData : ";
    for(int x = 0; x < 7; x++){
        cout << setw(3) << dataArray[x];
    }
    cout << endl;

    cout << "Masukkan data yang ingin dicari : ";
    cin >> cari;
    
    cout << "\nData diurutkan : ";
    Selection_Sort();

    for(int x = 0; x < 7; x++){
        cout << setw(3) << dataArray[x];
    }
    cout << endl;
    BinarySearch();
    _getche();
    return 0;
}
```

Kode di atas digunakan untuk mengimplementasikan program sederhana dari struktur data algoritma Sequential Search dalam bahasa C++. Sequential Search digunakan untuk mencari suatu nilai dalam sebuah array dengan memeriksa setiap elemen array satu per satu hingga nilai yang dicari ditemukan atau seluruh elemen telah diperiksa. Berikut adalah penjelasan langkah-langkah dalam program:

- n : ukuran dari array, yaitu 10.
- data : array yang berisi 10 elemen : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}.
- cari : nilai yang ingin dicari dalam array, yaitu 10.
- ketemu : variabel boolean yang digunakan untuk menandakan apakah nilai yang dicari ditemukan atau tidak, diinisialisasi dengan false.
- i : variabel untuk iterasi. Program menggunakan loop for untuk memeriksa setiap elemen dalam array data. Jika elemen pada indeks i sama dengan nilai cari, maka ketemu diubah menjadi true dan loop dihentikan menggunakan break. Setelah itu Program akan mencetak pesan "Program Sequential Search" dan isi array.
- Jika nilai cari ditemukan (ketemu bernilai true), program mencetak indeks di mana nilai tersebut ditemukan.
- Jika nilai cari tidak ditemukan, program mencetak pesan bahwa data tidak ditemukan

  Contoh programnya array yang berisi 10 elemen : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10} dan nilai yang ingin dicari dalam array, yaitu angka 10. Jadi angka 10 ditemukan pada indeks ke-9. Lebih jelasnya yang hasil programnya seperti gambar output diatas.

#### Hasil dari output program diatas seperti :
![Output_Guided1_Laprak7.png](/pertemuan07/LAPRAK07_RICO%20A.P_2311102138/Foto%20Output/Output_Guided1_Laprak7.png)


## Unguided 

### 1. [Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!]

```C++
// LAPRAK 8 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search
#include <iostream>
#include <conio.h>  // Jika menggunakan Windows. Untuk sistem operasi lain, perlu mencari pengganti dari _getche()

using namespace std;

// Fungsi untuk melakukan pencarian binary pada array karakter
int binarySearch_138(char Array_138[], int Indeks_138[], int Size_138, char Target_138) {
    int Kiri_138 = 0;
    int Kanan_138 = Size_138 - 1;

    // Melakukan binary search selama Kiri_138 tidak melebihi Kanan_138
    while (Kiri_138 <= Kanan_138) {
        int Tengah_138 = Kiri_138 + (Kanan_138 - Kiri_138) / 2;

        // Jika huruf Target_138 berada di tengah array
        if (Array_138[Tengah_138] == Target_138)
            return Indeks_138[Tengah_138];

        // Jika huruf Target_138 berada di sebelah kiri tengah array
        if (Array_138[Tengah_138] > Target_138)
            Kanan_138 = Tengah_138 - 1;

        // Jika huruf Target_138 berada di sebelah kanan tengah array
        else
            Kiri_138 = Tengah_138 + 1;
    }

    // Jika huruf Target_138 tidak ditemukan
    return -1;
}

// Fungsi untuk melakukan selection sort pada array karakter
void selectionSort_138(char Array_138[], int Indeks_138[], int Size_138) {
    for (int i_138 = 0; i_138 < Size_138 - 1; ++i_138) {
        int IndeksTengah_138 = i_138;
        for (int j_138 = i_138 + 1; j_138 < Size_138; ++j_138) {
            // Menemukan elemen terkecil dalam array yang belum diurutkan
            if (Array_138[j_138] < Array_138[IndeksTengah_138]) {
                IndeksTengah_138 = j_138;
            }
        }
        // Menukar elemen terkecil yang ditemukan dengan elemen pertama yang belum diurutkan
        swap(Array_138[i_138], Array_138[IndeksTengah_138]);
        swap(Indeks_138[i_138], Indeks_138[IndeksTengah_138]);
    }
}

int main() {
    string sentence_138; // Variabel untuk menyimpan kalimat yang dimasukkan oleh pengguna
    char Target_138; // Variabel untuk menyimpan karakter yang akan dicari

    cout << "\n======= SELAMAT DATANG DI PROGRAM BINARY SEARCH BY RICO ADE PRATAMA =======" << endl;
    cout << "\n>> Masukkan kalimat : ";
    getline(cin, sentence_138); // Mengambil input kalimat dari pengguna

    // Membuat array untuk menyimpan karakter dan indeks asli mereka
    int PanjangSentence_138 = sentence_138.size(); // Menghitung panjang kalimat
    char charArray[100]; // Array untuk menyimpan karakter-karakter dari kalimat (mengabaikan spasi)
    int Indeks_138[100]; // Array untuk menyimpan indeks asli dari karakter-karakter
    int Size_138 = 0; // Variabel untuk melacak jumlah karakter non-spasi

    // Mengisi charArray dan Indeks_138 dengan karakter-karakter dari kalimat dan indeks aslinya
    for (int i_138 = 0; i_138 < PanjangSentence_138; ++i_138) {
        if (sentence_138[i_138] != ' ') {  // Mengabaikan spasi
            charArray[Size_138] = sentence_138[i_138]; // Menyimpan karakter ke charArray
            Indeks_138[Size_138] = i_138; // Menyimpan indeks asli dari karakter ke Indeks_138
            ++Size_138; // Menambah ukuran dari array yang telah diisi
        }
    }

    // Mengurutkan array karakter menggunakan selection sort
    selectionSort_138(charArray, Indeks_138, Size_138);

    cout << ">> Masukkan huruf yang ingin dicari : ";
    cin >> Target_138; // Mengambil input karakter yang akan dicari dari pengguna

    // Mencari huruf dalam array yang telah diurutkan
    int Index_138 = binarySearch_138(charArray, Indeks_138, Size_138, Target_138);

    // Menampilkan hasil pencarian
    if (Index_138 != -1) {
        cout << "[2138] Huruf '" << Target_138 << "' ditemukan pada indeks ke-" << Index_138 << " dalam kalimat." << endl;
    } else {
        cout << "[2138] Huruf '" << Target_138 << "' tidak ditemukan dalam kalimat." << endl;
    }

    _getche();  // Menunggu pengguna menekan tombol sebelum program berakhir (hanya untuk Windows)
    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}


```
#### Output:
![SS_Unguided1_Laprak7_2311102138_RicoAdePratama_S1IF-11-D.png](/pertemuan08/LAPRAK08_RICO%20A.P_2311102138_S1IF-11-D/Foto%20Output/SS_Unguided1_Laprak8_2311102138_RicoAdePratama_S1IF-11-D.png)

Kode di atas digunakan untuk implementasi struktur data Queue atau antrian dengan menggunakan linked list di C++. Antrian diimplementasikan sebagai kelas yang disebut 'Queue', yang memiliki penunjuk depan dan penunjuk belakang untuk melacak elemen depan dan belakang antrian. Antrian dapat menyimpan string sebagai elemennya.
Kelas Queue memiliki beberapa metode untuk memanipulasi antrian:

- Deklarasi dan Inisialisasi Variabel :
  - `PanjangSentence_138`: Menyimpan panjang kalimat yang dimasukkan oleh pengguna.
  - `charArray`: Array untuk menyimpan karakter-karakter non-spasi dari kalimat.
  - `Indeks_138`: Array untuk menyimpan indeks asli dari karakter-karakter non-spasi.
  - `Size_138`: Variabel yang melacak jumlah karakter non-spasi yang dimasukkan ke dalam `charArray` dan `Indeks_138`.

- Loop untuk Mengisi `charArray` dan `Indeks_138`:
  - Loop ini iterasi melalui setiap karakter dalam `sentence_138`.
  - Karakter non-spasi ditambahkan ke `charArray`, dan indeks asli karakter tersebut disimpan di `Indeks_138`.

- Sort dan Search:
  - Setelah array `charArray` dan `Indeks_138` diisi, `charArray` diurutkan menggunakan fungsi `selectionSort_138`.
  - Setelah array diurutkan, `binarySearch_138` digunakan untuk mencari `Target_138` dalam `charArray`.

- Hasil Pencarian :
  - Jika `Target_138` ditemukan, indeks asli karakter tersebut ditampilkan.
  - Jika tidak ditemukan, pesan bahwa karakter tidak ditemukan ditampilkan.

  Program ini dalam penggunaannya menggunakan output dari code otomatis. Lebih jelasnya yang hasil programnya seperti gambar output diatas.


### 2. [Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa]

```C++
// LAPRAK 7 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program dari nomor 1, membuat konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa
#include <iostream>
#include <string>

using namespace std;

const int maksimalQueue_138 = 5;  // Maksimal antrian adalah 5

// Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    string Nama_138;
    string NIM_138;
    Node* next_138;
};

class Queue {
private:
    Node* front_138; // Node depan dari antrian
    Node* rear_138;  // Node belakang dari antrian

public: 
    Queue() { // Konstruktor untuk menginisialisasi antrian kosong
        front_138 = nullptr;
        rear_138 = nullptr;
    }

    // Fungsi untuk menambahkan data ke antrian
    void enqueue_138(const string& Nama_138, const string& NIM_138) {
        Node* newNode_138 = new Node;
        newNode_138->Nama_138 = Nama_138;
        newNode_138->NIM_138 = NIM_138;
        newNode_138->next_138 = nullptr;
        
        // Jika antrian kosong
        if (isEmpty_138()) { // Jika antrian kosong maka front_138 dan rear_138 menunjuk ke newNode_138 yang baru dibuat 
            front_138 = rear_138 = newNode_138;
        } else { // Jika antrian tidak kosong maka rear_138 menunjuk ke newNode_138 yang baru dibuat
            rear_138->next_138 = newNode_138;
            rear_138 = newNode_138;
        }
        
        cout << ">> Mahasiswa dengan Nama : " << newNode_138->Nama_138 << ", dan NIM : " << newNode_138->NIM_138 << " telah ditambahkan ke dalam antrian." << endl;
    }

    // Fungsi untuk menghapus data dari antrian
    void dequeue_138() {
        if (isEmpty_138()) { // Jika antrian kosong maka tampilkan pesan "Antrian kosong" dan kembalikan nilai void
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp_138 = front_138; // Simpan node front_138 ke dalam variabel temp_138 untuk dihapus nantinya 
        front_138 = front_138->next_138; // Geser front_138 ke node selanjutnya 

        cout << ">> Mahasiswa dengan Nama : " << temp_138->Nama_138 << ", dan NIM : " << temp_138->NIM_138 << " telah dihapus dari antrian." << endl; // Tampilkan data mahasiswa yang dihapus dari antrian 
        delete temp_138; // Hapus node yang disimpan di variabel temp_138

        // Jika setelah penghapusan antrian menjadi kosong
        if (front_138 == nullptr) {
            rear_138 = nullptr;
        }
    }

    // Fungsi untuk menampilkan seluruh antrian
    void displayQueue_138() {
        if (isEmpty_138()) { // Jika antrian kosong maka tampilkan pesan "Data antrian:" dan tampilkan pesan "(kosong)"
            cout << "\n[2138] Data Antrian :" << endl;
            for (int i_138 = 0; i_138 < maksimalQueue_138; i_138++) {
                cout << i_138 + 1 << ". (kosong)" << endl;
            }
        } else { // Jika antrian tidak kosong maka tampilkan data antrian yang ada
            cout << "\n[2138] Data Antrian :" << endl;
            Node* current_138 = front_138;
            int i_138 = 1;
            while (current_138 != nullptr) { // Selama current_138 tidak menunjuk ke nullptr maka tampilkan data antrian yang ada 
                cout << i_138 << ". " << "Nama : " << current_138->Nama_138 << ", NIM : " << current_138->NIM_138 << endl;
                current_138 = current_138->next_138;
                i_138++;
            }
            for (; i_138 <= maksimalQueue_138; i_138++) { // Tampilkan pesan "(kosong)" untuk antrian yang kosong 
                cout << i_138 << ". (kosong)" << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah antrian kosong
    bool isEmpty_138() {
        return front_138 == nullptr;
    }

    // Fungsi untuk mengembalikan jumlah elemen dalam antrian
    int countQueue_138() {
        int count_138 = 0;
        Node* current_138 = front_138;
        while (current_138 != nullptr) { 
            count_138++;
            current_138 = current_138->next_138;
        }
        return count_138; // Kembalikan jumlah elemen dalam antrian
    }

    // Fungsi untuk menghapus semua elemen dalam antrian
    void clearQueue_138() {
        while (!isEmpty_138()) { // Selama antrian tidak kosong maka hapus elemen dalam antrian
            dequeue_138(); // Hapus elemen dalam antrian 
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue; // Buat objek queue dari class Queue
    queue.enqueue_138("Rico Ade Pratama", "2311102138");
    queue.enqueue_138("Freya JKT48", "2311100000");
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;
    queue.dequeue_138();
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;
    queue.dequeue_138();
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;

    return 0;
}


```
#### Output:
![SS_Unguided2_Laprak7_2311102138_RicoAdePratama_S1IF-11-D.png](/pertemuan07/LAPRAK07_RICO%20A.P_2311102138/Foto%20Output/SS_Unguided2_Laprak7_2311102138_RicoAdePratama_S1IF-11-D.png)

Kode di atas digunakan untuk implementasi dari struktur data Queue atau antrian pada C++. Dengan dirancang khusus untuk menyimpan data siswa dengan atribut nama dan nomor induk siswa (NIM). Antrian memiliki kapasitas maksimal 5 siswa. Program ini menggunakan implementasi daftar tertaut dari antrian, dengan penunjuk depan dan belakang untuk melacak elemen depan dan belakang antrian.
Kelas 'Queue' memiliki beberapa metode untuk memanipulasi antrian:
- 'enqueue_138': menambahkan siswa baru ke belakang antrian dengan nama dan ID siswa yang diberikan.
- 'dequeue_138': mengeluarkan siswa depan dari antrian dan mencetak nama dan ID siswanya.
- 'displayQueue_138': mencetak status antrian saat ini, menampilkan nama dan ID siswa setiap siswa dalam antrian.
- 'isEmpty_138': memeriksa apakah antrian kosong dan mengembalikan nilai boolean yang menunjukkan hasilnya.
- 'countQueue_138': mengembalikan jumlah siswa yang sedang dalam antrian.
- 'clearQueue_138': mengeluarkan semua siswa dari antrian dan mencetak pesan yang menunjukkan bahwa antrian telah dihapus.

  Fungsi ini 'main' mendemonstrasikan cara menggunakan 'Queue' kelas dengan membuat objek antrian, menambahkan beberapa siswa ke antrian, menampilkan antrian, dan mengeluarkan siswa dari antrian. Program ini juga menggunakan metode 'isEmpty_138', 'countQueue_138', dan 'clearQueue_138' untuk menunjukkan status antrian saat ini.

  Program ini dalam penggunaannya menggunakan output dari code otomatis. Lebih jelasnya yang hasil programnya seperti gambar output diatas.


## Kesimpulan
Kesimpulannya, pada modul 7 ini Queue atau antrian merupakan struktur data LIFO (Last In First Out) dimana suatu struktur data yang terbentuk dari barisan hingga yang terurut dari satuan data. Queue mirip dengan konsep antrian pada kehidupan sehari-hari, dimana konsumen yang datang lebih dulu akan dilayani terlebih dahulu. Implementasinya dapat menggunakan array atau linked list, dengan dua pointer utama, yaitu front dan rear. Berbeda dengan struktur data lain seperti stack, penambahan dan penghapusan elemen dalam queue terjadi pada ujung yang berbeda, yaitu front untuk Dequeue dan rear untuk Enqueue.

Keunggulan atau Kelebihan Queue yaitu Implementasi yang sederhana, dan sangat efisiensi dalam hal Waktu. Queue jika menggunakan linked list lebih fleksibel dan efisien untuk penambahan dan penghapusan elemen di tengah antrian. Ada banyak jenis-jenis operasi. Queue menggunakan Prinsip FIFO yaitu yang memastikan bahwa data diproses sesuai urutan penerimaannya, membuat antrian berguna dalam aplikasi di mana data perlu diproses dalam urutan tertentu.

Kekurangan Queue antara lain seperti Ukuran terbatas atau overhead memori, ketika menambahkan dan menghapus elemen di tengah antrian tidak efisien karena membutuhkan pergeseran elemen lain. Batasan kapasitas pada implementasi dengan array dan Performa yang buruk pada implementasi dengan array jika terdapat operasi dequeue yang sering dilakukan. Queue memiliki sifat LIFO yang tidak dapat diubah, Artinya elemen yang pertama kali masuk akan menjadi elemen yang pertama kali dikeluarkan, Ini membuat queue kurang fleksibel untuk digunakan dalam beberapa situasi yang memerlukan akses acak atau pengubahan urutan data. Tidak dapat digunakan untuk semua kasus, dan Tidak mendukung operasi pencarian.

## Referensi
 [1] Dr. Joseph Teguh Santoso. Struktur Data dan ALgoritma. Semarang: Yayasan Prima Agus Teknik. 2021.

 [2] Muhammad Nugraha. Dasar Pemrograman Dengan C++ Materi Paling Dasar untuk Menjadi Programmer Berbagai Platform. Yogyakarta. 2021.

 [3] Mulyana A. E-Books Cara Mudah Mempelajari Algoritma dan Struktur Data. 2023.

 [4] Rafsanjani, Malik Akbar Hashemi. "Implementasi Algoritma Pengurutan General Purpose dan Berbasis Komparasi untuk Data Berkategori dalam Waktu Linier Tanpa Paralelisasi", 2021.