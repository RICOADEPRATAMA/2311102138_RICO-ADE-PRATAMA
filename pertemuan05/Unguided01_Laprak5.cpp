// LAPRAK 5 : UNGUIDED
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program Hash Table Menu Data Mahasiswa
#include <iostream>
#include <string> // Untuk memanipulasi string ke variable tujuan
#include <vector> // untuk menggunakan struktur data vektor
#include <iomanip> // Untuk mengatur format tabel bidang dalam output

using namespace std;

// Konstanta untuk ukuran tabel hash
const int TABLE_SIZE = 100;

// Kelas HashNode untuk menampung data mahasiswa
class HashNode
{
public:
    string Nama_138; // Menyimpan Nama
    string NIM_138; // Menyimpan NIM
    int Nilai_138; // Menyimpan Nilai

    // Konstruktor untuk inisialisasi data mahasiswa
    HashNode(string Nama_138, string NIM_138, int Nilai_138)
    {
        this->Nama_138 = Nama_138;
        this->NIM_138 = NIM_138;
        this->Nilai_138 = Nilai_138;
    }
};

// Kelas HashMap untuk mengelola data mahasiswa dalam tabel hash
class HashMap
{
private:
    vector<HashNode *> table_138[TABLE_SIZE]; // Tabel hash untuk menyimpan data

public:
    // Fungsi hash untuk menghitung nilai hash dari kunci (nama)
    int hashFunc(string key)
    {
        int hash_val = 0;
        for (char c : key)
        {
            hash_val += c; // Menambahkan nilai ASCII dari setiap karakter
        }
        return hash_val % TABLE_SIZE; // Mengembalikan nilai hash yang terbatas pada ukuran tabel
    }

