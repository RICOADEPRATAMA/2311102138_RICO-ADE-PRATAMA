// LAPRAK 8 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search
#include <iostream>
#include <conio.h>  // Jika menggunakan Windows. Untuk sistem operasi lain, perlu mencari pengganti dari _getche()

using namespace std;

// Fungsi untuk melakukan pencarian binary pada array karakter
int binarySearch_138(char Array_138[], int Size_138, char Target_138) {
    int Kiri_138 = 0;
    int Kanan_138 = Size_138 - 1;

    // Melakukan binary search selama Kiri_138 tidak melebihi Kanan_138
    while (Kiri_138 <= Kanan_138) {
        int Tengah_138 = Kiri_138 + (Kanan_138 - Kiri_138) / 2;

        // Jika huruf Target_138 berada di tengah array
        if (Array_138[Tengah_138] == Target_138)
            return Tengah_138;

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
void selectionSort_138(char Array_138[], int Size_138) {
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
    }
}

int main() {
    string sentence_138; // Variabel untuk menyimpan kalimat yang dimasukkan oleh pengguna
    char Target_138; // Variabel untuk menyimpan karakter yang akan dicari

    cout << "\n======= SELAMAT DATANG DI PROGRAM BINARY SEARCH BY RICO ADE PRATAMA =======" << endl; // Judul Program
    cout << "\n>> Masukkan kalimat : ";
    getline(cin, sentence_138); // Mengambil input kalimat dari pengguna

    // Membuat array untuk menyimpan karakter
    int PanjangSentence_138 = sentence_138.size(); // Menghitung panjang kalimat
    char charArray[100]; // Array untuk menyimpan karakter-karakter dari kalimat (mengabaikan spasi)
    int Size_138 = 0; // Variabel untuk melacak jumlah karakter non-spasi

    // Mengisi charArray dengan karakter-karakter dari kalimat
    for (int i_138 = 0; i_138 < PanjangSentence_138; ++i_138) {
        if (sentence_138[i_138] != ' ') {  // Mengabaikan spasi
            charArray[Size_138] = sentence_138[i_138]; // Menyimpan karakter ke charArray
            ++Size_138; // Menambah ukuran dari array yang telah diisi
        }
    }

    cout << ">> Masukkan huruf yang ingin dicari : ";
    cin >> Target_138;

    // Mengurutkan array karakter menggunakan selection sort
    selectionSort_138(charArray, Size_138);

    // Menampilkan daftar huruf yang sudah diurutkan sesuai abjad
    cout << "== Daftar huruf yang sudah diurutkan sesuai abjad : ";
    for (int i_138 = 0; i_138 < Size_138; ++i_138) {
        cout << charArray[i_138] << " ";
    }

    // Mencari huruf dalam array yang telah diurutkan
    int Index_138 = binarySearch_138(charArray, Size_138, Target_138);

    cout << endl;

    // Menampilkan hasil pencarian dan daftar huruf yang sudah diurutkan
    if (Index_138 != -1) {
        cout << "[2138] Huruf '" << Target_138 << "' ditemukan pada urutan ke-" << Index_138 << " dalam urutan abjad." << endl;
    } else {
        cout << "[2138] Huruf '" << Target_138 << "' tidak ditemukan dalam kalimat." << endl;
    }

    _getche();  // Menunggu pengguna menekan tombol sebelum program berakhir (hanya untuk Windows)
    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}
