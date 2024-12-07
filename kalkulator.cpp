#include <iostream>

using namespace std;

 int main()
 {
    float a, b, hasil;
    char kalkulator;

    cout << "=======KALKULATOR=======\n \n";
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cin.get();
    cout << "Masukkan Operator (+, -, /, *) : ";
    cin >> kalkulator;
    cin.get();
    cout << "Masukkan Angka Kedua : ";
    cin >> b;
    cin.get();

    switch (kalkulator)
    {
    case '+':
        hasil = a + b;
        cout << a << " + " << b << " = " << hasil << endl;
        break;
    
    case '-':
        hasil = a - b;
        cout << a << " - " << b << " = " << hasil << endl;
        break;

    case '/':
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;
    break;
    case '*':
        hasil = a * b;
        cout << a << " * " << b << " = " << hasil << endl;
        break;
    default:
    cout << "Operator Yang Anda Masukkan Salah" << endl;
        break;
    }

    /*if (kalkulator == '+')
    {
        hasil = a + b;
        cout << a << " + " << b <<" = "<< hasil << endl;
    }else if (kalkulator == '-'){
    
        hasil = a - b;
        cout << a << " - " << b <<" = "<< hasil << endl;
    }else if (kalkulator == '/'){
    
        hasil = a / b;
        cout << a << " / " << b <<" = "<< hasil << endl;
    }else if (kalkulator == '*'){
    
        hasil = a * b;
        cout << a << " * " << b <<" = "<< hasil << endl;
    }else
    {
        cout << "Operator Yang Anda Masukkan Salah" << endl;
    }*/
    cin.get();
    return 0;
 }
 