#include <iostream>
using namespace std;

/* Saya pakai fungsi prototype biar saya bisa tentukan nama fungsinya, 
   dan parameter apa yang akan saya gunakan, sebelum saya definisikan
   fungsinya di bawah.
*/
void menu();
double diskon_pelanggan(double x, double y);
int menunya(int menu);

int main()
{
    double  rata_pembelian;
    int nomor_menu, jml_menu, jml_transaksi, harga , harga_biasa = 0;
    
    menu();
    cout << "\nJumlah transaksi : ";
    cin >> jml_transaksi;
    cout << "Rata-rata Pembelian : ";
    cin >> rata_pembelian;
    
    while (true)
    {
        cout << "Masukkan Nomor Menu (0 untuk berhenti) :";
        cin >> nomor_menu;
        if (nomor_menu == 0)
        {
            break;
        }else if (nomor_menu < 0 or nomor_menu > 5)
        {
            cout << "Input tidak valid";
            continue;
        }
        cout << "Masukkan Jumlah Menu : ";
        cin >> jml_menu;
        int $nomor_menu = menunya(nomor_menu);
        harga_biasa += $nomor_menu*jml_menu;  
    }
    harga = harga_biasa*(1-diskon_pelanggan(jml_transaksi, rata_pembelian));
    cout << "\nTotal Harga Sebelum Diskon : " << harga_biasa << endl;
    cout << "Diskon Yang Diberikan : " << diskon_pelanggan(jml_transaksi, rata_pembelian)*100 <<" %" << endl;
    cout << "Total Harga Setelah Diskon : " << harga << endl; 
}
void menu(){
    cout << "====MENU KEDAI KOPI====" << endl;
    cout << "1. Kopi Hitam\t: Rp. 10.000" << endl;
    cout << "2. Latte\t: Rp. 20.000" << endl;
    cout << "3. Capuccino\t: Rp. 25.000" << endl;
    cout << "4. Americano\t: Rp. 18.000" << endl;
    cout << "5. Es Kopi Susu\t: Rp. 15.000" << endl;
}
double diskon_pelanggan(double x, double y ){
    if (x >= 40 and y >= 2000000)
    {
        return 0.40;
    }else if (x >= 25  and y >= 1200000)
    {
        return 0.30;
    }else if (x >= 15 and y >= 600000)
    {
        return 0.20;   
    }else
    {
        return 0;
    }  
}
int menunya(int menu){
    switch (menu){
    case 1:
        return 10000;
    case 2:
        return 20000;
    case 3:
        return 25000;
    case 4:
        return 18000;
    case 5:
        return 15000;
    default: 
        return 0;
    }   
}
