#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Masukkan Angka : ";
    cin >> a;

    if (a > 0)
    {
        cout << "Angka ini positif" << endl;
    }else if (a < 0)
    {
        cout << "Angka ini negatif" << endl;
    }else if (a == 0)
    {
        cout << "Angka ini nol" << endl;
    }else
    {
        cout << "angka tidak valid" << endl;
    }
    
    
    
    return 0;
}
