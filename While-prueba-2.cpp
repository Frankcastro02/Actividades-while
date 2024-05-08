#include <iostream>

using namespace std;
int main()
{
    int i = 1 , Resultado = 0;
    while (i<13)
    {
        Resultado = i*12;
        cout << "12x" << i << "=" << Resultado << "\n";
        i++;
    }
    return 0;
}
//g++ If else numeros.cpp-0 primp