#include <iostream>
using namespace std;

struct daerah
{
    string provinsi;
    string kota;
    string kecamatan;
};

struct DataMahasiswa
{
    string nama;
    string nim;
    float nilai;

};

int main()
{
    int batas;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> batas;
    DataMahasiswa aldi[batas];
   for (int i = 0; i < batas; i++)
   {
    cout << "\nData Mahasiswa ke-" << i+1 << endl;
    cout << "Masukkan Nama Mahasiswa : ";
    cin >> aldi[i].nama;
    cout << "Masukkan NIM Mahasiswa : ";
    cin >> aldi[i].nim;
    cout << "Masukkan IPK : ";
    cin >> aldi[i].nilai;

   }
   for (int i = 0; i < batas; i++)
   {
     cout << "\nData Mahasiswa " << i+1 << endl;
     cout << "Nama  : " << aldi[i].nama << endl;
     cout << "NIM   : " << aldi[i].nim << endl;
     cout << "IPK : " << aldi[i].nilai << endl;
   }
   
   
    
    return 0;
}


