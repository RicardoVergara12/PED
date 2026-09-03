#include<iostream>

/* Un sistema bancario almacena el saldo de una cuenta. Crea una funcion depositar()
que reciba mediante un puntero el saldo y una cantidad a depositar.

La función debe modificar directamente el saldo original.
*/
using namespace std;   

void depositar(float *saldo, float cantidad) {
    *saldo += cantidad;

}

int main() {
    float saldo = 1000.0; // Saldo inicial de la cuenta
    float cantidadDepositar = 500.0; // Cantidad a depositar

    cout << "Saldo inicial: " << saldo << endl;
    depositar(&saldo, cantidadDepositar);  
    cout << "Saldo despues del deposito: " << saldo << endl; /*El saldo total despues de
    hacer el deposito*/

    return 0;

}