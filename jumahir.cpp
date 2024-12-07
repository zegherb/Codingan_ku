#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Masukkan Angka : ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " Adalah Bilangan Genap" << endl;
    }else
    {
        cout << a << " Adalah Bilangan Ganjil" << endl;
    }
    
    return 0;
}
