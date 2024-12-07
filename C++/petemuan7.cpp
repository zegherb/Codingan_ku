#include <iostream>
using namespace std;

int main()
{
    
    int a = 5;

    for ( int i = 1; i < a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << " ";
            
        }for (int k = 0; k < i; k++)
            {
                cout << "*";
            }
        cout << endl;
    }
    cout << "========Pembatas======" << endl;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    cout << "=====Pembatas====" << endl;
    for (int i = 1; i <= a ; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
       for (int k = a; k >= i; k--)
        {
            cout << "*";
        } 
    }
    cout << endl;
    cout << "====Pembatas====" << endl;
    for ( int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
            
        }for (int k = i; k <= a; k++)
            {
                cout << "*";
            }
        cout << endl;
    }
    
 
}
