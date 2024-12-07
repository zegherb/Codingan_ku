#include <iostream>
using namespace std;

void output_matriksnya(int matriks[3][3]){
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << "|" << endl;
    }
}
void perkalian_matriks(const int x[3][3], int y[3][3], int z[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            z[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                z[i][j] += x[i][k] * y[k][j];
            }
        }  
    }

}
void input_matriksnya(int matriks[3][3], string matriksnya){
    cout << "Masukkan elemen untuk " << matriksnya << "3*3 :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan Baris " << i+1 << " Kolom " << j+1 << " : ";
            cin >> matriks[i][j];
        }
    }
}
int main()
{
    int matriks1[3][3];                    
    int matriks2[3][3];
    int hasil_matriks[3][3];

    input_matriksnya(matriks1, "Matriks 1 : ");
    input_matriksnya(matriks2, "Matriks 2 : ");

    perkalian_matriks(matriks1, matriks2, hasil_matriks);

    cout << "Matriks 1" << endl;
    output_matriksnya(matriks1);
    
    cout << "\nMatriks 2" << endl;
    output_matriksnya(matriks2);

    cout << "\nHasil Perkalian Matriks 1 dan Matriks 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil_matriks[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                hasil_matriks[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }  
    }

}