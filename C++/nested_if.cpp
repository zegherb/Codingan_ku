#include <iostream>
using namespace std;

int main()
{
    string kamar, pilihan, member, nama;
    int malam, biaya, total_biaya;

    cout << "Masukkan Nama Anda : ";
    getline(cin, nama);
    cout << "Masukkan jenis Kamar (classic, superior, presiden) : ";
    cin  >> kamar;
    cout << "Masukkan Jumlah hari menginap : ";
    cin >> malam;

    if (kamar == "classic")
    {
        cout << "Apakah ada membership (y/n) : ";
        cin >> pilihan;
        biaya = malam*300000;

        if (pilihan == "y" or pilihan == "Y")
        {
          cout << "Masukkan Jenis Member anda (gold, silver, bronze) : ";
          cin >> member;
          if (member == "bronze")
          {
            total_biaya = biaya*0.05;
          }else if (member == "silver")
          {
            total_biaya = biaya*0.10;
          }else if (member == "gold")
          {
            total_biaya = biaya*0.15;
          }
     
        }else if (pilihan == "n" or pilihan == "N")
        {
            total_biaya = biaya;
            member = "Anda Tidak Membership";
        }
        
    }else if (kamar == "superior")
    {
        biaya = malam*500000;
        cout << "Apakah ada membership (y/n) : ";
        cin >> pilihan;

        if (pilihan == "y" or pilihan == "Y")
        {
          cout << "Masukkan Jenis Member anda (gold, silver, bronze) : ";
          cin >> member;
          if (member == "bronze")
          {
            total_biaya = biaya*0.05;
          }else if (member == "silver")
          {
            total_biaya = biaya*0.10;
          }else if (member == "gold")
          {
            total_biaya = biaya*0.15;
          }
     
        }else if (pilihan == "n" or pilihan == "N")
        {
            total_biaya = biaya;
            member = "Anda Tidak Membership";
        }
    
    }else if (kamar == "presiden")
    {
        biaya = malam*1000000;
        cout << "Apakah ada membership (y/n) : ";
        cin >> pilihan;

        if (pilihan == "y" or pilihan == "Y")
        {
          cout << "Masukkan Jenis Member anda (gold, silver, bronze) : ";
          cin >> member;
          if (member == "bronze")
          {
            total_biaya = biaya*0.05;
          }else if (member == "silver")
          {
            total_biaya = biaya*0.10;
          }else if (member == "gold")
          {
            total_biaya = biaya*0.15;
          }
     
        }else if (pilihan == "n" or pilihan == "N")
        {
            total_biaya = biaya;
            member = "Anda Tidak Membership";
        }
    }else
    {
        cout << "Perintah Tidak Valid" << endl;
        abort();
        }
     cout << "=====HOTEL DE LUNA=====" << endl;
     cout << "Nama                 : "  << nama << endl;
     cout << "Jenis Kamar          : " << kamar << endl;
     cout << "Jumlah Hari Menginap : " << malam <<" Hari" << endl;
     cout << "Membership           : " << member << endl;
     cout << "Total Biaya          : Rp" << total_biaya << endl;
    return 0;
}


