#include <iostream>
using namespace std;

int hitungNilaiAkhir(int nilaiTugas, int nilaiUTS, int nilaiUAS) {
    int nilaiAkhir = (nilaiTugas + nilaiUTS + nilaiUAS) / 3;
    return nilaiAkhir;
}

char tentukanGrade(int nilaiAkhir, char grade) {
    if(nilaiAkhir >= 85) {
        grade = 'A';
    } else if(nilaiAkhir >= 75) {
        grade = 'B';
    } else if(nilaiAkhir >=65) {
        grade = 'C';
    } else if(nilaiAkhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    return grade;
}

void tampilkanHasil(int nilaiAkhir, char grade) {
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Grade       : " << grade << endl;
}

int main() {
    int nilaiTugas, nilaiUTS, nilaiUAS;
    cout << "-------Input nilai-------" << endl;
    cout << "Tugas   : ";
    cin >> nilaiTugas;
    cout << "UTS     : ";
    cin >> nilaiUTS;
    cout << "UAS     : ";
    cin >> nilaiUAS;
    hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);
    int nilaiAkhir = hitungNilaiAkhir(nilaiTugas, nilaiUTS, nilaiUAS);
    char grade;
    grade = tentukanGrade(nilaiAkhir, grade);
    cout << "------HASIL AKHIR------" << endl;
    tampilkanHasil(nilaiAkhir, grade);
}