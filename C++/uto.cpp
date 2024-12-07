#include <iostream>
using namespace std;

int main(){

    int baris1, kolom1, baris2, kolom2;
    cout << "Masukkan jumlah baris Matriks 1 : ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom Matriks 1 : ";
    cin >> kolom1;
    cout << "Masukkan jumlah baris Matriks 2 : ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom Matriks 2 : ";
    cin >> kolom2;

   
        int matriks1[baris1][kolom1];
        int matriks2[baris2][kolom2];
        int hasil_matriks[baris1][kolom2] = {0};
    
        cout << "Matriks 1 : " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << "Masukkan Baris " << i+1 << " Kolom " << j+1 << " : ";
                cin >> matriks1[i][j];
            }
        }
        cout << "Matriks 2 : " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                cout << "Masukkan Baris " << i+1 << " Kolom " << j+1 << " : ";
                cin >> matriks2[i][j];
            }
        }
        cout << "\nMatriks 1" << endl;
        for (int i = 0; i < baris1; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom1; j++)
            {
                cout << matriks1[i][j] << " ";
            }
            cout << "|" << endl;
        }
        cout << "\nMatriks 2" << endl;
        for (int i = 0; i < baris2; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom2; j++)
            {
                cout << matriks2[i][j] << " ";
            }
            cout << "|" << endl;
        }
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                for (int k = 0; k < kolom1; k++)
                {
                    hasil_matriks[i][j] += matriks1[i][k]*matriks2[k][j];
                }
            
            }    
        }
        cout << "\nHasil dari Perkalian Matriks 1 dan Matriks 2 adalah" << endl;
        for (int i = 0; i < baris1; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom2; j++)
            {
                cout << hasil_matriks[i][j] << " ";
            }
            cout << "|" << endl;
        }
    }




