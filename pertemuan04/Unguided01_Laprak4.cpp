// LAPRAK 4 : UNGUIDED 
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa
#include <iostream>
#include <iomanip> //untuk mengatur format output, seperti mengatur presisi desimal, lebar bidang, dan tata letak output

using namespace std;

// Deklarasi Struct Node
struct Node
{
    string Nama_138; // Menyimpan Nama
    string NIM_138; // Menyimpan NIM
    Node *next_138; // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node berikutnya dalam linked list
};

Node *head_138; // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node awal dari linked list
Node *tail_138; // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node terakhir dari linked list

// Inisialisasi Node
void init_138()
{
    head_138 = NULL;
    tail_138 = NULL;
}

// Pengecekan apakah linked list kosong atau tidak
bool isEmpty_138()
{
    if (head_138 == NULL)
        return true;
    else
        return false;
}

// Tambah Node di depan linked list
void insertDepan_138(string Nama_138, string NIM_138) 
{
    // Buat Node baru_138
    Node *baru_138 = new Node; // Jika Linked List masih kosong, baru_138 akan menjadi node awal dan node terakhir dalam linked list
    baru_138->Nama_138 = Nama_138;
    baru_138->NIM_138 = NIM_138;
    baru_138->next_138 = NULL;
    if (isEmpty_138() == true)
    {
        head_138 = tail_138 = baru_138;
        tail_138->next_138 = NULL;
    }
    else
    {
        baru_138->next_138 = head_138;
        head_138 = baru_138;
    }
}

// Tambah Node di belakang linked list
void insertBelakang_138(string Nama_138, string NIM_138)
{
    // Buat Node baru_138
    Node *baru_138 = new Node;
    baru_138->Nama_138 = Nama_138;
    baru_138->NIM_138 = NIM_138;
    baru_138->next_138 = NULL;
    if (isEmpty_138() == true)
    {
        head_138 = tail_138 = baru_138;
        tail_138->next_138 = NULL;
    }
    else
    {
        tail_138->next_138 = baru_138;
        tail_138 = baru_138;
    }
}

// Menghitung jumlah Node dalam linked list
int hitungList_138()
{
    Node *hitung_138; // Untuk menghitung data
    hitung_138 = head_138;
    int jumlah_138 = 0; // Untuk mengetahui jumlah data
    while (hitung_138 != NULL)
    {
        jumlah_138++;
        hitung_138 = hitung_138->next_138;
    }
    return jumlah_138;
}

// Tambah Node di posisi_138 tertentu dalam linked list
void insertTengah_138(string Nama_138, string NIM_138, int posisiNama_138)
{
    if (posisiNama_138 < 1 || posisiNama_138 > hitungList_138()) // posisiNama_138 untuk mencari posisi nama
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisiNama_138 == 1)
    {
        cout << "Posisi bukan posisi_138 tengah" << endl;
    }
    else
    {
        Node *baru_138, *bantu_138; // Untuk membantu dalam menjalankan program
        baru_138 = new Node();
        baru_138->Nama_138 = Nama_138;
        baru_138->NIM_138 = NIM_138;

        // traversal
        bantu_138 = head_138;
        int nomor_138 = 1;
        while (nomor_138 < posisiNama_138 - 1) // nomor_138 untuk mengetahui nomor posisi
        {
            bantu_138 = bantu_138->next_138;
            nomor_138++;
        }

        baru_138->next_138 = bantu_138->next_138;
        bantu_138->next_138 = baru_138;
    }
}

