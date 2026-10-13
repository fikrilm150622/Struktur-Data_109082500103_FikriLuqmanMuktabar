#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    Mahasiswa mhs[10];
    int n;
    cout << "Jumlah mahasiswa (maksimal 10): ";
    cin >> n;
    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        cin >> ws;
        getline(cin, mhs[i].nama);
        cout << "NIM: ";
        getline(cin, mhs[i].nim);
        cout << "Nilai UTS: ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS: ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i]);
    }
    cout << "\n=== DATA MAHASISWA ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nNama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nilai UTS: " << mhs[i].uts << endl;
        cout << "Nilai UAS: " << mhs[i].uas << endl;
        cout << "Nilai Tugas: " << mhs[i].tugas << endl;
        cout << "Nilai Akhir: " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}