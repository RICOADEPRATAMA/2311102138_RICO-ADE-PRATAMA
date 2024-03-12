// LAPRAK 1 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

#include <iostream>
#include <string>

using namespace std;

// class PemainSepakBola
class PemainSepakBola {
public:
    // atribut
    string nama_138;
    int umur_138;
    int Goal_138;
    int assistGoal_138;
    string tim_138;

    // method
    void print() {
        cout << "Nama: " << nama_138 << endl;
        cout << "Umur: " << umur_138 << endl;
        cout << "Goal: " << Goal_138 << endl;
        cout << "Assist Goal: " << assistGoal_138 << endl;
        cout << "Tim: " << tim_138 << endl;
        cout << "----------------------" << endl;
    }
};

// struct PemainSepakBolaStruct
struct PemainSepakBolaStruct {
    // atribut
    string nama_138;
    int umur_138;
    int Goal_138;
    int assistGoal_138;
    string tim_138;
};

int main() {
    // Membuat objek dari class PemainSepakBola dan mengisi data
    PemainSepakBola pemain1;
    pemain1.nama_138 = "Lionel Messi";
    pemain1.umur_138 = 36;
    pemain1.Goal_138 = 30;
    pemain1.assistGoal_138 = 15;
    pemain1.tim_138 = "Inter Miami FC";

    // Menampilkan informasi pemain1
    pemain1.print();

    // Membuat objek dari struct PemainSepakBolaStruct dan mengisi data
    PemainSepakBolaStruct pemain2;
    pemain2.nama_138 = "Cristiano Ronaldo";
    pemain2.umur_138 = 39;
    pemain2.Goal_138 = 51;
    pemain2.assistGoal_138 = 10;
    pemain2.tim_138 = "Al-Nassr FC";

    // Menampilkan informasi pemain2
    cout << "Nama: " << pemain2.nama_138 << endl;
    cout << "Umur: " << pemain2.umur_138 << endl;
    cout << "Goal: " << pemain2.Goal_138 << endl;
    cout << "Assist Goal: " << pemain2.assistGoal_138 << endl;
    cout << "Tim: " << pemain2.tim_138 << endl;
    cout << "----------------------" << endl;

    return 0;
}
