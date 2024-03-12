// LAPRAK 1 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

#include <iostream>
#include <cmath>

using namespace std;

char pilihan_138; // Pilihan menu sebagai data char
float x_138, y_138; // Bilangan pertama dan kedua dalam format float

void TampilkanMenu_138() { // Fungsi untuk menampilkan menu pilihan
    cout << "KALKULATOR RICO ADE PRATAMA";
    cout << "\n1. Hitung Penjumlahan";
    cout << "\n2. Hitung Pengurangan";
    cout << "\n3. Hitung Perkalian";
    cout << "\n4. Hitung Pembagian";
    cout << "\n5. Hitung Pangkat";
    cout << "\n0. Keluar" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan_138;
}

float LogikaPenjumlahan_138() { // Fungsi untuk penjumlahan
    cout << "\n1. HITUNG PENJUMLAHAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_138;
    cout << "Ditambah bilangan kedua : ";
    cin >> y_138;
    cout << "Hasil penjumlahan : " << x_138 + y_138 << "\n" << endl;
    return x_138 + y_138;
}

float LogikaPengurangan_138() { // Fungsi untuk pengurangan
    cout << "\n2. HITUNG PENGURANGAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_138;
    cout << "Dikurangi bilangan kedua : ";
    cin >> y_138;
    cout << "Hasil pengurangan : " << x_138 - y_138 << "\n" << endl;
    return x_138 - y_138;
}

float LogikaPerkalian_138() { // Fungsi untuk perkalian
    cout << "\n3. HITUNG PERKALIAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_138;
    cout << "Dikali bilangan kedua : ";
    cin >> y_138;
    cout << "Hasil perkalian : " << x_138 * y_138 << "\n" << endl;
    return x_138 * y_138;
}

float LogikaPembagian_138() { // Fungsi untuk pembagian
    cout << "\n4. HITUNG PEMBAGIAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_138;
    cout << "Dibagi bilangan kedua : ";
    cin >> y_138;
    if (y_138 != 0) {
        cout << "Hasil pembagian : " << x_138 / y_138 << "\n" << endl;
        return x_138 / y_138;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n" << endl;
        return 0; // Mengembalikan 0 dalam kasus pembagian dengan nol
    }
}

float LogikaPemangkatan_138() { // Fungsi untuk pemangkatan
    cout << "\n5. HITUNG PEMANGKATAN" << endl;
    cout << "Bilangan pertama : ";
    cin >> x_138;
    cout << "Dipangkatkan bilangan kedua : ";
    cin >> y_138;
    cout << "Hasil pemangkatan : " << pow(x_138, y_138) << "\n" << endl;
    return pow(x_138, y_138);
}

int main() {
    do {
        TampilkanMenu_138();
        switch (pilihan_138) {
            case '1':
                LogikaPenjumlahan_138();
                break;
            case '2':
                LogikaPengurangan_138();
                break;
            case '3':
                LogikaPerkalian_138();
                break;
            case '4':
                LogikaPembagian_138();
                break;
            case '5':
                LogikaPemangkatan_138();
                break;
            case '0':
                cout << "\nProgram berakhir. Sampai jumpa, jangan lupa mencoba lagi" << endl;
                break;
            default:
                cout << "\nInput tidak valid, silakan mencoba lagi dengan nomor yang sesuai" << endl;
                return 0;
        }
    } while (pilihan_138 != '0');

    return 0;
}
