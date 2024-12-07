#include <iostream>
using namespace std;

int main(){

     
    int baris_pertama, kolom_pertama, baris_kedua, kolom_kedua;
    cout << "Masukkan jumlah baris Matriks 1 : ";
    cin >> baris_pertama;
    cout << "Masukkan jumlah kolom Matriks 1 : ";
    cin >> kolom_pertama;
    cout << "Masukkan jumlah baris Matriks 2 : ";
    cin >> baris_kedua;
    cout << "Masukkan jumlah kolom Matriks 2 : ";
    cin >> kolom_kedua;

    if (baris_pertama > MAX || kolom_pertama > MAX || baris_kedua > MAX || kolom_kedua > MAX){
        cout << "Anda memasukkan batas maksimal yang ditentukan yaitu 10 x 10, silahkan coba lagi" << endl;

    }else if (kolom_pertama != baris_kedua)
    {
        cout << "Perkalian matriks tidak bisa dilakukan" << endl;
        cout << "Jumlah kolom matriks 1 harus sama dengan jumlah baris matriks 2" << endl;
    }else
    {
        int matriks_pertama[baris_pertama][MAX];
        int matriks_kedua[MAX][MAX];
        int hasilnya[MAX][MAX] = {0};
    
        cout << "Matriks 1 : " << endl;
        for (int i = 0; i < baris_pertama; i++)
        {
            for (int j = 0; j < kolom_pertama; j++)
            {
                cout << "Masukkan Baris " << i+1 << " Kolom " << j+1 << " : ";
                cin >> matriks_pertama[i][j];
            }
        }
        cout << "Matriks 2 : " << endl;
        for (int i = 0; i < baris_kedua; i++)
        {
            for (int j = 0; j < kolom_kedua; j++)
            {
                cout << "Masukkan Baris " << i+1 << " Kolom " << j+1 << " : ";
                cin >> matriks_kedua[i][j];
            }
        }
        cout << "\nMatriks 1" << endl;
        for (int i = 0; i < baris_pertama; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom_pertama; j++)
            {
                cout << matriks_pertama[i][j] << " ";
            }
            cout << "|" << endl;
        }
        cout << "\nMatriks 2" << endl;
        for (int i = 0; i < baris_kedua; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom_kedua; j++)
            {
                cout << matriks_kedua[i][j] << " ";
            }
            cout << "|" << endl;
        }
        for (int i = 0; i < baris_pertama; i++)
        {
            for (int j = 0; j < kolom_kedua; j++)
            {
                for (int k = 0; k < kolom_pertama; k++)
                {
                    hasilnya[i][j] += matriks_pertama[i][k]*matriks_kedua[k][j];
                }
            
            }    
        }
        cout << "\nHasil dari Perkalian Matriks 1 dan Matriks 2 adalah" << endl;
        for (int i = 0; i < baris_pertama; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom_kedua; j++)
            {
                cout << hasilnya[i][j] << " ";
            }
            cout << "|" << endl;
        }
    }
    return 0;
}



