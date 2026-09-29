#include <iostream>
using namespace std;

int main() {
    int angka;
    string satuan[] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima",
                       "Enam", "Tujuh", "Delapan", "Sembilan"};
    cout << "Masukkan angka (0-100) = ";
    cin >> angka;
    if (angka < 10)
        cout << satuan[angka];
    else if (angka == 10)
        cout << "Sepuluh";
    else if (angka == 11)
        cout << "Sebelas";
    else if (angka < 20)
        cout << satuan[angka - 10] << " belas";
    else if (angka < 100)
        cout << satuan[angka / 10] << " puluh " << satuan[angka % 10];
    else
        cout << "Seratus";
    return 0;
}