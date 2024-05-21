// LAPRAK 8 : UNGUIDED 3
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D

//
#include <iostream>

using namespace std;

int main(){
    int n_138 = 10;
    int Data_138 [n_138] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int Target_138 = 4;
    int Count_138 = 0;

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4
    for (int i_138 = 0; i_138 < n_138; i_138++) {
        if (Data_138 [i_138] == Target_138) {
            Count_138++;
        }
    }
    cout << "\n======= SELAMAT DATANG DI PROGRAM SEQUENTIAL SEARCH BY RICO ADE PRATAMA =======" << endl;
    cout << "\n>> Data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "[2138] Angka " << Target_138 << " ditemukan sebanyak " << Count_138 << " kali." << endl;

return 0;
}