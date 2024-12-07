#include <iostream>
using namespace std;

// // int main()
// // {
// //     int a = -1;
// //     int b = -2;
// //     cout << "\n Ini While" << endl;
// //     while (a > -100)
// //     {
// //         cout << a << endl;
// //         a-= 2;
// //     }
// //     cout << "\n Ini Do While" << endl;
// //     do{
// //      cout << b << endl;
// //      b-= 2;
        
// //     }while (b >= -100);
// //     return 0;
// // }

// int main()
// {
//     int hasil;
//     int a;
//     char pilihan;
//     do{
//         cout << "Masukkan angka untuk tabel perkalian";
//         cin >> a;
//         for (int i = 1; i <= 10; i++){
//         hasil = i * a;
//         cout << i << " * " << a << " = " << hasil << endl;
//         }
//             cout << "Ingin mengulang lagi? (y/n) "  ;
//             cin >> pilihan; 
//     }while (pilihan == 'y' or pilihan == 'Y');

    
    
//     return 0;
// }

int main()
{


    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            cout << i << "||" << j << endl;
        }
        
    }
    
    return 0;
}
