#include <iostream>
using namespace std;

int main (){
    int nilai;
    cout << "Masukkan nilai Anda (0-100) : " ;
    cin >> nilai ;

    if (nilai >=90){
        cout << "Anda mendapat nilai A " << endl;
    }else if (nilai >=80){
        cout << "Anda mendapatkkan nilai B " << endl ;
    }else if (nilai >=70){
        cout << "Anda mendapatkan nilai C " << endl ;
    }else if (nilai >=60){
        cout << "Anda mendapatkan nilai D " << endl ;
    }else
    {
        cout << "Nilai tidak valid" << endl;
    }
    

    return 0 ;
}