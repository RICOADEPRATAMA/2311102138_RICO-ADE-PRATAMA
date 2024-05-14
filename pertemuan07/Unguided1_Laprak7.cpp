// LAPRAK 7 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

// Program penerapan konsep queue pada bagian guided dari array menjadi linked list
#include <iostream>
using namespace std;

const int maksimalQueue_138 = 5;  // Maksimal antrian adalah 5

// Node untuk menyimpan data_138 dan pointer ke node berikutnya
struct Node {
    string data_138;
    Node* next_138;
};

class Queue {
private:
    Node* front_138; // Node depan dari antrian
    Node* rear_138;  // Node belakang dari antrian

public: 
    Queue() { // Konstruktor untuk menginisialisasi antrian kosong
        front_138 = nullptr;
        rear_138 = nullptr;
    }

    // Fungsi untuk menambahkan data_138 ke antrian
    void enqueue_138(const string& data_138) {
        Node* newNode_138 = new Node;
        newNode_138->data_138 = data_138;
        newNode_138->next_138 = nullptr;
        
        // Jika antrian kosong
        if (isEmpty_138()) { // Jika antrian kosong maka front_138 dan rear_138 menunjuk ke newNode_138 yang baru dibuat 
            front_138 = rear_138 = newNode_138;
        } else { // Jika antrian tidak kosong maka rear_138 menunjuk ke newNode_138 yang baru dibuat
            rear_138->next_138 = newNode_138;
            rear_138 = newNode_138;
        }
        
        cout << ">> " << data_138 << " telah ditambahkan ke dalam antrian." << endl;
    }

    // Fungsi untuk menghapus data_138 dari antrian
    void dequeue_138() {
        if (isEmpty_138()) { // Jika antrian kosong maka tampilkan pesan "Antrian kosong" dan kembalikan nilai void
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp_138 = front_138; // Simpan node front_138 ke dalam variabel temp_138 untuk dihapus nantinya 
        front_138 = front_138->next_138; // Geser front_138 ke node selanjutnya 

        cout << ">> " << temp_138->data_138 << " telah dihapus dari antrian." << endl; // Tampilkan data_138 yang dihapus dari antrian 
        delete temp_138; // Hapus node yang disimpan di variabel temp_138

        // Jika setelah penghapusan antrian menjadi kosong
        if (front_138 == nullptr) {
            rear_138 = nullptr;
        }
    }

    // Fungsi untuk menampilkan seluruh antrian
    void displayQueue_138() {
        if (isEmpty_138()) { // Jika antrian kosong maka tampilkan pesan "Data antrian:" dan tampilkan pesan "(kosong)"
            cout << "\n[2138] Data Antrian :" << endl;
            for (int i_138 = 0; i_138 < maksimalQueue_138; i_138++) {
                cout << i_138 + 1 << ". (kosong)" << endl;
            }
        } else { // Jika antrian tidak kosong maka tampilkan data_138 antrian yang ada
            cout << "\n[2138] Data Antrian :" << endl;
            Node* current_138 = front_138;
            int i_138 = 1;
            while (current_138 != nullptr) { // Selama current_138 tidak menunjuk ke nullptr maka tampilkan data_138 antrian yang ada 
                cout << i_138 << ". " << current_138->data_138 << endl;
                current_138 = current_138->next_138;
                i_138++;
            }
            for (; i_138 <= maksimalQueue_138; i_138++) { // Tampilkan pesan "(kosong)" untuk antrian yang kosong 
                cout << i_138 << ". (kosong)" << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah antrian kosong
    bool isEmpty_138() {
        return front_138 == nullptr;
    }

    // Fungsi untuk mengembalikan jumlah elemen dalam antrian
    int countQueue_138() {
        int count = 0;
        Node* current_138 = front_138;
        while (current_138 != nullptr) { // Selama current_138 tidak menunjuk ke nullptr maka hitung jumlah elemen dalam antrian
            count++;
            current_138 = current_138->next_138;
        }
        return count; // Kembalikan jumlah elemen dalam antrian
    }

    // Fungsi untuk menghapus semua elemen dalam antrian
    void clearQueue_138() {
        while (!isEmpty_138()) { // Selama antrian tidak kosong maka hapus elemen dalam antrian
            dequeue_138(); // Hapus elemen dalam antrian 
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue; // Buat objek queue dari class Queue
    queue.enqueue_138("Rico Ade Pratama");
    queue.enqueue_138("Freya JKT48");
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;
    queue.dequeue_138();
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;
    queue.dequeue_138();
    queue.displayQueue_138();
    cout << "[2138] Jumlah Antrian = " << queue.countQueue_138() << endl;

    return 0;
}