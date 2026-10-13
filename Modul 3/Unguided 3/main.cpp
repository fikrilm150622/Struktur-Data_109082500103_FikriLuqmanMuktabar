#include <iostream>
#include "array.h"
using namespace std;

int main() {
    int A[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int B[3][3] = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };
    int x = 50, y = 60;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);
    tukarArray(A, B, 1, 1);
    cout << "\nSetelah menukar elemen baris ke-2 kolom ke-2:" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);
    cout << "\nSebelum menukar pointer: " << *p1 << " dan " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Setelah menukar pointer: " << *p1 << " dan " << *p2 << endl;
    return 0;
}