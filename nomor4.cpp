/*  Nama=Adam Muhammad Firdaus
    Nim=221401083
    Deskripsi=program menghitung rata-rata */
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float angka, total = 0, rata;
    int jumlah;

    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;
    cout << endl;

    jumlah -= 1;

    for (int i = 0; i <= jumlah; i++) {
        cout << "Masukkan angka: ";
        cin >> angka;
        total = total + angka;
    }

    cout << endl;
    cout << "Total: " << total << endl;
    jumlah+=1;

    rata = total/jumlah;
    cout << "Rata-rata: " << rata << endl;

    getch();
}