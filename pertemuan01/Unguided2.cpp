#include <iostream>
#include <string>

using namespace std;

// class Mahasiswa
class Mahasiswa {
  public:
    // atribut
    string nama;
    int umur_138;
    float ipk;

    // method
    void print() {
        cout << "Nama: " << nama << ", Umur: " << umur_138 << ", IPK: " << ipk << endl;
    }
};

// struct Mahasiswa
struct MahasiswaStruct {
    // atribut
    string nama;
    int umur_138;
    float ipk;
};

int main() {
    // membuat objek dari class Mahasiswa
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Rico_138";
    mahasiswa1.umur_138 = 20;
    mahasiswa1.ipk = 3.5;
    mahasiswa1.print();

    // membuat objek dari struct Mahasiswa
    MahasiswaStruct mahasiswa2;
    mahasiswa2.nama = "Ade_138";
    mahasiswa2.umur_138 = 22;
    mahasiswa2.ipk = 3.7;
    cout << "Nama: " << mahasiswa2.nama << ", Umur: " << mahasiswa2.umur_138 << ", IPK: " << mahasiswa2.ipk << endl;

    return 0;
}