#include <iostream>
using namespace std;

//fungsi prototype
int pangkat(int x);
int faktorial(int a);
void output_angka(int x);
void output_faktorial(int a);

//fungsi utama
int main()
{
    int pilih, ftr, pngkt;
    char pilihan;

    while (true)
    {

        cout << "Operasi  Matematika \n1. Faktorial\n2. Pangkat" << endl;
        cout << "Pilih Operasi Matermatika : ";
        cin >> pilih;

        if (pilih == 1)
        {
           cout << "Masukkan nilai faktorial : " ;
           cin >> ftr;
           faktorial(ftr);
           output_faktorial(ftr);

        }else if (pilih == 2)
        {
           cout << "Masukkan nilai yang mau dipangkatkan : " ;
           cin >> pngkt;
           pangkat(pngkt);
           output_angka(pngkt);  
        }else
        {
            cout << "Pilihan Tidak Valid" << endl;
        }
        
        
       cout << endl;
       cout << "Ingin Mengulang ? (y/n) ";
       cin >> pilihan;

       if (pilihan == 'y' or pilihan == 'Y' )
       {
          continue;
       }else if (pilihan == 'n' or pilihan == 'N' )
       {
          break;
       }else
       {
        cout << "Pilihan tidak valid" << endl;
        break;
       }
        
    }
    

    return 0;
}

int faktorial(int a){
    if (a == 0)
    {
        return 1;
    }else
    {
        return a*faktorial(a-1);
    }
}

int pangkat(int x){
    int hasil = x * x;
    return hasil;
}

void output_faktorial(int a){
    cout << "Hasil dari faktorial " << a << " = " << faktorial(a) << endl;
}

void output_angka(int x){
    cout << "Hasil dari " << x << " Pangkat 2 = " << pangkat(x) << endl;
}