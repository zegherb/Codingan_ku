#include <iostream>
using namespace std;

int main()
{
    int n, fn, fn_1 = 1, fn_2 = 0;
    cout << "INI ADALAH DERET FIBONANCI\n\n";

    cout << "Masukkan deret nilai ke-n :";
    cin >> n;

    
     for (int i = 1; i <= n ; i++)
     {
        fn = fn_1 + fn_2;
        fn_1 = fn_2;
        fn_2 = fn;
        cout << fn << " ";
     }
     
    return 0;
}