// Hapus Node di depan linked list
void hapusDepan_138()
{
    Node *hapus_138; // Untuk menghapus data
    if (isEmpty_138() == false)
    {
        if (head_138->next_138 != NULL)
        {
            hapus_138 = head_138;
            head_138 = head_138->next_138;
            delete hapus_138;
        }
        else
        {
            head_138 = tail_138 = NULL;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Node di belakang linked list
void hapusBelakang_138()
{
    Node *hapus_138; 
    Node *bantu_138; 
    if (isEmpty_138() == false)
    {
        if (head_138 != tail_138)
        {
            hapus_138 = tail_138;
            bantu_138 = head_138;
            while (bantu_138->next_138 != tail_138)
            {
                bantu_138 = bantu_138->next_138;
            }
            tail_138 = bantu_138;
            tail_138->next_138 = NULL;
            delete hapus_138;
        }
        else
        {
            head_138 = tail_138 = NULL;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Node di posisi tertentu dalam linked list
void hapusTengah_138(int posisi_138)
{
    Node *bantu_138, *hapus_138, *sebelum_138;
    if (posisi_138 < 1 || posisi_138 > hitungList_138()) {
        cout << "Posisi di luar jangkauan" << endl;
    } else if (posisi_138 == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    } else {
        int nomor_138 = 1;
        bantu_138 = head_138;
        while (nomor_138 <= posisi_138) {
            if (nomor_138 == posisi_138 - 1) {
                sebelum_138 = bantu_138;
            } 
            if (nomor_138 == posisi_138) {
                hapus_138 = bantu_138;
            }
            bantu_138 = bantu_138->next_138;
            nomor_138++;
        }
        sebelum_138->next_138 = bantu_138;
        delete hapus_138;
    }
}

/// Ubah Node di depan linked list
void ubahDepan_138(string Nama_138, string NIM_138)
{
    if (isEmpty_138() == false)
    {
        head_138->Nama_138 = Nama_138;
        head_138->NIM_138 = NIM_138;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Node di belakang linked list
void ubahBelakang_138(string Nama_138, string NIM_138)
{
    if (isEmpty_138() == 0)
    {
        tail_138->Nama_138 = Nama_138;
        tail_138->NIM_138 = NIM_138;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Node di posisi tertentu dalam linked list
void ubahTengah_138(string Nama_138, string NIM_138, int posisiNama_138)
{
    Node *bantu_138;
    if (isEmpty_138() == 0)
    {
        if (posisiNama_138 < 1 || posisiNama_138 > hitungList_138())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisiNama_138 == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu_138 = head_138;
            int nomor_138 = 1;
            while (nomor_138 < posisiNama_138)
            {
                bantu_138 = bantu_138->next_138;
                nomor_138++;
            }
            bantu_138->Nama_138 = Nama_138;
            bantu_138->NIM_138 = NIM_138;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Menghapus seluruh Node dalam linked list
void clearList_138() {
    Node *bantu_138, *hapus_138;
    bantu_138 = head_138;
    while (bantu_138 != NULL) {
        hapus_138 = bantu_138;
        bantu_138 = bantu_138->next_138;
        delete hapus_138;
    }
    head_138 = tail_138 = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Menampilkan seluruh data dalam linked list
void tampilList_138()
{
    Node *bantu_138;
    bantu_138 = head_138;
    if (isEmpty_138() == false)
    {
        cout << "============================================\n";
        cout << "|              DATA MAHASISWA              |\n";
        cout << "============================================\n";
        cout << "|        NAMA        |         NIM         |\n";
        cout << "============================================\n";
        while (bantu_138 != NULL)
        {
            cout << "| " << setw(19) << left << bantu_138->Nama_138;
            cout << "| " << setw(19) << left << bantu_138->NIM_138 << " |\n";
            bantu_138 = bantu_138->next_138;
        }
        cout << "============================================\n";
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init_138();
    int Pilih_138, posisiNama_138;
    string Nama_138, NIM_138;
    
    // Program akan terus berjalan hingga pengguna memilih untuk keluar (Pilih_138 = 0)
    do
    {
        // Menu utama
        cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1.  Tambah Depan\n";
        cout << "2.  Tambah Belakang\n";
        cout << "3.  Tambah Tengah\n";
        cout << "4.  Ubah Depan\n";
        cout << "5.  Ubah Belakang\n";
        cout << "6.  Ubah Tengah\n";
        cout << "7.  Hapus Depan\n";
        cout << "8.  Hapus Belakang\n";
        cout << "9.  Hapus Tengah\n";
        cout << "10. Hapus List\n";
        cout << "11. TAMPILKAN\n";
        cout << "0.  KELUAR\n";
        cout << "Pilih Operasi: ";
        cin >> Pilih_138;
        cout << endl;
        
        // Melakukan operasi berdasarkan pilihan pengguna
        switch (Pilih_138)
        {
            // Bentuk Macam-macam Pilihan Menu
            case 1:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<<< TAMBAH DEPAN >>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama : ";
                cin >> Nama_138;
                cout << "Masukkan NIM  : ";
                cin >> NIM_138;
                insertDepan_138(Nama_138, NIM_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah ditambahkan\n";
                cout << "===================================================\n";
                break;
            case 2:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<< TAMBAH BELAKANG >>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama : ";
                cin >> Nama_138;
                cout << "Masukkan NIM  : ";
                cin >> NIM_138;
                insertBelakang_138(Nama_138, NIM_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah ditambahkan\n";
                cout << "===================================================\n";
                break;
            case 3:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<< TAMBAH TENGAH >>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama   : ";
                cin >> Nama_138;
                cout << "Masukkan NIM    : ";
                cin >> NIM_138;
                cout << "Masukkan Posisi : ";
                cin >> posisiNama_138;
                insertTengah_138(Nama_138, NIM_138, posisiNama_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah ditambahkan pada posisi ke-" << posisiNama_138 << endl;
                cout << "===================================================\n";
                break;
            case 4:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<<<< UBAH DEPAN >>>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama : ";
                cin >> Nama_138;
                cout << "Masukkan NIM  : ";
                cin >> NIM_138;
                ubahDepan_138(Nama_138, NIM_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah diubah\n";
                cout << "===================================================\n";
                break;
            case 5:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<<< UBAH BELAKANG >>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama : ";
                cin >> Nama_138;
                cout << "Masukkan NIM : ";
                cin >> NIM_138;
                ubahBelakang_138(Nama_138, NIM_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah diubah\n";
                cout << "===================================================\n";
                break;
            case 6:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<<< UBAH TENGAH >>>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan Nama   : ";
                cin >> Nama_138;
                cout << "Masukkan NIM    : ";
                cin >> NIM_138;
                cout << "Masukkan Posisi : ";
                cin >> posisiNama_138;
                ubahTengah_138(Nama_138, NIM_138, posisiNama_138);
                cout << "---------------------------------------------------\n";
                cout << "Data telah diubah\n";
                cout << "===================================================\n";
                break;
            case 7:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<<< HAPUS DEPAN >>>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                hapusDepan_138();
                cout << "---------------------------------------------------\n";
                cout << "Data berhasil dihapus\n";
                cout << "===================================================\n";
                break;
            case 8:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<< HAPUS BELAKANG >>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                hapusBelakang_138();
                cout << "---------------------------------------------------\n";
                cout << "Data berhasil dihapus\n";
                cout << "===================================================\n";
                break;
            case 9:
                cout << "===================================================\n";
                cout << "<<<<<<<<<<<<<<<<<< TAMBAH TENGAH >>>>>>>>>>>>>>>>>>\n";
                cout << "===================================================\n";
                cout << "Masukkan posisi  : ";
                cin >> posisiNama_138;
                hapusTengah_138(posisiNama_138);
                cout << "---------------------------------------------------\n";
                cout << "Data berhasil dihapus\n";
                cout << "===================================================\n";
                break;
            case 10:
                clearList_138();
                break;
            case 11:
                tampilList_138();
                break;
            case 0:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Maaf, pilihan tidak tersedia!\n";
        }
    } while (Pilih_138 != 0);

    return 0;
}
