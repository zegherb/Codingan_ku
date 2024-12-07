#include <iostream>
using namespace std;


int pangkat(int x){
    int y;
    y = x * x * x;
    return y;
}


int main()
{
    int a, hasil;
    while (true)
    {
      cout << "Masukkan nilai yang mau di pangkatkan 3 : ";
      cin >> a;

      hasil = pangkat(a) ;

      cout <<  a << " Pangkat 3 = "  << hasil << endl;
        
    }
    
    cin.get();
    return 0;
}

