// LAPRAK 6 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program Stack untuk menentukan apakah kalimat tersebut Palindrom/tidak
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack> //library untuk menggunakan stack

using namespace std;

// Fungsi untuk membersihkan Kata_138 dari spasi dan karakter non-alphanumeric
string BersihkanKata_138 (string Kata_138) {
    string KataBersih_138;
    for (char & c_138 : Kata_138) {
        if (isalpha(c_138)) { // Memeriksa apakah karakter adalah huruf
            KataBersih_138 += tolower(c_138); // Mengubah huruf menjadi huruf kecil atau bersih
        }
    }
    return KataBersih_138;
}

// Fungsi untuk memeriksa apakah sebuah string adalah palindrom
bool Palindrom_138 (string Kata_138) {
    stack<char> TumpukkanKata_138;
    int Length_138 = Kata_138.length();

    // Memasukkan setengah karakter pertama ke dalam tumpukan
    for (int i_138 = 0; i_138 < Length_138 / 2; i_138++) {
        TumpukkanKata_138.push(Kata_138[i_138]);
    }

    // Menentukan titik awal untuk membandingkan karakter kedua setengah
    int Mulai_138 = Length_138 / 2;
    if (Length_138 % 2 != 0) {
        Mulai_138++;
    }

    // Membandingkan karakter kedua setengah dengan karakter dalam tumpukan
    for (int i_138 = Mulai_138; i_138 < Length_138; i_138++) {
        if (TumpukkanKata_138.empty() || Kata_138[i_138] != TumpukkanKata_138.top()) {
            return false;
        }
        TumpukkanKata_138.pop();
    }

    return true;
}

int main() {
    char LanjutkanInputKata_138;
    cout << "\n>>>> SELAMAT DATANG DI PROGRAM PALINDROM BY RICO ADE PRATAMA 2311102138 <<<<" << endl; // Judul Program

    do {
        // Memasukkan Kata_138 atau kalimat yang ingin dimasukkan
        string Kata_138;
        cout << "\n>> Masukkan kalimat : "; // User diminta untuk memasukan kata atau kalimat yang ingin dimasukkan
        getline(cin, Kata_138);

        // Membersihkan Kata_138 dari spasi, karakter non-alphanumeric, dan mengubah huruf menjadi huruf kecil
        string KataBersih_138 = BersihkanKata_138 (Kata_138);

        // Memeriksa apakah Kata_138 adalah palindrom setelah dibersihkan
        if (Palindrom_138 (KataBersih_138)) {
            cout << "== Kalimat tersebut adalah : Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Palindrom
        } else {
            cout << "== Kalimat tersebut adalah : Bukan Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Bukan Palindrom
        }

        cout << "[2138] Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKata_138;
        cin.ignore(); // Untuk membersihkan buffer Kata_138 sebelumnya
    } while (LanjutkanInputKata_138 == 'y' || LanjutkanInputKata_138 == 'Y'); // Untuk melanjutkan input kata atau selesai

    return 0;
}
