// LAPRAK 8 : UNGUIDED 3
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program Algoritma Sequential Search
#include <iostream>

using namespace std;

int main(){
    int n_138 = 10; // Jumlah elemen dalam array, yang berarti 10
    int Data_138 [n_138] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; // Array data yang akan dicari
    int Target_138 = 4; // Target yang akan dicari dalam array
    int Count_138 = 0; // Variabel untuk menghitung banyaknya kemunculan target dalam array

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4 dalam array
    for (int i_138 = 0; i_138 < n_138; i_138++) {
        if (Data_138 [i_138] == Target_138) {
            Count_138++; // Jika angka target ditemukan, tambahkan 1 ke variabel Count_138
        }
    }

    // Menampilkan hasil pencarian
    cout << "\n======= SELAMAT DATANG DI PROGRAM SEQUENTIAL SEARCH BY RICO ADE PRATAMA =======" << endl; // Judul Program
    cout << "\n>> Data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl; // Menampilkan data yang akan dicari
    cout << "[2138] Angka " << Target_138 << " ditemukan sebanyak " << Count_138 << " kali." << endl; // Menampilkan hasil pencarian

    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}