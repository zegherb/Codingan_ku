#include <iostream>
using namespace std;

int main()
{
   float angka1, angka2, hasil;
   char kalkulator;

   cout << "Masukkan Angka Pertama : ";
   cin >> angka1;
   cout << "Masukkan Angka Kedua : ";
   cin >> angka2;
   cout << "Masukkan Operator (+, -, *, /) : ";
   cin >> kalkulator;

   if (kalkulator == '+')
   {
     hasil = angka1 + angka2;
     cout << angka1 << " + " << angka2 << " = " << hasil;
   }else if (kalkulator == '-')
   {
     hasil = angka1 - angka2;
     cout << angka1 << " - " << angka2 << " = " << hasil;
   }else if (kalkulator == '*')
   {
     hasil = angka1 * angka2;
     cout << angka1 << " * " << angka2 << " = " << hasil;
   }else if (kalkulator == '/')
   {
     hasil = angka1 / angka2;
     cout << angka1 << " / " << angka2 << " = " << hasil;
   }else
   {
    cout << "Operator ini tidak valid" << endl;
   }
   

}
