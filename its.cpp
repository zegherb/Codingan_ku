#include <iostream>
#include <array>
using namespace std;


// int rata_rata(int jumlah, int panjang);
// int main()
// {
//     int ukuran_array;
//     float hasil = 0, hasil_rata;
//     cout << "Masukkan Ukuran array : ";
//     cin >> ukuran_array;
    
    
//     float array[ukuran_array];
//     for ( int i = 0; i < ukuran_array; i++)
//     {
//         cout << "Masukkan Data ke - " << i + 1 << " : ";
//         cin >> array[i];
//     }
//     cout << endl;
//     for (int i = 0; i < ukuran_array; i++)
//     {
//         cout << "Elemem ke -" << i + 1 << " : " << array[i] << endl;
//         hasil += array[i];
        
//     }
//         hasil_rata = hasil/ukuran_array;
//         cout << "Jumlah semua elemen : " << hasil << endl;
//         cout << "Rata-ratanya : "<< hasil_rata << endl;
    
//     return 0;
// }
// int rata_rata(int jumlah, int panjang){
//     return jumlah/panjang;
// }

// int main()
// {
//     int arr[3][2] = {{1,2},
//                      {3,4},
//                      {5,6}};
    

//     for (int i = 0; i < 3 ; i++){
//         for (int j = 0; j < 2; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
    

                    
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom;

    
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    int arr[baris][kolom];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan data untuk baris " << i + 1 << ", kolom " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


