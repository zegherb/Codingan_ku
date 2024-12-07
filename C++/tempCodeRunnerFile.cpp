#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string nama;
    string nim;
    int a, b, hasil1, hasil2;

    cout << "Masukkan Nama : ";
    getline (cin, nama);
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << endl;
    cout << "Masukkan Angka Untuk Variabel A : ";
    cin >> a;
    cout << "Masukkan Angka Untuk Variabel B :";
    cin >> b;

    hasil1 = a + b;
    hasil2 = a - b;

    cout << endl;
    cout << "Nama yang di inputkan : " << nama << endl;
    cout << "NIM yang di inputkan  : " << nim << endl;
    cout << endl;
    cout << "Hasil dari " << a << " + " << b << " = " << hasil1 << endl;
    cout << "Hasil dari " << a << " - " << b << " = " << hasil2 << endl;

    return 0;
}
