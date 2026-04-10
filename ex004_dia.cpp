#include <iostream>
using namespace std;
int main () {
    int dia;
    cout <<"Digite um numero (1 a 7) para um dia de semana: " << endl;
    cin >> dia;

    switch(dia) {

        case 1:
        cout <<"Domingo" << endl;
        break;

        case 2:
        cout <<"Segunda-feira" << endl;
        break;

        case 3:
        cout <<"Terca-feira" << endl;
        break;

        case 4:
        cout <<"Quarta-feira" << endl;
        break;

        case 5:
        cout <<"Quinta-feira" << endl;
        break;

        case 6:
        cout <<"Sexta-feira" << endl;
        break;

        case 7:
        cout <<"Sabado" << endl;
        break;

        default:
        cout <<"Invalido!" << endl;
        break;
    }

    if (dia >= 2 && dia <= 6) {
        cout <<"Dia util";
    }
    else if (dia == 1 || dia == 7) {
        cout <<"Fim de semana";
    } 
    else {
        cout <<"Invalido";
    }
    
return 0;
}