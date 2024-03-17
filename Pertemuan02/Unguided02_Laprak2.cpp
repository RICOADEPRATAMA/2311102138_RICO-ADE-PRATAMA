// LAPRAK 2 : UNGUIDED 2
// RICO ADE PRATAMA
// 2311102138
// S1 IF-11-D
#include <iostream>
using namespace std;

// PROGRAM INPUT ARRAY 3 DIMENSI by RICO ADE PRATAMA
int main()
{
    // Deklarasi array dengan ukuran 1x3x8
    int array_138[1][3][8];
    // Input elemen
    for (int x_138 = 0; x_138 < 1; x_138++)
    {
        for (int y_138 = 0; y_138 < 3; y_138++)
        {
            for (int z_138 = 0; z_138 < 8; z_138++)
            {
                cout << "Input Array[" << x_138 << "][" << y_138 << "][" << z_138 << "] = ";
                cin >> array_138[x_138][y_138][z_138];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x_138 = 0; x_138 < 1; x_138++)
    {
        for (int y_138 = 0; y_138 < 3; y_138++)
        {
            for (int z_138 = 0; z_138 < 8; z_138++)
            {
                cout << "Data Array[" << x_138 << "][" << y_138 << "][" << z_138 << "] = " << array_138[x_138][y_138][z_138] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x_138 = 0; x_138 < 1; x_138++)
    {
        for (int y_138 = 0; y_138 < 3; y_138++)
        {
            for (int z_138 = 0; z_138 < 8; z_138++)
            {
                cout << array_138[x_138][y_138][z_138] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
