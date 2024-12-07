#include <iostream>
using namespace std;

double pi = 3.14;

double luas_lingkaran(double r){
    return pi*r*r;
}

int main()
{
    double jari_jari;
    cout << "Masukkan Jari-Jari : ";
    cin >> jari_jari;

    cout << "Luas lingkaran adalah " << luas_lingkaran(jari_jari) << endl; 
}

