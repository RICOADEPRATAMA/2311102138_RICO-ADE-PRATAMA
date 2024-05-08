// LAPRAK 6 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program Stack untuk melakukan pembalikan terhadap kalimat
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack>  //library untuk struktur data stack

using namespace std;

int main() {
    stack<char> CharStack_138;      // Inisialisasi stack untuk menyimpan karakter
    char LanjutkanInputKalimat_138; // Untuk melanjutkan input kalimat
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PEMBALIKAN KALIMAT BY RICO ADE PRATAMA 2311102138 <<<<" << endl; // Judul Program

    do {
        string Kalimat_138, KalimatDibalik_138;
        cout << "\n>> Masukkan kalimat minimal 3 kata : "; // User diminta untuk memasukan kalimat yang ingin dimasukkan, dengan minimal 3 kata
        getline(cin, Kalimat_138);  // Membaca input Kalimat_138 dari pengguna

        for (char c_138 : Kalimat_138) {
            CharStack_138.push(c_138); // Menambahkan setiap karakter ke dalam stack
        }

        while (!CharStack_138.empty()) { // Untuk memeriksa apakah stack tersebut kosong atau tidak
            if (CharStack_138.top() == ' ') {
                KalimatDibalik_138 += ' '; // Menambahkan spasi ke Kalimat_138 terbalik jika karakter teratas adalah spasi
            } else {
                KalimatDibalik_138 += CharStack_138.top(); // Menambahkan karakter teratas dari stack ke Kalimat_138 terbalik
            }
            CharStack_138.pop(); // Menghapus karakter teratas dari stack
        }

        cout << "== Hasil kalimat yang dibalikkan : " << KalimatDibalik_138 << endl; // Hasil kalimat yang dibalikan

        cout << "[2138] Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKalimat_138;
        cin.ignore(); // Untuk membersihkan Kalimat_138 buffer sebelumnya
    } while (LanjutkanInputKalimat_138 == 'y' || LanjutkanInputKalimat_138 == 'Y'); // Untuk melanjutkan input Kalimat_138 atau selesai

    return 0;
}
