#include <iostream>
using namespace std;

int main() {
    double panjang, lebar, luas, keliling;
    cout << "Aplikasi Menghitung Luas dan Keliling Persegi Panjang" << endl;
    cout << "Masukan Panjang:";
    cin >> panjang;
    cout << "Masukan Lebar:";
    cin >> lebar;
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    cout << "Luas Persegi Panjang: " << luas << endl;
    cout << "Keliling Persegi Panjang: " << keliling << endl;
    return 0;
}
