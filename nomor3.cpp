/*  Nama=Adam Muhammad Firdaus
    Nim=221401083
    Deskripsi=program perulangan abjad dengan pola segitiga */
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    ulang:
    int n;
    char huruf = 'a';
    cout << "Masukkan angka: ";
    cin >> n;
    if(n>0 and n<=26){
        for (int i = n; i >= 1; i--) {
            /*digunakan untuk membuat perulangan pertama*/
            if (i == n) { 
                for (int j = 2; j <= i; j++) {
                    cout << huruf;
                    huruf++;
                }
                for (int j = 1; j <= i; j++) {
                    cout << huruf--;
                } 
            /*digunakan untuk membuat perulangan selain baris pertama*/
            } else {
                for (int j = 1; j <= i; j++) {
                    cout <<huruf;
                    huruf++;
                }
                huruf--;
                for (int j = 1; j <= (n - i) * 2 - 1 ; j++) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    cout <<huruf;
                    huruf--;
                }
            }
        huruf='a';
        cout << endl;
        }
    }
    else{
        cout<<"maaf angka anda salah!,mohon masukkan angka dengan rentang 1-26\n";
        goto ulang;
    }

    return 0;
}