// LAPRAK 2 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

#include <iostream>
using namespace std;

int main() {
    int ArraySize_138; // Ukuran Array yang dimasukkan oleh pengguna
    cout << "\n=== PROGRAM MENCARI GANJIL GENAP RICO ADE PRATAMA ===\n";
    cout << "> Masukkan ukuran Array: ";
    cin >> ArraySize_138;

    // Alokasi dinamis array Rico_138 dan If11d_138
    int *Rico_138 = new int[ArraySize_138]; // Array untuk menyimpan angka genap
    int *If11d_138 = new int[ArraySize_138]; // Array untuk menyimpan angka ganjil
    int GenapRico_138 = 0; // Jumlah angka genap
    int GanjilIf11d_138 = 0; // Jumlah angka ganjil

    // Meminta pengguna memasukkan angka
    cout << "> Masukkan " << ArraySize_138 << " angka (dipisahkan oleh spasi):\n";
    for (int i_138 = 0; i_138 < ArraySize_138; ++i_138) {
        if (!(cin >> Rico_138[i_138])) {
            cout << "Input tidak mencukupi atau tidak valid." << endl;
            return 1;
        }
        // Memisahkan angka genap dan ganjil
        if (Rico_138[i_138] % 2 == 0) {
            GenapRico_138++;
        } else {
            If11d_138[GanjilIf11d_138] = Rico_138[i_138];
            GanjilIf11d_138++;
        }
    }

    cout << "\n=== HASIL PROGRAM ===" << endl;

    // Menampilkan data array yang sudah diinput oleh user
    cout << "Data Array   : ";
    for (int i_138 = 0; i_138 < ArraySize_138; ++i_138) // Melakukan perulangan untuk menampilkan data array
        cout << Rico_138[i_138] << " ";
    cout << endl;

    // Menampilkan angka genap
    cout << "Nomor Genap  : ";
    for (int i_138 = 0; i_138 < ArraySize_138; ++i_138) {
        if (Rico_138[i_138] % 2 == 0)
            cout << Rico_138[i_138] << ", ";
    }
    cout << endl;

    // Menampilkan angka ganjil
    cout << "Nomor Ganjil : ";
    for (int i_138 = 0; i_138 < GanjilIf11d_138; ++i_138) { 
        cout << If11d_138[i_138] << ", ";
    }
    cout << endl;

    // Dealokasi memori setelah selesai digunakan
    delete[] Rico_138;
    delete[] If11d_138;

    return 0;
}
