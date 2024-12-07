#include <iostream>
using namespace std;
float celcius, reamur, kelvin;

int main(){
    float fahrenheit;
    cout << "===== PROGRAM KONVERSI SUHU =====" << endl << endl;
    cout << "masukkan suhu fahrenheit : ";
    cin >> fahrenheit;

    celcius = (fahrenheit - 32) * 5 / 9;
    reamur = (fahrenheit + 32) * 4 / 9;
    kelvin = (fahrenheit - 32) * 5 / 9 + 273;

    cout << "Hasil  konversi Suhu Fahrenheit ke Celcius : " << celcius << endl;
    cout << "Hasil Konversi Suhu Fahrenheit ke Reamur : " << reamur << endl;
    cout << "Hasil Konversi Suhu Fahrenheit ke Kelvin : " << kelvin << endl;
    return 0;

}