#include <iostream>
using namespace std;

int main()
 {
    string nama, kendaraan;
    int lama_parkir;
    int biaya_parkir;


    cout << "====PROGRAM MENGHITUNG HARGA PARKIRAN====\n" << endl;
    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan Jenis Kendaraan (Mobil/Motor): ";
    cin >> kendaraan;
    cout << "Masukkan lama parkir (jam): ";
    cin >> lama_parkir;
					
    biaya_parkir = lama_parkir * (kendaraan == "Mobil" or kendaraan == "mobil" ? 5000 : 4000);

    cout << "\n=========================================" << endl;
    cout << "Nama Pemilik     : " << nama << endl;
    cout << "Jenis Kendaraan  : " << (kendaraan == "Mobil" or kendaraan == "mobil" ? "Mobil" : "Motor") << endl;
    cout << "Lama Parkir      : " << lama_parkir << " Jam" << endl;
    cout << "Harga Parkiran   : Rp " << biaya_parkir << endl;
    cout << "=========================================" << endl;

}
                                                                                                      
                                                                                                              

