/* Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
Cantidad de conejos
Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de conejos vendidos.
Cuantos conejos quedaron de cada tipo.
Los tipos de conejos que no se vendieron.

NOTA: Ninguna venta superará los 10 conejos*/

#include <iostream>
using namespace std;

int main () {
     int cantidad, tipo, cantidadTotal=0;
     int cMar = 40, cBla = 45, cNeg = 50, cGri = 49;
     bool bNeg, bBla, bGri, bMar;
     bNeg = bBla = bGri = bMar = false;


     // venta #1
     cout << "Cantidad: ";
     cin >> cantidad;

     cout << "Tipo: ";
     cin >> tipo;

     cantidadTotal += cantidad;


     switch (tipo)
    {
    case 1:
        cBla -= cantidad;
        bBla = true;
        break;
    case 2:
        cMar -= cantidad;
        bMar = true;
        break;
    case 3:
        cNeg -= cantidad;
        bNeg = true;
        break;
    case 4:
        cGri -= cantidad;
        bGri = true;
        break;
    }

    // venta #2
     cout << "Cantidad: ";
     cin >> cantidad;

     cout << "Tipo: ";
     cin >> tipo;

     cantidadTotal += cantidad;

     switch (tipo)
    {
    case 1:
        cBla -= cantidad;
        bBla = true;
        break;
    case 2:
        cMar -= cantidad;
        bMar = true;
        break;
    case 3:
        cNeg -= cantidad;
        bNeg = true;
        break;
    case 4:
        cGri -= cantidad;
        bGri = true;
        break;
    }

    // venta #3
     cout << "Cantidad: ";
     cin >> cantidad;

     cout << "Tipo: ";
     cin >> tipo;

     cantidadTotal += cantidad;

     switch (tipo)
    {
    case 1:
        cBla -= cantidad;
        bBla = true;
        break;
    case 2:
        cMar -= cantidad;
        bMar = true;
        break;
    case 3:
        cNeg -= cantidad;
        bNeg = true;
        break;
    case 4:
        cGri -= cantidad;
        bGri = true;
        break;
    }

    // A

    cout << "Cantidad total de conejos venidos: " << cantidadTotal << endl;

    // B

    cout << "Cuantos conejos quedaron de cada tipo: " << endl;
    cout << " Blancos: " << cBla << endl;
    cout << "Negros: " << cNeg << endl;
    cout << "Marrones: " << cMar << endl;
    cout << "Grises: " << cGri << endl;

    //C

    if (bBla == false) {
        cout << "No se vendieron conejos blancos.";
    }

    if (bNeg == false) {
        cout << "No se vendieron conejos negros.";
    }

    if (bMar == false) {
        cout << "No se vendieron conejos marrones.";
    }

    if (cGri = false) {
        cout << "No se vendieron conejos grises.";

    }


return 0;


}
