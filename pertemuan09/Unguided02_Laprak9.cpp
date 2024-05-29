// LAPRAK 9 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dandescendant dari node yang diinput kan!
#include <iostream> // Library untuk operasi input dan output
#include <iomanip> // Library untuk merapihkan ,enu output
#include <queue> // Library untuk menggunakan queue dalam BFS
using namespace std;

// Struktur Pohon
struct Pohon
{
    char Data_2311102138;
    Pohon *Kiri_2311102138, *Kanan_2311102138, *Parent_2311102138;
};
Pohon *Root_2311102138, *Baru_2311102138;

// Inisialisasi Root_2311102138 tree
void init_2311102138()
{
    Root_2311102138 = NULL;
}

// Cek apakah tree kosong
bool isEmpty_2311102138()
{
    return Root_2311102138 == NULL;
}

// Buat Node_2311102138 Baru_2311102138 sebagai Root_2311102138
void buatNode_2311102138(char Data_2311102138)
{
    if (isEmpty_2311102138())
    {
        Root_2311102138 = new Pohon();
        Root_2311102138->Data_2311102138 = Data_2311102138;
        Root_2311102138->Kiri_2311102138 = NULL;
        Root_2311102138->Kanan_2311102138 = NULL;
        Root_2311102138->Parent_2311102138 = NULL;
        cout << "\n[2138] Node " << Data_2311102138 << " berhasil dibuat sebagai root." << endl;
    }
    else
    {
        cout << "\n[2138] Tree sudah ada!" << endl;
    }
}

// Insert Node_2311102138 ke kiri
Pohon *insertKiri_2311102138(char Data_2311102138, Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (Node_2311102138->Kiri_2311102138 != NULL)
        {
            cout << "\n[2138] Node " << Node_2311102138->Data_2311102138 << " sudah ada child kiri!" << endl;
            return NULL;
        }
        else
        {
            Pohon *Baru_2311102138 = new Pohon();
            Baru_2311102138->Data_2311102138 = Data_2311102138;
            Baru_2311102138->Kiri_2311102138 = NULL;
            Baru_2311102138->Kanan_2311102138 = NULL;
            Baru_2311102138->Parent_2311102138 = Node_2311102138;
            Node_2311102138->Kiri_2311102138 = Baru_2311102138;
            cout << "\n[2138] Node " << Data_2311102138 << " berhasil ditambahkan ke child kiri " << Baru_2311102138->Parent_2311102138->Data_2311102138 << endl;
            return Baru_2311102138;
        }
    }
}

// Insert Node_2311102138 ke kanan
Pohon *insertKanan_2311102138(char Data_2311102138, Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (Node_2311102138->Kanan_2311102138 != NULL)
        {
            cout << "\n[2138] Node " << Node_2311102138->Data_2311102138 << " sudah ada child kanan!" << endl;
            return NULL;
        }
        else
        {
            Pohon *Baru_2311102138 = new Pohon();
            Baru_2311102138->Data_2311102138 = Data_2311102138;
            Baru_2311102138->Kiri_2311102138 = NULL;
            Baru_2311102138->Kanan_2311102138 = NULL;
            Baru_2311102138->Parent_2311102138 = Node_2311102138;
            Node_2311102138->Kanan_2311102138 = Baru_2311102138;
            cout << "\n[2138] Node " << Data_2311102138 << " berhasil ditambahkan ke child kanan " << Baru_2311102138->Parent_2311102138->Data_2311102138 << endl;
            return Baru_2311102138;
        }
    }
}

// Update Data_2311102138 Node_2311102138
void update_2311102138(char Data_2311102138, Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_2311102138)
        {
            cout << "\n[2138] Node yang ingin diganti tidak ada!" << endl;
        }
        else
        {
            char temp = Node_2311102138->Data_2311102138;
            Node_2311102138->Data_2311102138 = Data_2311102138;
            cout << "\n[2138] Node " << temp << " berhasil diubah menjadi " << Data_2311102138 << endl;
        }
    }
}

// Retrieve Data_2311102138 Node_2311102138
void retrieve_2311102138(Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_2311102138)
        {
            cout << "\n[2138] Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n[2138] Data Node : " << Node_2311102138->Data_2311102138 << endl;
        }
    }
}

