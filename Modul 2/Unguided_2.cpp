#include <iostream>
using namespace std;

void tukarPointer(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
void tukarReference(int &x, int &y, int &z) {
    int temp = x;
    x = y;
    y = z;
    z = temp;
}
int main() {
    int a = 4, b = 6, c = 8;
    cout << "Sebelum ditukar           -> a = " << a << ", b = " << b << ", c = " << c << " (Tetap)" << endl;
    tukarPointer(&a, &b, &c);
    cout << "Setelah Call by Pointer   -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah)" << endl;
    tukarReference(a, b, c);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah lagi)" << endl;
    return 0;
}