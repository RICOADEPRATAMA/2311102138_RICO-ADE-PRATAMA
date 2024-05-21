// LAPRAK 8 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program menghitung banyaknya huruf vocal dalam sebuah kalimat menggunakan Sequential Search
#include <iostream>
#include <cctype> // Untuk fungsi tolower

using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah vocal
bool isVowel_138(char Karakter_138) {
    // Konversi karakter menjadi huruf kecil agar pemeriksaan tidak case-sensitive
    Karakter_138 = tolower(Karakter_138);
    // Periksa apakah karakter adalah salah satu dari 'a', 'e', 'i', 'o', 'u'
    return (Karakter_138 == 'a' || Karakter_138 == 'e' || Karakter_138 == 'i' || Karakter_138 == 'o' || Karakter_138 == 'u');
}

// Fungsi untuk menghitung banyaknya huruf vocal dalam sebuah kalimat
int countVowels_138(const string &Kalimat_138) {
    int Count_138 = 0; // Variabel untuk menghitung jumlah vocal
    // Loop melalui setiap karakter dalam string Kalimat_138
    for (char Karakter_138 : Kalimat_138) {
        // Periksa apakah karakter adalah vocal menggunakan fungsi isVowel_138
        if (isVowel_138(Karakter_138)) {
            Count_138++; // Tambahkan ke Count_138 jika karakter adalah vocal
        }
    }
    return Count_138; // Kembalikan jumlah vocal
}

int main() {
    string Kalimat_138; // Variabel untuk menyimpan kalimat yang dimasukkan oleh pengguna

    cout << "\n======= SELAMAT DATANG DI PROGRAM MENCARI KALIMAT VOCAL BY RICO ADE PRATAMA =======" << endl; // Nama Program
    cout << "\n>> Masukkan sebuah kalimat : ";
    getline(cin, Kalimat_138); // Membaca input kalimat dari pengguna

    // Menghitung jumlah huruf vocal dalam kalimat menggunakan fungsi countVowels_138
    int vowelCount_138 = countVowels_138(Kalimat_138);

    // Menampilkan hasil perhitungan jumlah huruf vocal
    cout << "[2138] Banyaknya huruf vocal dalam kalimat adalah : " << vowelCount_138 << endl;

    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}