// Find Node_2311102138 dan menampilkan informasi lengkap
void find_2311102138(Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_2311102138)
        {
            cout << "\n[2138] Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n[2138] Data Node : " << Node_2311102138->Data_2311102138 << endl;
            cout << "[2138] Root : " << Root_2311102138->Data_2311102138 << endl;
            if (!Node_2311102138->Parent_2311102138)
                cout << "[2138] Parent : (tidak punya parent)" << endl;
            else
                cout << "[2138] Parent : " << Node_2311102138->Parent_2311102138->Data_2311102138 << endl;
            if (Node_2311102138->Parent_2311102138 != NULL && Node_2311102138->Parent_2311102138->Kiri_2311102138 != Node_2311102138 && Node_2311102138->Parent_2311102138->Kanan_2311102138 == Node_2311102138)
                cout << "[2138] Sibling : " << Node_2311102138->Parent_2311102138->Kiri_2311102138->Data_2311102138 << endl;
            else if (Node_2311102138->Parent_2311102138 != NULL && Node_2311102138->Parent_2311102138->Kanan_2311102138 != Node_2311102138 && Node_2311102138->Parent_2311102138->Kiri_2311102138 == Node_2311102138)
                cout << "[2138] Sibling : " << Node_2311102138->Parent_2311102138->Kanan_2311102138->Data_2311102138 << endl;
            else
                cout << "[2138] Sibling : (tidak punya sibling)" << endl;
            if (!Node_2311102138->Kiri_2311102138)
                cout << "[2138] Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "[2138] Child Kiri : " << Node_2311102138->Kiri_2311102138->Data_2311102138 << endl;
            if (!Node_2311102138->Kanan_2311102138)
                cout << "[2138] Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "[2138] Child Kanan : " << Node_2311102138->Kanan_2311102138->Data_2311102138 << endl;
        }
    }
}

// Pre-order traversal
void preOrder_2311102138(Pohon *Node_2311102138 = Root_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_2311102138 != NULL)
        {
            cout << " " << Node_2311102138->Data_2311102138 << ", ";
            preOrder_2311102138(Node_2311102138->Kiri_2311102138);
            preOrder_2311102138(Node_2311102138->Kanan_2311102138);
        }
    }
}

// In-order traversal
void inOrder_2311102138(Pohon *Node_2311102138 = Root_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_2311102138 != NULL)
        {
            inOrder_2311102138(Node_2311102138->Kiri_2311102138);
            cout << " " << Node_2311102138->Data_2311102138 << ", ";
            inOrder_2311102138(Node_2311102138->Kanan_2311102138);
        }
    }
}

// Post-order traversal
void postOrder_2311102138(Pohon *Node_2311102138 = Root_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_2311102138 != NULL)
        {
            postOrder_2311102138(Node_2311102138->Kiri_2311102138);
            postOrder_2311102138(Node_2311102138->Kanan_2311102138);
            cout << " " << Node_2311102138->Data_2311102138 << ", ";
        }
    }
}

// Hapus tree secara rekursif
void deleteTree_2311102138(Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_2311102138 != NULL)
        {
            if (Node_2311102138 != Root_2311102138)
            {
                Node_2311102138->Parent_2311102138->Kiri_2311102138 = NULL;
                Node_2311102138->Parent_2311102138->Kanan_2311102138 = NULL;
            }
            deleteTree_2311102138(Node_2311102138->Kiri_2311102138);
            deleteTree_2311102138(Node_2311102138->Kanan_2311102138);
            if (Node_2311102138 == Root_2311102138)
            {
                delete Root_2311102138;
                Root_2311102138 = NULL;
            }
            else
            {
                delete Node_2311102138;
            }
        }
    }
}

// Hapus subtree dari Node_2311102138 tertentu
void deleteSub_2311102138(Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree_2311102138(Node_2311102138->Kiri_2311102138);
        deleteTree_2311102138(Node_2311102138->Kanan_2311102138);
        cout << "\n[2138] Node subtree " << Node_2311102138->Data_2311102138 << " berhasil dihapus." << endl;
    }
}

// Hapus seluruh tree
void clear_2311102138()
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree_2311102138(Root_2311102138);
        cout << "\n[2138] Pohon berhasil dihapus." << endl;
    }
}

