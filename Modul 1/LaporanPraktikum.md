# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahasa C++ (Bagian Pertama)</h1>

<p align="center">Fikri Luqman Muktabar - 109082500103</p>

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>

...

#### 1. ...

#### 2. ...

#### 3. ...

### B. ...<br/>

...

#### 1. ...

#### 2. ...

#### 3. ...

## Guided

### 1.

```C++
#include <iostream>
using namespace std;
int main(){
int W, X, Y; float Z;
X = 7; Y = 3; W = 1;
Z = (X + Y)/(Y + W);
cout<< "Nilai z = " << Z << endl;
return 0;
}
```

### Penjelasan Singkat Guided 1
Program ini digunakan untuk menghitung nilai Z berdasarkan rumus (X + Y) / (Y + W). #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cout. Pada int main(), program mulai dijalankan. int W, X, Y; digunakan untuk mendeklarasikan variabel W, X, dan Y bertipe integer, sedangkan float Z; digunakan untuk menyimpan hasil perhitungan. X = 7, Y = 3, dan W = 1 digunakan untuk memberikan nilai awal pada variabel. Selanjutnya, Z = (X + Y)/(Y + W); digunakan untuk menghitung nilai Z. Terakhir, cout << "Nilai z = " << Z << endl; digunakan untuk menampilkan hasil perhitungan, sedangkan return 0; digunakan untuk mengakhiri program.

### 2. 

```C++
#include <iostream>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + ++r;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

### Penjelasan Singkat Guided 2
Program ini digunakan untuk menghitung nilai r dan s dengan menggunakan operator increment (++). #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cout. Pada int main(), program mulai dijalankan. int r = 10; digunakan untuk mendeklarasikan variabel r dengan nilai awal 10, sedangkan int s; digunakan untuk mendeklarasikan variabel s. Pada s = 10 + ++r;, operator ++r merupakan pre-increment, sehingga nilai r bertambah terlebih dahulu dari 10 menjadi 11, kemudian digunakan dalam perhitungan. Jadi, nilai s menjadi 10 + 11 = 21. Selanjutnya, cout digunakan untuk menampilkan nilai r dan s. Hasil akhirnya adalah r = 11 dan s = 21, kemudian return 0; digunakan untuk mengakhiri program.

### 3. 

```C++
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + r++;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

### Penjelasan Singkat Guided 3
Program ini digunakan untuk memahami penggunaan operator post-increment (r++). #include <iostream> dan #include <stdlib.h> digunakan untuk library program, sedangkan using namespace std; agar dapat menggunakan cout. Pada int main(), program mulai dijalankan. int r = 10; digunakan untuk memberikan nilai awal r sebesar 10, sedangkan int s; digunakan untuk mendeklarasikan variabel s. Pada s = 10 + r++;, operator r++ merupakan post-increment, sehingga nilai r yang digunakan dalam perhitungan masih 10, kemudian nilai r bertambah menjadi 11 setelah perhitungan. Jadi, nilai s = 10 + 10 = 20 dan nilai r menjadi 11. Selanjutnya, cout digunakan untuk menampilkan nilai r dan s, sehingga hasil akhirnya adalah r = 11 dan s = 20. return 0; digunakan untuk mengakhiri program.

### 4. 

```C++
#include <iostream>
using namespace std;
int main(){
double total_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>total_pembelian;
diskon = 0;
if(total_pembelian >= 100000)
diskon = 0.05*total_pembelian;
cout<<"besar diskon = Rp" <<diskon;
}
```

### Penjelasan Singkat Guided 4
Program ini digunakan untuk menghitung besar diskon berdasarkan total pembelian. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. Pada int main(), program mulai dijalankan. double total_pembelian, diskon; digunakan untuk mendeklarasikan variabel total pembelian dan diskon. cin >> total_pembelian; digunakan untuk menerima input total pembelian. diskon = 0; digunakan untuk memberikan nilai awal diskon sebesar 0. Kondisi if(total_pembelian >= 100000) digunakan untuk memeriksa apakah total pembelian minimal Rp100.000. Jika kondisi terpenuhi, diskon = 0.05 * total_pembelian; digunakan untuk menghitung diskon sebesar 5% dari total pembelian. Jika kondisi tidak terpenuhi, nilai diskon tetap 0 karena sebelumnya sudah diberikan nilai 0. Terakhir, cout digunakan untuk menampilkan besar diskon.

