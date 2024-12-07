#include <iostream>
#include <string>
using namespace std;

//While Loop
/*
int main()
{
    string password = "Admin1234";
    string passin;

    
    while (true) 
    {
        cout << "Masukkan Password : ";
        cin >> passin;
            
    if (passin == password)
    {
        cout << "Password Yang anda Masukkan Benar"<< endl;
        break;
    } else
    {
       cout << "Password Yang anda Masukkan Salah masukkan kembali!!" << endl; 
    }
    
    }
    return 0;
}*/



//do while loop
/*
int main()
{
    int a;
    cout << "Masukkan Password : " << endl;
    cin >> a;

    do {
        cout << a << endl;
     a = a + 2;
    } while (a <= 20);
    if (a == 51678811)
    {
        cout << "Password Anda Benar";
    }else
    {
        cout << "Password Anda Salah";
    }
    
    
     
    
    return a;
}*/


//FOR LOOP
/*
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    for (j = 1; i <= 2; j++)
     {
    int k = 0;
        k = k + i + j;
        cout << k << " || "<< i << " || " << j << endl;
    
     }
    return 0;
}
*/
int main()
{
    string password = "Admin#1234";
    string nilaipass;
    int i;


    for (i = 1; i <= 3; i++)
    {
        
          cout << "Masukkan Password : ";
          cin >> nilaipass;
           
        if (nilaipass == password)
        {
            cout << "Password Anda Benar" << endl;
            break;

        }else
        {
            cout << "Password Anda Salah, Silahkan Coba lagi" << endl;
        }
       
        
    }
    

    return 0;
}

/*
int main()
{
    float a, b
    
    return 0;
}*/
/*
int main(){
 cout << "\033[31m"; 
    
     cout << "    *****     *****    " <<   endl;
      cout << "  ********* *********  " <<   endl;
      cout << " ********************* " <<   endl;
      cout << "  *******************  " <<   endl;
      cout << "    *****************   " <<   endl;
      cout << "      *************     " <<   endl;
      cout << "        *********       " <<   endl;
      cout << "          *****         " <<   endl;
      cout << "           ***          " <<   endl;
      cout << "            *           " <<   endl;

    // Reset warna ke default
      cout << "\033[0m"; 

    return 0;
}*/

// Operator Pembanding

// ==
// >
// <
// !=
// >=
// <=
/*
int main()
{
    int a;
    
    cout << "Masukkan Nilai A : ";
    cin >> a;

    
    if (a == 5)
    {
        cout << "Aldi" << endl;
    }else
    {
        cout << "Anda Tidak Memasukkan Angka 5" << endl;
    }
    
    

    

   
}*/
/*
int main (){

int a,b,c;
a = 12,
b = 13
c = a;
cout << "masukkan nilai :" << a << endl;
cin >> a;
cout << "masukkan nilai :" << b << endl;
cin >> b;

int c = a * b;

cout << "hasil = " << hasil << endl;

}*/





