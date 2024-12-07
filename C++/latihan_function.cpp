// #include <iostream>
// using namespace std;

// double luas_lingkaran(double r){
//     double luas = 3.14 * r;
//     return luas;
// }

// double keliling_lingkaran(double r){
//     double keliling = 2*3.14*r;
//     return keliling;
// }

// void output_luas(double r){
//     cout << "Luas lingkaran adalah " << luas_lingkaran(r) << endl;
// }

// void output_keliling(double r){
//     cout << "Keliling lingkaran adalah " << keliling_lingkaran(r) << endl;
// }

// int main()
// {
//     double jari2;

//     cout << "Masukkan Jari-Jari : ";
//     cin >> jari2;

//     output_luas(jari2);
//     output_keliling(jari2);

//     return 0;
// }

//Faktorial
#include <iostream>
#include <cmath>
using namespace std;

int faktorial(int a){
    if (a == 0)
    {
        return 1;
    }else
    {
       return a*faktorial(a-1); 
    }
    
}

void tampilkan_faktorial(int a){

    cout << "Faktorial dari " << a << " adalah " << faktorial(a) << endl;
}

int main(int argc, char const *argv[])
{
    int frt;
    cout << "Masukkan Nilai faktorial : ";cin >> frt;

    tampilkan_faktorial(frt);
    return 0;
}