    // Fungsi untuk memasukkan data mahasiswa ke dalam tabel hash
    void insert(string Nama_138, string NIM_138, int Nilai_138)
    {
        int hash_val = hashFunc(Nama_138);                               // Mendapatkan nilai hash dari nama mahasiswa
        HashNode *node_138 = new HashNode(Nama_138, NIM_138, Nilai_138); // Membuat objek HashNode baru
        table_138[hash_val].push_back(node_138);                         // Menambahkan data mahasiswa ke dalam tabel
        cout << "----------------------------------------------------------\n";
        cout << "Data Mahasiswa dengan Nama " << Nama_138 << " berhasil ditambahkan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk menghapus data mahasiswa dari tabel hash
    void remove(string Nama_138)
    {
        int hash_val = hashFunc(Nama_138); // Mendapatkan nilai hash dari nama mahasiswa
        for (auto it = table_138[hash_val].begin(); it != table_138[hash_val].end(); ++it)
        {
            if ((*it)->Nama_138 == Nama_138)
            {                                  // Memeriksa apakah nama mahasiswa sesuai
                delete *it;                    // Menghapus objek HashNode
                table_138[hash_val].erase(it); // Menghapus elemen dari vektor
                cout << "----------------------------------------------------------\n";
                cout << "Data Mahasiswa dengan nama " << Nama_138 << " berhasil dihapus." << endl;
                cout << "==========================================================\n";
                return;
            }
        }
        cout << "----------------------------------------------------------\n";
        cout << "Data Mahasiswa dengan nama " << Nama_138 << " tidak ditemukan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan NIM
    void searchByNIM(string NIM_138)
    {
        bool found_138 = false;
        for (int i_138 = 0; i_138 < TABLE_SIZE; ++i_138)
        {
            for (auto node_138 : table_138[i_138])
            {
                if (node_138->NIM_138 == NIM_138)
                {                         // Memeriksa apakah NIM sesuai
                    displayHeader();      // Menampilkan header tabel
                    displayRow(node_138); // Menampilkan baris data mahasiswa
                    found_138 = true;
                    return;
                }
            }
        }
        cout << "----------------------------------------------------------\n";
        cout << "Mahasiswa dengan NIM " << NIM_138 << " tidak ditemukan." << endl;
        cout << "==========================================================\n";
    }

    // Fungsi untuk mencari data mahasiswa berdasarkan rentang nilai
    void CariRentangNilai(int NilaiMin_138, int NilaiMax_138)
    {
        bool found_138 = false;
        displayHeader(); // Menampilkan header tabel
        for (int i_138 = 0; i_138 < TABLE_SIZE; ++i_138)
        {
            for (auto node_138 : table_138[i_138])
            {
                if (node_138->Nilai_138 >= NilaiMin_138 && node_138->Nilai_138 <= NilaiMax_138)
                {                         // Memeriksa rentang nilai
                    displayRow(node_138); // Menampilkan baris data mahasiswa
                    found_138 = true;
                }
            }
        }
        if (!found_138)
        {
            cout << "----------------------------------------------------------\n";
            cout << "Tidak ada data Mahasiswa dengan rentang nilai " << NilaiMin_138 << " sampai " << NilaiMax_138 << "." << endl;
            cout << "==========================================================\n";
        }
    }
    // Fungsi untuk menampilkan footer penutup tabel
    void displayFooter()
    {
        cout << "==========================================================\n";
    }

    // Fungsi untuk menampilkan header tabel
    void displayHeader()
    {
        cout << "==========================================================\n";
        cout << "|                       DATA MAHASISWA                   |\n";
        cout << "==========================================================\n";
        cout << "|          NAMA          |        NIM        |   NILAI   |\n";
        cout << "==========================================================\n";
    }

    // Fungsi untuk menampilkan baris data mahasiswa
    void
    displayRow(HashNode *node_138)
    {
        cout << "| " << left << setw(23) << node_138->Nama_138            // Menampilkan nama
             << "| " << left << setw(18) << node_138->NIM_138             // Menampilkan NIM
             << "| " << left << setw(9) << node_138->Nilai_138 << " |\n"; // Menampilkan nilai
    }

    // Fungsi untuk menampilkan semua data mahasiswa
    void tampilkanSemuaData()
    {
        bool found = false;
        displayHeader(); // Menampilkan header tabel
        for (int i = 0; i < TABLE_SIZE; ++i)
        {
            for (auto node : table_138[i])
            {
                displayRow(node); // Menampilkan baris data mahasiswa
                found = true;
            }
        }
        displayFooter(); // Menampilkan footer penutup tabel
        if (!found)
        {
            cout << "Tidak ada data yang tersimpan." << endl;
        }
    }
};

int main()
{
    HashMap hmap_138; // Membuat objek HashMap
    int Pilihan_138;
    string Nama_138, NIM_138;
    int nilai, NilaiMin_138, NilaiMax_138;

    // Menu utama program
    do
    {
        cout << "\n==========================================================\n";
        cout << ">>>>>>> MENU PROGRAM MAHASISWA BY RICO ADE PRATAMA <<<<<<<\n";
        cout << "==========================================================\n";
        cout << "1. TAMBAH DATA MAHASISWA\n";
        cout << "2. MENGHAPUS DATA MAHASISWA\n";
        cout << "3. MENCARI DATA BERDASARKAN NIM MAHASISWA\n";
        cout << "4. MENCARI DATA BERDASARKAN RENTANG NILAI MAHASISWA\n";
        cout << "5. TAMPILKAN SEMUA DATA\n";
        cout << "6. KELUAR\n";
        cout << "==========================================================\n";
        cout << "Masukkan pilihan: ";
        cin >> Pilihan_138; // Meminta input dari pengguna
        cout << endl;
        switch (Pilihan_138)
        {
        case 1: // Untuk pilihan menu menambah data mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<<<<<<<<<< TAMBAH DATA MAHASISWA >>>>>>>>>>>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nama : ";
            cin >> ws;
            getline(cin, Nama_138); // Meminta input nama mahasiswa
            cout << "Masukkan NIM  : ";
            cin >> NIM_138; // Meminta input NIM mahasiswa
            cout << "Masukkan Nilai: ";
            cin >> nilai;                              // Meminta input nilai mahasiswa
            hmap_138.insert(Nama_138, NIM_138, nilai); // Memanggil fungsi untuk memasukkan data mahasiswa
            break;
        case 2: // Untuk pilihan menu menghapus data mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<<<<<<<<< MENGHAPUS DATA MAHASISWA >>>>>>>>>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nama Mahasiswa untuk dihapus : ";
            cin >> ws;
            getline(cin, Nama_138);    // Meminta input nama mahasiswa yang akan dihapus
            hmap_138.remove(Nama_138); // Memanggil fungsi untuk menghapus data mahasiswa
            break;
        case 3: // Untuk pilihan menu Mencari data berdasarkan NIM mahasiswa
            cout << "==========================================================\n";
            cout << "<<<<<<<<<< MENCARI DATA BERDASARKAN NIM MAHASISWA >>>>>>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan NIM Mahasiswa untuk dicari : ";
            cin >> NIM_138;                // Meminta input NIM mahasiswa yang akan dicari
            hmap_138.searchByNIM(NIM_138); // Memanggil fungsi untuk mencari data berdasarkan NIM
            break;
        case 4: // Untuk pilihan menu Mencari data berdasarkan Rentang nilai mahasiswa
            cout << "==========================================================\n";
            cout << "<<<< MENCARI DATA BERDASARKAN RENTANG NILAI MAHASISWA >>>>\n";
            cout << "==========================================================\n";
            cout << "Masukkan Nilai Minimum  : ";
            cin >> NilaiMin_138; // Meminta input nilai minimum
            cout << "Masukkan Nilai Maksimum : ";
            cin >> NilaiMax_138;                                   // Meminta input nilai maksimum
            hmap_138.CariRentangNilai(NilaiMin_138, NilaiMax_138); // Memanggil fungsi untuk mencari data berdasarkan rentang nilai
            break;
        case 5: // Untuk pilihan menu Menampilkan semua data
            hmap_138.tampilkanSemuaData(); // Memanggil fungsi untuk menampilkan semua data
            break;
        case 6: // Untuk pilihan Keluar menu
            cout << "Terima kasih telah menggunakan program ini." << endl; // Pesan penutup
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih sesuai nomor pada menu." << endl; // Pesan kesalahan
        }
    } while (Pilihan_138 != 6); // Melanjutkan program sampai pengguna memilih untuk keluar

    return 0; // Mengakhiri program
}
