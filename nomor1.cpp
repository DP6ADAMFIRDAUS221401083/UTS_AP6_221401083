/*  Nama=Adam Muhammad Firdaus
    Nim=221401083
    Deskripsi=program konversi integer ke string */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int angka;
    cout<<"masukkan angka integer=";
    cin>>angka;
    string str = to_string(angka);
    cout << "Integer " << angka << " diubah menjadi string:" << str << endl;

    return 0;
}