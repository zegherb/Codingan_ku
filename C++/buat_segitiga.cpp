#include <iostream>
using namespace std;

//segitiga sama kaki
int main()
{
    int a = 5;

    for (int i = 1; i <= a; i++){
        for (int j = a; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2*i-1); k++)
        {
            cout << i;
        
        }
        
        cout << endl;
    }
}  

    /*
    //segitiga siku siku
    for (int i = 1; i <= a; i++){
        for ( int j = 1; j <= i; j++){
        cout << "*";
        }
        cout << endl;
    }
    cout << "=======PEMBATAS========\n\n";
    //segitiga sama sisi
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}*/

