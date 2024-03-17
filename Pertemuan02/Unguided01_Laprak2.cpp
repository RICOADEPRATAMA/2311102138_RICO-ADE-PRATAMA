// LAPRAK 2 : UNGUIDED 1
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Inisialisasi array
    int dataArray_138[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> Rico_138;
    vector<int> IF11D_138;

    // Memisahkan angka genap dan ganjil
    for (int i_138 = 0; i_138 < sizeof(dataArray_138) / sizeof(dataArray_138[0]); ++i_138) {
        if (dataArray_138[i_138] % 2 == 0) {
            Rico_138.push_back(dataArray_138[i_138]);
        } else {
            IF11D_138.push_back(dataArray_138[i_138]);
        }
    }

    // Menampilkan hasil
    cout << "Data Array   :";
    for (int i_138 = 0; i_138 < sizeof(dataArray_138) / sizeof(dataArray_138[0]); ++i_138) {
        cout << " " << dataArray_138[i_138];
    }
    cout << endl;

    cout << "Nomor Genap  :";
    for (int i_138 = 0; i_138 < Rico_138.size(); ++i_138) {
        cout << " " << Rico_138[i_138];
        if (i_138 < Rico_138.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil :";
    for (int i_138 = 0; i_138 < IF11D_138.size(); ++i_138) {
        cout << " " << IF11D_138[i_138];
        if (i_138 < IF11D_138.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}