#include <iostream>
using namespace std;
float gravedad =9.8;
void funcion1(int a){
    float gravedad =10.8;
    cout << "Gravedad en funcion1: "<< gravedad << endl;
    cout << "Gravedad global: " << ::gravedad << endl;
    cout << "A: " << a << endl;

}
void funcion2(float x){

}
main()
{
    int num1 =10;
    float num2 =20.5;
    {
        char letra = 'A';
    }
}