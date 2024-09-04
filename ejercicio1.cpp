#include<iostream>
using namespace std;

void msj()
{
    cout<<"BIENVENIDO A SU CALCULADORA"<<endl;
}
void sumar(int a, int b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
void restar(int a, int b)
{
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
void multiplicar(int a, int b)
{
    cout<<a<<"x"<<b<<"="<<a*b<<endl;
}
void dividir(int a, int b)
{
    cout<<a<<"/"<<b<<"="<<1.0*a/b<<endl;
}

int main()
{
    int op, a, b;
    cout<<"A:"; cin>>a;
    cout<<"B:"; cin>>b;
    bool salir=false;
    msj();
    do
    {
        cout<<"1. sumar"<<endl;
        cout<<"2. restar"<<endl;
        cout<<"3. multiplicar"<<endl;
        cout<<"4. dividir"<<endl;
        cout<<"5. salir"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:
                sumar(a, b);
                break;
            case 2:
                restar(a, b);
                break;
            case 3:
                multiplicar(a, b);
                break;
            case 4:
                dividir(a, b);
                break;
            case 5:
                salir=true;
                break;
            default:
                break;
        }

    } while (!salir);
    return 0;
    
    
}