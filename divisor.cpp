#include <iostream>
using namespace std;
int main()
{
    int a = 0, resultado = 0, acum = 1, lim = 0;
    cout << "Ingrese el número delñ que quiere conocer sus divisores";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            cout << "{" << i << "}";
            acum++;
            lim++;
            if(lim == 10)
            {
                cout << "\n";
                lim = 0;
            }
        }
    }
}