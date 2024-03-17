# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">RICO ADE PRATAMA - 2311102138</p>

## Dasar Teori

#### A. Pengertian Array
Array atau larik sendiri di definisikan sebagai pemesanan alokasi memory yang berurutan. Definisi ini kurang cocok, karena terjadi ketidakakuratan antara struktur data dan representasinya, hampir selalu di implementasikan menggunakan memory berurutan tapi tidak selalu demikian. Semua elemem array bertipe sama. Array cocok untuk mengatur kumpulan data homogen yang  ukuran atau jumlah maksimum elemennya diketahui sejak awal. Homogen adalah semua elemen  array tertentu harus memiliki tipe data yang sama.Struktur array adalah kumpulan elemen-elemen data yang digabungkan menjadi suatu kesatuan yang memiliki tipe homogen (sama). Array diawali dari angka 0.

#### B. Karakteristik Array :
1) Mempunyai batasan dari pemesanan alokasi memori (bersifat statis).
2) Mempunyai tipe data sama (bersifat homogen).
3) Dapat diakses secara acak.

#### C. Deklarasi Array :
Ada tiga hal yang harus diketahui dalam pendeklarasian, yaitu :
1) Type data array.
2) Nama variable array.
3) Subkrip / index array.

#### D. Penggunaan Array
Pada dasarnya penggunaan array sangat luas tidak hanya digunakan pada bahasa pemrogaman.
Contoh penggunaan array sebagai berikut :
1) Array digunakan untuk suatu database, contoh : tabel.
2) Array digunakan untuk operasi matematika seperti vektor.
3) Digunakan dalam bentuk struktur data lain, contohnya list.

#### E. Bentuk-Bentuk Array
1) Array Satu Dimensi 
Array satu dimensi adalah kumpulan elemen identik yang hanya terdiri dari  satu baris atau  kolom  alamat  penyimpanan data (indeks). Elemen ini memiliki tipe data yang sama, namun isi  elemen tersebut dapat berbeda.
Bentuk umum :
Tipe_data namaArray[n] = {elemen0, elemen1, elemen2,…..,n};
n = jumlah elemen
contoh pada progam : int ukur[5] = {39, 40. 41, 38, 40};
· int adalah tipe data yang berupa bilangan bulat.
· Ukur adalah nama variabel array.
· [5] adalah ukuran untuk menyatakan
jumlah maksimal elemen array.

2) Array Dua Dimensi 
Array dua dimensi sering digambarkan  sebagai  matriks, yang merupakan perpanjangan dari array satu dimensi. Jika larik satu dimensi  terdiri dari tepat satu baris dan kira-kira kolom elemen, maka larik dua dimensi  terdiri  dari  beberapa baris dan  kolom yang terdiri dari elemen bertipe sama. sehingga dapat digambarkan sebagai berikut :
Bentuk umum :
Tipe_data namaArray [m][n] = {{a,b,…z},{1,2,…,n-1}};
contoh : int lulus[4][3];
· Nilai 4 untuk menyatakan banyaknya baris dan 3 untuk menyatakan banyaknya kolom.
Mendeklarasikan array dua dimensi  sama  dengan mendeklarasikan array satu dimensi, hanya saja array dua dimensi berisi dua  elemen dalam tanda kurung siku yang mungkin tidak sama. Elemen dari array dua dimensi diakses dengan menulis kedua indeks elemen dalam tanda kurung ().

3) Array Multidimensi 
Array ini mirip dengan array dua dimensi, namun bisa lebih besar. Dalam praktiknya, array multidimensi tidak terlalu sering  digunakan, namun array ini dapat memainkan peran penting ketika dibutuhkan sejumlah besar dimensi.
Bentuk umum pendeklarasian array
multidimensi :
Tipe_datanamaArray[ukuran1][ukuran2]…[ukuranN];
Sebagai contoh :
int data_huruf[2][8][8];

## Guided 

### 1. [Program Input Array Tiga Dimensi]

```C++
#include <iostream>
using namespace std;

// PROGRAM INPUT ARRAY 3 DIMENSI by RICO ADE PRATAMA
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
#### Output:
![SS_Guided1_Laprak2_2311102138_RicoAdePratama](/Pertemuan02/LAPRAK02/SS_Guided1_Laprak2_2311102138_RicoAdePratama.png)

Kode di atas digunakan untuk melakukan Implementasi array tiga dimensi. Program array tiga dimensi ini mempunyai dimensi 2x3x3. Proses input dilakukan menggunakan tiga loop, yang masing-masingnya mengakses indeks x, y, z dari array. Setelah input selesai, program menggunakan loop serupa untuk mengeluarkan nilai array. Program kemudian mencetak tampilan seluruh array yang berisi satu angka per baris untuk setiap dimensi x, diikuti dengan baris kosong untuk setiap dimensi y.

### 2. [Program Mencari Nilai Maksimal pada Array]

```C++
#include <iostream>
using namespace std;

// Program Mencari Nilai Maksimal pada Array by RICO ADE PRATAMA
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

```
#### Output:
![SS_Guided2_Laprak2_2311102138_RicoAdePratama](/Pertemuan02/LAPRAK02/SS_Guided2_Laprak2_2311102138_RicoAdePratama.png)

Kode di atas digunakan untuk mencari nilai maksimal atau maksimum pada array. Program ini menggunakan input panjang array dan mengisi array dengan angka. Lalu program menemukan nilai maksimal atau maksimum dari array, serta menentukan lokasi dari array keberapa yang menghasilkan nilai maksimal atau maksimum tersebut.


## Unguided 


### 1. [Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!    ![Soal Unguided 1](/Pertemuan02/LAPRAK02/Soal_Unguided1.png)]

```C++
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

