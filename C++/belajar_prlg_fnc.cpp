#include <iostream>
using namespace std;

int main()
{
    string username = "Aj34";
    string password = "abogoboga";
    string passin, userin;
    int batas_login = 3;
    while (true)
    {
       cout << "Masukkan username : ";
       cin >> userin;
       cout << "Masukkan Password : ";
       cin  >> passin;

       if (userin == username and passin == password)
       {
        cout << "Anda Berhasil Masuk" << endl;
        break;
       }else
       {
        batas_login -= 1;
        cout << "Anda Salah Memasukkan Password atau Username sisa percobaan adalah " << batas_login << endl;
        
       }

       if (batas_login == 0)
       {
        cout << "Akun anda diblokir" << endl;
        break;
       }
  
    }
    return 0;
}
