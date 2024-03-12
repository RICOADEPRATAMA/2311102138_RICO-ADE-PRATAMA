// LAPRAK 1 : UNGUIDED 3
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

#include <iostream>
#include <map>

using namespace std;

// Struktur data untuk menyimpan informasi pemain sepak bola
struct PemainSepakBola {
    string nama_138;
    string klub_138;
};

int main() {
    // Deklarasi map dengan key int dan value berupa objek PemainSepakBola
    map<int, PemainSepakBola> club_138;

    // Menambahkan data pemain sepak bola ke dalam map
    club_138[1] = {"Cristiano Ronaldo", "Al-Nassr FC"};
    club_138[2] = {"Lionel Messi", "Inter Miami FC"};
    club_138[3] = {"Neymar Junior", "Al-Hilal FC"};
    club_138[4] = {"Kylian Mbappe", "Paris Saint-Germain FC"}; 
    club_138[5] = {"Mohamed Salah", "Liverpool FC"};

    cout << "TOP SKOR PEMAIN SEPAK BOLA DUNIA" << endl;

    // Perulangan for menggunakan range-based for loop
    for (int i = 1; i <= club_138.size(); ++i) {
        cout << "Nomor " << i << "  Atas Nama: " << club_138[i].nama_138 << ",  Bermain di: " << club_138[i].klub_138 << endl;
    }

    return 0;
}
