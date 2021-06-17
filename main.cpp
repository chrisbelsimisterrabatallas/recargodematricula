#include <iostream>
//Se ingresa la edad de un estudiante. Si la edad es de 5 a 10 años, se hace
//un recargo del 1% al costo de la matricula. Si la edad es superior a 10 años
//y menor o igual que 15 año, el recargo sera del 2. Si la edad es mayor que
//15 y menor o igual que 20, el recargo es del 4%. S ila edad es superior
//a 20 años, el recargo es del 6%.
using namespace std;

int main() {
    int edad;
    double recargo=0, costoMatricula=0;

    cout<<"Ingresa la edad: ";
    cin>>edad;
    cout<<"Ingrese el costo de la matricula: ";

    if (edad <5)
        recargo=0;
    else if (edad<=10) //(edad>=5 && edad<=10)
        recargo=0.01;
    else if (edad<=15)    // (edad>10 && edad<=15)
        recargo=0.02;
    else if (edad<=20)    // (edad>15 && edad<=20)
        recargo=0.04;
    else                  // (edad>20)
        recargo=0.06;
    double rec = costoMatricula * recargo;
    double valorpagar= costoMatricula + rec;

    cout<<"Tu edad es de: "<<edad <<"años, tu recargo es: "<<rec<<endl;
    cout<<"Debes pagar en total: "<<valorpagar<<endl;


    return 0;
}
