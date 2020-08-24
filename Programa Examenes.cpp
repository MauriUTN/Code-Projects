/*
CANTIDAD DE NOTAS MODIFICABLE A PEDIDO DEL CLIENTE*/


#include <iostream>
using namespace std;

int main () {
     float nota1, nota2, nota3, nota4;

     cout << "Inserte la primera nota:" << endl;
     cin >> nota1;
     cout << "Inserte la segunda nota: " << endl;
     cin >>  nota2;
     cout << "Inserte la tercera nota: " << endl;
     cin >> nota3;
     cout << "Inserte la cuarta nota: " << endl;
     cin >> nota4;

     if (nota1 >= 7 && nota2 >=7 && nota3 >= 7 && nota4 >= 7){
        cout << "Promociona la materia.";
     }
     else{
        if (nota1>=4&&nota2>=4&&nota3>=4||nota1>=4&&nota2>=4&&nota4>=4||nota2>=4&&nota3>=4&&nota4>=4||nota1>=5&&nota3>=4&&nota4>=4){
            cout << "Rinde examen final.";
        }
     else {
        if (nota1>=4 || nota2>=4|| nota3>=4||nota4>=4){
            cout << "Recupera Parciales.";
        }
        else{
            cout << "Recursa la materia.";
        }
        }
        }
        return 0;}
