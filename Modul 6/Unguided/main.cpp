#include "Doublylist.h"

void printListHapus(List L) {
    address P = L.last;

    while (P != Nil) {
        cout << "Nomor Polisi  : " << P->info.nopol << endl;
        cout << "Warna         : " << P->info.warna << endl;
        cout << "Tahun         : " << P->info.thnBuat << endl;
        P = P->prev;
    }
}

int main() {
    List L;
    infotype x;
    address P, hapus;

    createList(L);

    infotype data[3] = {
        {"D001", "hitam", 90},
        {"D003", "putih", 70},
        {"D004", "kuning", 90}
    };
    for (int i = 0; i < 3; i++) {
        insertLast(L, alokasi(data[i]));
    }

    cout << "Masukkan Nomor Polisi yang akan dihapus   : ";
    cin >> x.nopol;

    P = findElm(L, x);
    if (P != Nil) {
        if (P == L.first) {
            deleteFirst(L, hapus);
        } else if (P == L.last) {
            deleteLast(L, hapus);
        } else {
            deleteAfter(P->prev, hapus);
        }

        dealokasi(hapus);
        cout << "Data dengan nomor polisi " << x.nopol << " berhasil dihapus." << endl;
    } else {
        cout << "Data dengan nomor polisi " << x.nopol << " tidak ditemukan." << endl;
    }

    cout << endl;
    cout << "DATA LIST 1" << endl << endl;
    printListHapus(L);

    return 0;
}