#include <iostream>
using namespace std;

int main()
{
    char kategori, buah, sayuran, daging;
    float banyak_buah, banyak_sayuran, banyak_daging;
    int harga;

    cout << "1. Buah\n2. Sayuran\n3. Daging\nMasukkan Kategori barang yang ingin anda beli : ";
    cin >> kategori;

    switch (kategori)
    {
    case '1':
        cout << "1. Apel (Rp10.000/kg)\n2. Pisang (Rp8.000/kg)\n3. Jeruk (Rp12.000/kg)\n\nMasukkan buah yang mau dipilih :";
        cin >> buah;
    switch (buah)
    {
    case '1':
        cout << "Berapa banyak apel yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_buah;

        harga = banyak_buah * 10000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '2':
        cout << "Berapa banyak pisang yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_buah;

        harga = banyak_buah * 8000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '3' :
        cout << "Berapa banyak jeruk yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_buah;

        harga = banyak_buah * 12000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    default:
        cout << "Pilihan tidak valid" <<endl;
        break;
    }
    break;

    case '2':
    cout << "1. Wortel (Rp5.000/kg)\n2. Brokoli (Rp7.000/kg)\n3. Bayam (Rp4.000/kg)\n\nMasukkan sayuran yang mau dipilih :";
    cin >> sayuran;
    switch (sayuran)
    {
    case '1':
        cout << "Berapa banyak wortel yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_sayuran;

        harga = banyak_sayuran * 5000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '2':
        cout << "Berapa banyak brokoli yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_sayuran;

        harga = banyak_sayuran * 7000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '3' :
        cout << "Berapa banyak bayam yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_sayuran;

        harga = banyak_sayuran * 4000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    default:
        cout << "Pilihan tidak valid" <<endl;
        break;
    }
    break;

    case '3':
    cout << "1. Ayam (Rp30.000/kg)\n2. Sapi (Rp80.000/kg)\n3. Kambing (Rp90.000/kg)\n\nMasukkan daging yang mau dipilih :";
    cin >> daging;
    switch (daging)
    {
    case '1':
        cout << "Berapa banyak daging ayam yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_daging;

        harga = banyak_daging * 30000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '2':
        cout << "Berapa banyak daging sapi yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_daging;

        harga = banyak_daging * 80000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    case '3' :
        cout << "Berapa banyak daging kambing yang ingin Anda beli (dalam kg) : ";
        cin >> banyak_daging;

        harga = banyak_daging * 90000;
        cout << "\nTotal biaya yang harus dibayar : Rp" << harga << endl;
        break;
    default:
        cout << "Pilihan tidak valid" <<endl;
        break;
    }
    break;

    default:
        cout << "Pilihan tidak valid" <<endl;
        break;
    }

    return 0;
}
