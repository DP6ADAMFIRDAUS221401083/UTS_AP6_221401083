/*  Nama=Adam Muhammad Firdaus
    Nim=221401083
    Deskripsi=program kasir sederhana */
#include <iostream>

using namespace std;

int main()
{
    int jumlah_barang,harga_barang,diskon,total_harga = 0;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    for (int i = 1; i <= jumlah_barang; i++) {
        cout << "Masukkan harga barang ke-" << i << ": ";
        cin >> harga_barang;

        if (harga_barang < 0) {
            cout << "Harga barang tidak boleh negatif.\n";
            i--;
            continue;
        }

        total_harga += harga_barang;
    }

    cout << "Total harga: " << total_harga << endl;

    if (total_harga > 100000) {
        diskon = total_harga * 0.1;
        total_harga -= diskon;
        cout << "Anda mendapatkan diskon 10%:" << diskon << endl;
    }

    cout << "Total yang harus dibayar: " << total_harga << endl;

    return 0;
}