// Hitung size_2311102138 tree
int size_2311102138(Pohon *Node_2311102138 = Root_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!Node_2311102138)
        {
            return 0;
        }
        else
        {
            return 1 + size_2311102138(Node_2311102138->Kiri_2311102138) + size_2311102138(Node_2311102138->Kanan_2311102138);
        }
    }
}

// Hitung height_2311102138 tree
int height_2311102138(Pohon *Node_2311102138 = Root_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!Node_2311102138)
        {
            return 0;
        }
        else
        {
            int heightKiri = height_2311102138(Node_2311102138->Kiri_2311102138);
            int heightKanan = height_2311102138(Node_2311102138->Kanan_2311102138);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}

// Tampilkan karakteristik tree
void characteristic_2311102138()
{
    cout << "\n>> Ukuran Tree : " << size_2311102138() << endl;
    cout << ">> Tinggi Tree : " << height_2311102138() << endl;
    cout << ">> Rata-rata Node di Tree : " << size_2311102138() / height_2311102138() << endl;
}

// Tampilkan child dan descendant dari Node_2311102138 tertentu
void showChilAndDescendant_2311102138(Pohon *Node_2311102138)
{
    if (isEmpty_2311102138())
    {
        cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
    }
    else if (!Node_2311102138)
    {
        cout << "\n[2138] Node yang ditunjuk tidak ada!" << endl;
    }
    else
    {
        // Tampilkan child
        cout << "\n[2138] Node : " << Node_2311102138->Data_2311102138 << endl;
        if (Node_2311102138->Kiri_2311102138)
            cout << "[2138] Child Kiri : " << Node_2311102138->Kiri_2311102138->Data_2311102138 << endl;
        else
            cout << "[2138] Child Kiri : (tidak punya Child kiri)" << endl;
        if (Node_2311102138->Kanan_2311102138)
            cout << "[2138] Child Kanan : " << Node_2311102138->Kanan_2311102138->Data_2311102138 << endl;
        else
            cout << "[2138] Child Kanan : (tidak punya Child kanan)" << endl;

        // Tampilkan descendant
        cout << "[2138] Descendant : ";
        queue<Pohon *> q_2311102138;
        q_2311102138.push(Node_2311102138);
        bool first = true;
        while (!q_2311102138.empty())
        {
            Pohon *current = q_2311102138.front();
            q_2311102138.pop();
            if (!first)
                cout << current->Data_2311102138 << ", ";
            first = false;
            if (current->Kiri_2311102138)
                q_2311102138.push(current->Kiri_2311102138);
            if (current->Kanan_2311102138)
                q_2311102138.push(current->Kanan_2311102138);
        }
        cout << endl;
    }
}

