#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int numero, resto;
    cout <<"Digite um numero para dividir por 5 e veja se a divisao e perfeita ou nao" << endl;
    cin >> numero;
    resto = numero % 5;

    switch(resto) {
        case 0:
        cout <<"Divisao perfeita! Resto = 0";
        break;

        case 1:
        cout <<"Divisao com resto = 1";
        break;

        case 2:
        cout <<"Divisao com resto = 2";
        break;

        case 3:
        cout <<"Divisao com resto = 3";
        break;

        case 4:
        cout <<"Divisao com resto = 4";
        break;

        default:
        cout <<"Invalido!";
        break;
    }
}