### 5. 

```C++
#include <iostream>
using namespace std;
int main(){
double total_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>total_pembelian;
diskon = 0;
if(total_pembelian >= 100000)
diskon = 0.05*total_pembelian;
else
diskon = 0;
cout<<"besar diskon = Rp" <<diskon;
}
```

### Penjelasan Singkat Guided 5
Program ini digunakan untuk menghitung besar diskon berdasarkan total pembelian. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. Pada int main(), program mulai dijalankan. double total_pembelian, diskon; digunakan untuk mendeklarasikan variabel total pembelian dan diskon. cin >> total_pembelian; digunakan untuk menerima input total pembelian. diskon = 0; digunakan untuk memberikan nilai awal diskon sebesar 0. Kondisi if(total_pembelian >= 100000) digunakan untuk memeriksa apakah total pembelian minimal Rp100.000. Jika memenuhi kondisi, diskon = 0.05 * total_pembelian; digunakan untuk menghitung diskon sebesar 5%. Jika kondisi tidak terpenuhi, else membuat nilai diskon tetap 0. Terakhir, cout digunakan untuk menampilkan besar diskon dan return tidak dituliskan karena program akan selesai setelah main() berakhir.

### 6. 

```C++
#include <iostream>
using namespace std;
int main(){
int kode_hari;
puts("Menentukan hari kerja/libur\n");
puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
puts("2=Selasa 4=Kamis 6=Sabtu ");
cin>>kode_hari;
switch(kode_hari){
case 1:
case 2:
case 3:
case 4:
case 5:
cout<<"Hari Kerja"<<endl;
break;
case 6:
case 7:
cout<<"Hari Libur"<<endl;
break;
default:
cout<<"Kode masukan salah!!!"<<endl;
}
return 0;
}
```

### Penjelasan Singkat Guided 6
Program ini digunakan untuk menentukan apakah suatu hari termasuk hari kerja atau hari libur berdasarkan kode hari yang dimasukkan. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. int kode_hari; digunakan untuk menyimpan kode hari. puts() digunakan untuk menampilkan keterangan pilihan hari. cin >> kode_hari; digunakan untuk menerima kode hari dari pengguna. Selanjutnya, switch(kode_hari) digunakan untuk menentukan jenis hari berdasarkan kode yang dimasukkan. case 1 sampai case 5 menunjukkan hari Senin sampai Jumat dan menghasilkan output "Hari Kerja". case 6 dan case 7 menunjukkan Sabtu dan Minggu dan menghasilkan output "Hari Libur". break digunakan untuk menghentikan proses pada case yang sesuai. default digunakan jika kode yang dimasukkan tidak sesuai, sehingga menampilkan "Kode masukan salah!!!". return 0; digunakan untuk mengakhiri program.

### 7.

```C++
#include <iostream>
using namespace std;
int main(){
int jum;
cout<<"jumlah perulangan: ";
cin>>jum;
for(int i=0; i<jum; i++){
cout<<"saya pintar\n";
}
return 0;
}
```

### Penjelasan Singkat Guided 7
Program ini digunakan untuk menampilkan tulisan "saya pintar" sebanyak jumlah perulangan yang dimasukkan oleh pengguna. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. int jum; digunakan untuk menyimpan jumlah perulangan. cin >> jum; digunakan untuk menerima input jumlah perulangan. Selanjutnya, for(int i=0; i<jum; i++) digunakan untuk melakukan perulangan dengan nilai i mulai dari 0 sampai kurang dari jum. Setiap perulangan menjalankan cout<<"saya pintar\n"; untuk menampilkan tulisan "saya pintar" pada baris baru. return 0; digunakan untuk mengakhiri program.

### 8. 

```C++
#include <iostream>
using namespace std;
int main(){
int i=1;
int jum;
cout<<"masukan banyak baris: ";
cin>>jum;
while(i<=jum){
cout<<"baris ke-"<<i<<endl;
i++; 
}
return 0;
}
```

