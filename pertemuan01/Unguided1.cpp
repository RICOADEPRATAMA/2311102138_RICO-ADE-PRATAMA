#include <iostream>
#include <cstdlib>  // Add this line to include the <cstdlib> header

using namespace std;

int hitungJumlah(int bil1_138, int bil2_138) {
  return bil1_138 + bil2_138;
}

int hitungSelisih(int bil1_138, int bil2_138) {
  return bil1_138 - bil2_138;
}

int main() {
  int bil1_138, bil2_138, pilihan;

  while (true) {
    cout << "\n  KALKULATOR SEDERHANA RICO\n";
    cout << "1. Hitung Jumlah\n";
    cout << "2. Hitung Selisih\n";
    cout << "3. Keluar\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        cout << "Masukkan dua bilangan: ";
        cin >> bil1_138 >> bil2_138;
        cout << "Jumlah: " << hitungJumlah(bil1_138, bil2_138) << endl;
        break;
      case 2:
        cout << "Masukkan dua bilangan: ";
        cin >> bil1_138 >> bil2_138;
        cout << "Selisih: " << hitungSelisih(bil1_138, bil2_138) << endl;
        break;
      case 3:
        cout << "Program berakhir. Sampai jumpa!" << endl;
        exit(0);  // Move the exit(0) statement outside the switch
      default:
        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }
  }

  return 0;
}
