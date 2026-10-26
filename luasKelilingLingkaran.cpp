#include <iostream>
using namespace std;

int main() {
    double jariJari, luas, keliling;
    const double phi = 3.14;
    cout << "Aplikasi Menghitung Luas dan Keliling Lingkaran" << endl;
    cout << "Masukan Jari-Jari:";
    cin >> jariJari;
    luas = phi * jariJari * jariJari;
    keliling = 2 * phi * jariJari;
    cout << "Luas Lingkaran: " << luas << endl;
    cout << "Keliling Lingkaran: " << keliling << endl;
    return 0;
}
