#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 2, b = 5;

    for (int i = 1; i <= 10; i++)
    {
        a = a + b;
    }
    
    cout << a;
    return 0;
}
