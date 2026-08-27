#include<iostream>

//Hacer una calculadora que haga las 4 operaciones basicas, suma, resta, multiplicacion y division.

using namespace std;   

int main(){

int num1, num2;
int operacion;



cout << "Ingrese el primer numero: ";
cin>>num1;

cout << "Ingrese el segundo numero: ";
cin>>num2;

cout << "Ingrese la operacion a realizar : "<<endl;
cout<<"1.Suma :"<<endl;
cout<<"2.Resta :"<<endl;
cout<<"3.Multiplicacion :"<<endl;
cout<<"Division :"<<endl;
cin>>operacion;

switch(operacion){
    case 1:
        cout<<"El resultado de la suma es: "<<num1+num2<<endl;
        break;
    case 2:
        cout<<"El resultado de la resta es: "<<num1-num2<<endl;
        break;
   
    default:
        cout<<"Operacion no valida"<<endl;








}

return 0;

}