```
#### Output:
![SS_Unguided1_Laprak2_2311102138_RicoAdePratama](/Pertemuan02/LAPRAK02/SS_Unguided01_Laprak2_2311102138_RicoAdePratama.png)

Kode diatas digunakan untuk mencari, menentukan dan memisahkan bilangan genap dan ganjil dalam sebuah array. Program ini menggunakan array input, Serta dua vektor, 'Rico_138' dan 'IF11D_138', dibuat untuk menyimpan bilangan genap dan ganjil dari array tersebut. Program melakukan iterasi melalui setiap elemen array 'dataArray_138'. Selama iterasi, jika elemen array tersebut merupakan bilangan genap (habis dibagi dua), maka nilai tersebut dimasukkan ke dalam vektor 'Rico_138'. Jika bukan, maka nilai tersebut dimasukkan ke dalam vektor 'IF11D_138'. Setelah selesai memisahkan bilangan genap dan ganjil, program mencetak nilai-nilai dari array awal, serta nilai-nilai dari kedua vektor yang berisi bilangan genap dan ganjil. Program selesai, lebih jelasnya yang hasil programnya seperti gambar output diatas.

### 2. [Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]

```C++
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


```
#### Output:
![SS_Unguided2_Laprak2_2311102138_RicoAdePratama](/Pertemuan02/LAPRAK02/SS_Unguided02_Laprak2_2311102138_RicoAdePratama.png)

Kode di atas digunakan untuk Implementasi array tiga dimensi, seperti pada guided 1. Program ini menggunakan input array, dan Program ini mendeklarasikan array tiga dimensi berukuran 1x3x8 menggunakan tipe data 'int'. Artinya dimensi pertama array berisi satu elemen, dimensi kedua berisi tiga elemen, dan dimensi ketiga berisi delapan elemen. Selanjutnya, program meminta pengguna untuk memasukkan nilai ke dalam array. Hal ini dilakukan dengan menggunakan tiga loop bersarang untuk mengakses setiap dimensi array. Pesan "Input Array[x][y][z] =" ditampilkan dan meminta pengguna memasukkan nilai. Setelah semua nilai dimasukkan, program mengeluarkan nilai array menggunakan loop yang mirip dengan loop input. Namun, program ini mengeluarkan nilai setiap elemen array dengan pesan "Data Array[x][y][z] =". Program ini juga mencetak tampilan seluruh array dengan satu angka per baris untuk setiap dimensi y, diikuti dengan baris kosong untuk setiap dimensi x. Program selesai, lebih jelasnya yang hasil programnya seperti gambar output diatas.

### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!]

```C++
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

```
#### Output:
![SS_Unguided03_Laprak2_2311102138_RicoAdePratama](/Pertemuan02/LAPRAK02/SS_Unguided03_Laprak2_2311102138_RicoAdePratama.png)

Kode di atas digunakan untuk membuat program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata–rata dari suatu array dengan input yang dimasukan oleh pengguna. Program meminta pengguna untuk memasukkan panjang array dan elemen array. Kemudian, program menampilkan menu operasi yang tersedia. Seperti Menu Nomor 1, mencari nilai maksimum sebuah array. Nomor 2, mencari nilai minimum sebuah array. Nomor 3,Menghitung nilai rata-rata sebuah array. Dan nomor 4 keluar atau menghentikan program. Program ini menggunakan fungsi 'Rico138_Maksimum', 'Rico138_Minimum', dan 'Rico138_Average' untuk melakukan operasinya. Setelah pengguna memilih operasi yang diinginkan, program  menampilkan hasil operasi sesuai pilihan pengguna. Pengguna dapat memilih operasi yang diinginkan untuk dilanjutkan, atau memilih nomor 4 untuk keluar dari program. Program  terus berjalan dalam satu putaran hingga pengguna memilih untuk keluar. Program selesai ketika pengguna memilih untuk keluar. Lebih jelasnya yang hasil programnya seperti gambar output diatas.

## Kesimpulan
Kesimpulannya, Pemahaman dari ketiga program tersebut adalah bahwa array adalah struktur data yang sangat berguna dalam pemrograman untuk menyimpan dan mengorganisasi data. Program-program tersebut juga menunjukkan bagaimana array dapat digunakan dalam berbagai konteks, mulai dari memisahkan elemen array berdasarkan kondisi tertentu hingga melakukan operasi-operasi matematika sederhana. Struktur array sendiri adalah sekumpulan dari elemen data yang dikelompokkan menjadi unit-unit dengan tipe yang homogen (sama). Sementara, Array adalah bagian dari struktur data yang terdapat dalam struktur data sederhana, yang dapat didefinisikan sebagai peta memori sementara di dalam komputer. Array dapat berupa satu dimensi, dua dimensi, atau multidimensi. Serta, dalam elemen array ditempatkan secara berurutan ke dalam memori komputer(). Dengan pemahaman yang baik tentang array akan sangat membantu programmer dalam mengelola data dengan lebih efisien pada program.
 
## Referensi
[1] lestari, K. (2019, March 29). STUKTUR DATA STATIS ARRAY. https://doi.org/10.31219/osf.io/mx6cp