### Penjelasan Singkat Guided 8
Program ini digunakan untuk menampilkan nomor baris sebanyak jumlah baris yang dimasukkan oleh pengguna. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. int i=1; digunakan sebagai nilai awal perulangan, sedangkan int jum; digunakan untuk menyimpan jumlah baris. cin>>jum; digunakan untuk menerima input banyak baris. Selanjutnya, while(i<=jum) digunakan untuk melakukan perulangan selama nilai i masih kurang dari atau sama dengan jumlah baris. cout<<"baris ke-"<<i<<endl; digunakan untuk menampilkan nomor baris, kemudian i++; digunakan untuk menambah nilai i satu per satu agar perulangan berlanjut ke baris berikutnya. return 0; digunakan untuk mengakhiri program.

### 9. 

```C++
#include <iostream>
using namespace std;
int main(){
int i = 1;
int jum;
cin >> jum;
do{
cout << "baris ke-" <<(i+1)<<endl;
i++;
} while(i<jum);
return 0;
}
```

### Penjelasan Singkat Guided 9
Program ini digunakan untuk menampilkan nomor baris berdasarkan jumlah yang dimasukkan oleh pengguna dengan menggunakan perulangan do-while. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. int i = 1; digunakan sebagai nilai awal perulangan, sedangkan int jum; digunakan untuk menyimpan jumlah baris. cin >> jum; digunakan untuk menerima input jumlah baris. Selanjutnya, do digunakan untuk menjalankan perintah minimal satu kali. cout << "baris ke-" << (i+1) << endl; digunakan untuk menampilkan nomor baris, kemudian i++; digunakan untuk menambah nilai i satu. while(i<jum); digunakan untuk mengulang perintah selama nilai i masih kurang dari jum. return 0; digunakan untuk mengakhiri program.

### 10. 

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
int i;
struct data{
char nama[40];
int nilai;
};
data siswa[MAX];
for(i=0; i<MAX; i++){
cout<<"masukkan data ke-"<<i+1<<endl;
cout<<"nama = ";
cin>>siswa[i].nama;
cout<<"nilai = ";
cin>>siswa[i].nilai;
}
cout<<"\ndata siswa\n";
cout<<"=======";
for(i=0; i<MAX; i++){
cout<<"\n\ndata ke-"<<i+1;
cout<<"\n\nnama="<<siswa[i].nama;
cout<<"\n\nnilai="<<siswa[i].nilai;
}
return 0;
}

