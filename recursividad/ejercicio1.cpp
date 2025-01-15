#include <iostream>
using namespace std;
int potencia(int a, int b)
{
    if (b==0)
    return 1;
    else
    return a * potencia(a, b-1);
}
int multiplicacion(int a, int b)
{
    if (b==0)
    return 0;
    else
    return a + multiplicacion(a, b-1);
}
main()
{
    int a, b;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "La potencia de los numeros : "<<a<<" y "<<b<< " es: "<<potencia(a,b)<<endl;
    cout << "La multiplicacion de los numeros : "<<a<<" y "<<b<< " es: "<<multiplicacion(a,b);
}