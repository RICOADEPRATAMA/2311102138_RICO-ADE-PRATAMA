// LAPRAK 2 : UNGUIDED 3
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D
#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int Rico138_Maksimum(const int array_138[], int size_138, int& lokasi_138) {
    int maks_138 = array_138[0];
    lokasi_138 = 0;
    for (int i_138 = 1; i_138 < size_138; ++i_138) {
        if (array_138[i_138] > maks_138) {
            maks_138 = array_138[i_138];
            lokasi_138 = i_138;
        }
    }
    return maks_138;
}

// Fungsi untuk mencari nilai minimum
int Rico138_Minimum(const int array_138[], int size_138, int& lokasi_138) {
    int min_138 = array_138[0];
    lokasi_138 = 0;
    for (int i_138 = 1; i_138 < size_138; ++i_138) {
        if (array_138[i_138] < min_138) {
            min_138 = array_138[i_138];
            lokasi_138 = i_138;
        }
    }
    return min_138;
}

// Fungsi untuk mencari nilai rata-rata atau Average
double Rico138_Average(const int array_138[], int size_138) {
    int total_138 = 0;
    for (int i_138 = 0; i_138 < size_138; ++i_138) {
        total_138 += array_138[i_138];
    }
    return static_cast<double>(total_138) / size_138;
}

int main() {
    int n_138;
    cout << "Masukkan panjang array: ";
    cin >> n_138;
    
    int array_138[n_138];
    cout << "Masukkan " << n_138 << " angka\n";
    for (int i_138 = 0; i_138 < n_138; ++i_138) {
        cout << "Array ke-" << i_138 << ": ";
        cin >> array_138[i_138];
    }

    int Pilihan_138;
    int lokasi_138;
    do {
        cout << "\nMENU OPERASI ARRAY RICO ADE PRATAMA:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih Nomor: ";
        cin >> Pilihan_138;

        switch (Pilihan_138) {
            case 1:
                cout << "Nilai maksimum adalah: " << Rico138_Maksimum(array_138, n_138, lokasi_138) << " \nberada di Array ke-" << lokasi_138 << endl;
                break;
            case 2:
                cout << "Nilai minimum adalah: " << Rico138_Minimum(array_138, n_138, lokasi_138) << " \nberada di Array ke-" << lokasi_138 << endl;
                break;
            case 3:
                cout << "Nilai rata-rata adalah: " << Rico138_Average(array_138, n_138) << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini!\n";
                break;
            default:
                cout << "Pilihan tidak valid, Silahkan coba lagi menggunakan nomor yang tersedia!\n";
        }
    } while (Pilihan_138 != 4);

    return 0;
}
