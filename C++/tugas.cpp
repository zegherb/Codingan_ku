/*
#include <iostream>
using namespace std;

int main()
{
    string password = "Admin#1234";
    string passin;
    int i;
    for (i = 1; i <= 3 ; i++)
    {
        cout << "Masukkan Password : ";
        cin >> passin;
        if (passin == password)
        {
            cout << "Password anda benar" << endl;
            break;
        }
        else
        {
            cout << "Password anda salah" << endl;
        }      
    }
    return 0;
}*/

// ============================PROGRAM 2 FOR BERKALANG==================================

/*
#include <iostream>
using namespace std;
int main()
{
    int hasil;
    cout << "==========Perkalian 1-10================" << endl;
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++)
        {
            hasil = i * j;
            cout << i << " * " << j << " = " << hasil << endl;
        }
        cout << endl;
        
    }
    
    return 0;
}*/

/*
// While loop
#include <iostream>
using namespace std;

int main()
{
    string password = "Admin#1234";
    string passin;
    
    
    while (true)
    {
        cout << "Masukkan Password : ";
        cin >> passin;
        if (passin == password)
        {
            cout << "Password anda benar" << endl;
            break;
        }else
        {
            cout << "Password anda salah, silahkan coba lagi" << endl;
        }
           
    }
    
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    string password = "Admin#1234";
    string passin;
    do
    {
        
        cout << "Masukkan Password : ";
        cin >> passin; 
        if (passin == password)
        {
            cout << "Password anda benar" << endl;
            break;
        }else
        {
            cout << "Password anda salah, silahkan coba lagi" << endl;
        }
        
    } while (true);
    
    return 0;
}