int main()
{
    int Pilihan_2311102138;
    char Data_2311102138;
    Pohon *Node_2311102138 = NULL;
    do
    {
        // Program Menu
        cout << "\n\n>>>>>>> PROGRAM MENU DATA TREE BY RICO ADE PRATAMA <<<<<<<:\n";
        cout << "1.  Buat Node Root\n";
        cout << "2.  Insert Kiri\n";
        cout << "3.  Insert Kanan\n";
        cout << "4.  Update Node\n";
        cout << "5.  Retrieve Node\n";
        cout << "6.  Cari Node\n";
        cout << "7.  Pre-order Traversal\n";
        cout << "8.  In-order Traversal\n";
        cout << "9.  Post-order Traversal\n";
        cout << "10. Hapus Tree\n";
        cout << "11. Hapus Subtree\n";
        cout << "12. Tampilkan Karakteristik Tree\n";
        cout << "13. Tampilkan Child dan Descendant\n";
        cout << "0.  Keluar\n";
        cout << ">> Pilih menu : ";
        cin >> Pilihan_2311102138;
        switch (Pilihan_2311102138)
        {
        case 1:
            cout << "\n<<<<<<< [1] Buat Node Root >>>>>>>" << endl;
            cout << ">> Masukkan data untuk root : ";
            cin >> Data_2311102138;
            buatNode_2311102138(Data_2311102138);
            break;
        case 2:
            cout << "\n<<<<<<< [2] Insert Kiri >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data untuk node : ";
                cin >> Data_2311102138;
                cout << ">> Masukkan parent data : ";
                char Parent_2311102138Data;
                cin >> Parent_2311102138Data;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == Parent_2311102138Data)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    insertKiri_2311102138(Data_2311102138, Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Parent tidak ditemukan!" << endl;
                }
            }
            break;
        case 3:
            cout << "\n<<<<<<< [3] Insert Kanan >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data untuk node : ";
                cin >> Data_2311102138;
                cout << ">> Masukkan parent data : ";
                char Parent_2311102138Data;
                cin >> Parent_2311102138Data;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == Parent_2311102138Data)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    insertKanan_2311102138(Data_2311102138, Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Parent tidak ditemukan!" << endl;
                }
            }
            break;
        case 4:
            cout << "\n<<<<<<< [4] Update Node >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data baru : ";
                cin >> Data_2311102138;
                cout << ">> Masukkan node data yang akan diupdate : ";
                char update_2311102138Data;
                cin >> update_2311102138Data;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == update_2311102138Data)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    update_2311102138(Data_2311102138, Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 5:
            cout << "\n<<<<<<< [5] Retrieve Node >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditampilkan : ";
                char retrieve_2311102138Data;
                cin >> retrieve_2311102138Data;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == retrieve_2311102138Data)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    retrieve_2311102138(Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 6:
            cout << "\n<<<<<<< [6] Cari Node >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditemukan : ";
                char find_2311102138Data;
                cin >> find_2311102138Data;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == find_2311102138Data)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    find_2311102138(Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 7:
            cout << "\n<<<<<<< [7] Pre-order Traversal >>>>>>>" << endl;
            cout << "\n>> Pre-order Traversal :" << endl;
            preOrder_2311102138(Root_2311102138);
            cout << "\n"
                 << endl;
            break;
        case 8:
            cout << "\n<<<<<<< [8] In-order Traversal >>>>>>>" << endl;
            cout << "\n>> In-order Traversal :" << endl;
            inOrder_2311102138(Root_2311102138);
            cout << "\n"
                 << endl;
            break;
        case 9:
            cout << "\n<<<<<<< [9] Post-order Traversal >>>>>>>" << endl;
            cout << "\n>> Post-order Traversal :" << endl;
            postOrder_2311102138(Root_2311102138);
            cout << "\n"
                 << endl;
            break;
        case 10:
            cout << "\n<<<<<<< [10] Hapus Tree >>>>>>>" << endl;
            clear_2311102138();
            break;
        case 11:
            cout << "\n<<<<<<< [11] Hapus Subtree >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data untuk subtree yang akan dihapus : ";
                char subTreeData;
                cin >> subTreeData;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == subTreeData)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    deleteSub_2311102138(Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 12:
            cout << "\n<<<<<<< [12] Tampilkan Karakteristik Tree >>>>>>>" << endl;
            characteristic_2311102138();
            break;
        case 13:
            cout << "\n<<<<<<< [13] Tampilkan Child dan Descendant >>>>>>>" << endl;
            if (isEmpty_2311102138())
            {
                cout << "\n[2138] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditampilkan : ";
                char childDescData_2311102138;
                cin >> childDescData_2311102138;
                Node_2311102138 = NULL;
                queue<Pohon *> q_2311102138;
                q_2311102138.push(Root_2311102138);
                while (!q_2311102138.empty())
                {
                    Pohon *current = q_2311102138.front();
                    q_2311102138.pop();
                    if (current->Data_2311102138 == childDescData_2311102138)
                    {
                        Node_2311102138 = current;
                        break;
                    }
                    if (current->Kiri_2311102138)
                        q_2311102138.push(current->Kiri_2311102138);
                    if (current->Kanan_2311102138)
                        q_2311102138.push(current->Kanan_2311102138);
                }
                if (Node_2311102138)
                {
                    showChilAndDescendant_2311102138(Node_2311102138);
                }
                else
                {
                    cout << "\n[2138] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 0:
            cout << "\n[2138] Keluar dari program." << endl;
            break;
        default:
            cout << "\n[2138] Pilihan tidak valid!" << endl;
        }
    } while (Pilihan_2311102138 != 0);

    return 0; // Mengembalikan nilai 0 untuk menandakan program berakhir dengan sukses
}
