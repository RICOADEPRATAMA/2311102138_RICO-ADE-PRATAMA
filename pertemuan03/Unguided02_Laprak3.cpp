// LAPRAK 3 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D
#include <iostream>
#include <iomanip> 
using namespace std;

// Deklarasi Struct Node
class Node {
public:
    string produk_138;
    int harga_138;
    Node* prev_138;
    Node* next_138;
};

// Deklarasi Class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head_138;
    Node* tail_138;

    // Constructor
    DoublyLinkedList() {
        head_138 = nullptr;
        tail_138 = nullptr;
    }

    // Prosedur untuk menambahkan data di depan
    void Push(int harga_138, string produk_138) {
        Node* newNode_138 = new Node;
        newNode_138->harga_138 = harga_138;
        newNode_138->produk_138 = produk_138;
        newNode_138->prev_138 = nullptr;
        newNode_138->next_138 = head_138;

        if (head_138 != nullptr) {
            head_138->prev_138 = newNode_138;
        }
        else {
            tail_138 = newNode_138;
        }

        head_138 = newNode_138;
    }

    // Prosedur untuk menambahkan data pada posisi tertentu
    void PushPosition(int posisi_138, int harga_138, string produk_138) {
        if (posisi_138 < 1) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* newNode_138 = new Node;
        newNode_138->harga_138 = harga_138;
        newNode_138->produk_138 = produk_138;
        newNode_138->prev_138 = nullptr;
        newNode_138->next_138 = nullptr;

        if (posisi_138 == 1) {
            newNode_138->next_138 = head_138;
            if (head_138 != nullptr)
                head_138->prev_138 = newNode_138;
            else
                tail_138 = newNode_138;
            head_138 = newNode_138;
            return;
        }

        Node* saatIni_138 = head_138;
        for (int i = 1; i < posisi_138 - 1 && saatIni_138 != nullptr; ++i)
            saatIni_138 = saatIni_138->next_138;

        if (saatIni_138 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            delete newNode_138;
            return;
        }

        newNode_138->next_138 = saatIni_138->next_138;
        newNode_138->prev_138 = saatIni_138;
        if (saatIni_138->next_138 != nullptr)
            saatIni_138->next_138->prev_138 = newNode_138;
        else
            tail_138 = newNode_138;
        saatIni_138->next_138 = newNode_138;
    }

    // Prosedur untuk menghapus data di depan
    void Pop() {
        if (head_138 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_138 = head_138;
        head_138 = head_138->next_138;

        if (head_138 != nullptr) {
            head_138->prev_138 = nullptr;
        }
        else {
            tail_138 = nullptr;
        }

        delete temp_138;
    }

    // Prosedur untuk menghapus data pada posisi tertentu
    void PopPosition(int posisi_138) {
        if (head_138 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_138 = head_138;
        for (int i = 1; i < posisi_138 && temp_138 != nullptr; ++i) {
            temp_138 = temp_138->next_138;
        }

        if (temp_138 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (temp_138->prev_138 != nullptr) {
            temp_138->prev_138->next_138 = temp_138->next_138;
        } else {
            head_138 = temp_138->next_138;
        }

        if (temp_138->next_138 != nullptr) {
            temp_138->next_138->prev_138 = temp_138->prev_138;
        } else {
            tail_138 = temp_138->prev_138;
        }

        delete temp_138;
    }

    // Fungsi untuk mengupdate data
    bool Update(string oldProduk_138, string newProduk_138, int newharga_138) {
        Node* saatIni_138 = head_138;

        while (saatIni_138 != nullptr) {
            if (saatIni_138->produk_138 == oldProduk_138) {
                saatIni_138->produk_138 = newProduk_138;
                saatIni_138->harga_138 = newharga_138;
                return true;
            }
            saatIni_138 = saatIni_138->next_138;
        }

        return false;
    }

    // Prosedur untuk menghapus semua data
    void DeleteAll() {
        Node* saatIni_138 = head_138;

        while (saatIni_138 != nullptr) {
            Node* temp_138 = saatIni_138;
            saatIni_138 = saatIni_138->next_138;
            delete temp_138;
        }

        head_138 = nullptr;
        tail_138 = nullptr;
    }

    // Prosedur untuk menampilkan data
    void Display_138() {
        Node* saatIni_138 = head_138;

        cout << left << setw(20) << "[ Nama Produk ]" << setw(10) << "[ Harga ]" << endl;

        while (saatIni_138 != nullptr) {
            cout << setw(20) << saatIni_138->produk_138 << setw(10) << saatIni_138->harga_138 << endl;
            saatIni_138 = saatIni_138->next_138;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    cout << "\n== MENU TOKO SKINCARE PURWOKERTO BY RICO ADE PRATAMA ==" << endl;

    // Inisialisasi data awal
    list.Push(30000, "Hanasui");
    list.Push(50000, "Wardah");
    list.Push(100000, "Skintific");
    list.Push(150000, "Somethinc");
    list.Push(60000, "Originote");
    list.Display_138(); 

    // Loop untuk menu interaktif
    while (true) {
        cout << "\nToko Skincare Purwokerto" << endl;
        cout << "   1. Tambah Data" << endl;
        cout << "   2. Hapus Data" << endl;
        cout << "   3. Update Data" << endl;
        cout << "   4. Tambah Data pada Posisi Tertentu" << endl;
        cout << "   5. Hapus Data pada Posisi Tertentu" << endl;
        cout << "   6. Hapus Semua Data" << endl;
        cout << "   7. Tampilkan Data" << endl;
        cout << "   8. Exit" << endl;

        int pilihan_138;
        cout << "Pilih Nomor: ";
        cin >> pilihan_138;

        switch (pilihan_138) {
            case 1: {
                int harga_138;
                string produk_138;

                cout << "\nTAMBAH PRODUK SKINCARE" << endl;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_138);
                cout << "Harga produk: ";
                cin >> harga_138;
                list.Push(harga_138, produk_138);
                cout << "Produk berhasil ditambahkan!" << endl;
                list.Display_138(); 
                break;
            }

            case 2: {
                list.Pop();
                cout << "PRODUK PALING ATAS BERHASIL DIHAPUS!" << endl;
                list.Display_138(); 
                break;
            }

            case 3: {
                string oldProduk_138, newProduk_138;
                int newharga_138;

                cout << "\nUPDATE DATA PRODUK SKINCARE" << endl;
                cout << "Masukkan nama produk yang ingin diubah: ";
                cin.ignore();
                getline(cin, oldProduk_138);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newProduk_138);
                cout << "Masukkan harga baru: ";
                cin >> newharga_138;

                bool update_138 = list.Update(oldProduk_138, newProduk_138, newharga_138);
                if (update_138) {
                    cout << "Data berhasil diperbarui!" << endl;
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                list.Display_138(); 
                break;
            }

            case 4: {
                int posisi_138, harga_138;
                string produk_138;

                cout << "\nTAMBAH PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk produk baru: ";
                cin >> posisi_138;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_138);
                cout << "Harga produk: ";
                cin >> harga_138;
                list.PushPosition(posisi_138, harga_138, produk_138);
                cout << "Produk berhasil ditambahkan pada posisi ke-" << posisi_138 << "!" << endl;
                list.Display_138(); 
                break;
            }

            case 5: {
                int posisi_138;

                cout << "\nHAPUS PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk menghapus data: ";
                cin >> posisi_138;
                list.PopPosition(posisi_138);
                cout << "Data berhasil dihapus pada posisi ke-" << posisi_138 << "!" << endl;
                list.Display_138(); 
                break;
            }

            case 6: {
                list.DeleteAll();
                cout << "SEMUA DATA BERHASIL DI HAPUS!" << endl;
                list.Display_138(); 
                break;
            }

            case 7: {
                cout << "\nTAMPILAN DATA PRODUK TOKO SKINCARE PURWOKERTO SEKARANG" << endl;
                list.Display_138(); 
                break;
            }

            case 8: {
                cout << "Terimakasih telah menggunakan program ini!" << endl;
                return 0;
            }

            default: {
                cout << "Pilihan anda tidak valid!" << endl;
                break;
            }
        }
    }

    return 0;
}
