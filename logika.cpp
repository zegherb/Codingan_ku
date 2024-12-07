#include <iostream>
using namespace std;

int pangkat(int x){
    int y;
    y = x * x;
}

int main(int argc, char const *argv[])
{
    float angka1, angka2, hasil;
    char kalkulator;

    cout << "Masukkan Angka Pertama : "; cin >> angka1;
    cout << "Masukkan Angka Kedua : "; cin >> angka2;
    cout << "Masukkan Operator : "; cin >> kalkulator;

    switch (kalkulator)
    {
    case '+':
        hasil = angka1 + angka2;
        cout << angka1 << " + " << angka2 << " = " << hasil;
        break;
    case '-':
        hasil = angka1 - angka2;
        cout << angka1 << " - " << angka2 << " = " << hasil;
        break;
    case '*':
        hasil = angka1 * angka2;
        cout << angka1 << " * " << angka2 << " = " << hasil;
        break;
    case '/':
        hasil = angka1 / angka2;
        cout << angka1 << " / " << angka2 << " = " << hasil;
        break;
    case '^':
        hasil = pangkat(angka1 + angka2);
        cout << "("<< angka1 << " + " << angka2 << ")^2 "<< " = " << hasil;
        break;
    // case '%':
    //     hasil = angka1 % angka2;
    //     cout << angka1 << " % " << angka2 << " = " << hasil;
    //     break;
    default:
        cout << "Operator tidak valid" << endl;
        break;
    }

    return 0;
}
