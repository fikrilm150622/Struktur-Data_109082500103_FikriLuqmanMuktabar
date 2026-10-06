#include <iostream>
using namespace std;

int cariMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int cariMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
void cariRata(int arr[], int n, float &rata) {
    int jumlah = 0;
    for (int i = 0; i < n; i++)
        jumlah += arr[i];
    rata = (float) jumlah / n;
}
int main() {
    int arrA[] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int n = 10;
    int pilihan;
    float rata;
    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. cari nilai maksimum" << endl;
    cout << "3. cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata - rata" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
    if (pilihan == 1) {
        cout << "Isi array: ";
        for (int i = 0; i < n; i++)
            cout << arrA[i] << " ";
        cout << endl;
    }
    else if (pilihan == 2) {
        cout << "Nilai maksimum = " << cariMax(arrA, n) << endl;
    }
    else if (pilihan == 3) {
        cout << "Nilai minimum = " << cariMin(arrA, n) << endl;
    }
    else if (pilihan == 4) {
        cariRata(arrA, n, rata);
        cout << "Nilai rata-rata = " << rata << endl;
    }
    else {
        cout << "Pilihan tidak tersedia." << endl;
    }
    return 0;
}