```

### Penjelasan Singkat Guided 10
Program ini digunakan untuk menerima dan menampilkan data siswa berupa nama dan nilai sebanyak 5 data dengan menggunakan struct dan array. #include <iostream> digunakan untuk input dan output, sedangkan #define MAX 5 digunakan untuk menentukan jumlah data siswa sebanyak 5. using namespace std; agar dapat menggunakan cin dan cout. struct data digunakan untuk membuat struktur data yang memiliki nama bertipe karakter dan nilai bertipe integer. data siswa[MAX]; digunakan untuk membuat array siswa yang dapat menyimpan 5 data siswa. Perulangan for(i=0; i<MAX; i++) digunakan untuk memasukkan data siswa satu per satu. cin>>siswa[i].nama; digunakan untuk menerima nama siswa, sedangkan cin>>siswa[i].nilai; digunakan untuk menerima nilai siswa. Setelah semua data dimasukkan, perulangan for berikutnya digunakan untuk menampilkan kembali seluruh data siswa yang telah disimpan. siswa[i].nama digunakan untuk menampilkan nama dan siswa[i].nilai digunakan untuk menampilkan nilai. return 0; digunakan untuk mengakhiri program.

### 11. 

```C++
#include <iostream>
using namespace std;
float ctof(float celcius);
int main() {
float celcius, fahrenheit;
cout <<"nilai Celcius? ";
cin >> celcius;
fahrenheit = ctof(celcius);
cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
return 0;
}
float ctof(float celcius){
return (celcius * 1.8) + 32;
}
```

### Penjelasan Singkat Guided 11
Program ini digunakan untuk mengubah suhu dari Celcius ke Fahrenheit dengan menggunakan fungsi ctof(). #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. float ctof(float celcius); digunakan sebagai deklarasi fungsi ctof yang menerima nilai Celcius dan menghasilkan nilai Fahrenheit. Pada int main(), float celcius, fahrenheit; digunakan untuk menyimpan nilai suhu. cin >> celcius; digunakan untuk menerima input suhu Celcius. Selanjutnya, fahrenheit = ctof(celcius); digunakan untuk memanggil fungsi ctof() dan menyimpan hasil konversi ke variabel fahrenheit. Fungsi ctof(float celcius) digunakan untuk menghitung konversi dengan rumus (celcius * 1.8) + 32. Hasil konversi kemudian ditampilkan menggunakan cout, sedangkan return 0; digunakan untuk mengakhiri program.


## Unguided

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Masukkan bilangan pertama = ";
    cin >> a;
    cout << "Masukkan bilangan kedua = ";
    cin >> b;
    cout << "Hasil penjumlahan = " << a + b << endl;
    cout << "Hasil pengurangan = " << a - b << endl;
    cout << "Hasil perkalian = " << a * b << endl;
    cout << "Hasil pembagian = " << a / b << endl;
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

((https://github.com/fikrilm150622/Struktur-Data_109082500103_FikriLuqmanMuktabar/blob/main/Modul%201/Output/Unguided%201.1.png))

##### Output 2

(https://github.com/fikrilm150622/Struktur-Data_109082500103_FikriLuqmanMuktabar/blob/main/Modul%201/Output/Unguided%201.2.png)

### Penjelasan Unguided 1
Program ini digunakan untuk menerima dua bilangan bertipe float, kemudian menghitung hasil penjumlahan, pengurangan, perkalian, dan pembagian. #include <iostream>> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. float a, b; digunakan untuk mendeklarasikan dua variabel bilangan. cin >> a; dan cin >> b; digunakan untuk menerima input. Selanjutnya, a + b, a - b, a * b, dan a / b digunakan untuk menghitung masing-masing operasi dan hasilnya ditampilkan dengan cout. return 0; digunakan untuk mengakhiri program.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.

```C++
#include <iostream>
using namespace std;

int main() {
    int angka;
    string satuan[] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
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
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2

![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

### Penjelasan Unguided 2
Program ini digunakan untuk menerima masukan angka dari 0 sampai 100 dan mengubahnya menjadi bentuk tulisan. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. int angka; digunakan untuk menyimpan angka yang dimasukkan. string satuan[] digunakan untuk menyimpan nama angka dari nol sampai sembilan. cin >> angka; digunakan untuk menerima input angka. Selanjutnya, if dan else if digunakan untuk menentukan bentuk tulisan berdasarkan nilai angka. satuan[angka] digunakan untuk menampilkan angka satuan, sedangkan angka / 10 menentukan angka puluhan dan angka % 10 menentukan angka satuannya. Terakhir, cout digunakan untuk menampilkan hasil dalam bentuk tulisan dan return 0; digunakan untuk mengakhiri program.

### 3. Buatlah program yang dapat memberikan input dan output sebagai berikut. Program menerima input sebuah angka dan menghasilkan pola perkalian menurun sesuai angka tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        for (int j = i; j >= 1; j--)
            cout << j << " ";
        cout << "* ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2

![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

### Penjelasan Unguided 3
Program ini digunakan untuk menerima input sebuah angka dan menampilkan pola mirror sesuai dengan angka tersebut. #include <iostream> digunakan untuk input dan output, sedangkan using namespace std; agar dapat menggunakan cin dan cout. Pada int main(), program mulai dijalankan. int n; digunakan untuk menyimpan angka yang dimasukkan. cin >> n; digunakan untuk menerima input. Perulangan for (int i = n; i >= 1; i--) digunakan untuk membuat baris dari angka terbesar sampai 1. Perulangan pertama for digunakan untuk memberikan spasi agar pola bergeser ke kanan. Perulangan kedua menampilkan angka dari i sampai 1. cout << "* "; menampilkan tanda * sebagai bagian tengah pola. Perulangan berikutnya menampilkan angka dari 1 sampai i, sehingga membentuk pola mirror. cout << endl; digunakan untuk pindah ke baris berikutnya, sedangkan return 0; digunakan untuk mengakhiri program.

## Kesimpulan

...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...