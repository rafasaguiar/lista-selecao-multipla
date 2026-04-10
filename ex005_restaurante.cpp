#include <iostream>
using namespace std;
int main () {
    int prato;
    cout <<"Confira o cardapio do restaurante: " << endl;
    cout <<"1: Feijoada" << endl;
    cout <<"2: Macarronada" << endl;
    cout <<"3: Galinha caipira" << endl;
    cout <<"4: Carne de sol" << endl;
    cout <<"Digite aqui o numero referente ao prato escolhido: " << endl;
    cin >> prato;

    switch(prato) {
        case 1:
        cout <<"Prato escolhido: Feijoada" << endl;
        cout <<"Valor: R$ 25,00" << endl;
        break;

        case 2:
        cout <<"Prato escolhido: Macarronada" << endl;
        cout <<"Valor: R$ 15,00" << endl;
        break;

        case 3:
        cout <<"Prato escolhido: Galinha Caipira" << endl;
        cout <<"Valor: R$ 30,00" << endl;
        break;

        case 4:
        cout <<"Prato escolhido: Carne de Sol" << endl;
        cout <<"Valor: R$ 30,00" << endl;
        break;

        default:
        cout <<"Invalido!";
        break;
    }
return 0;    
}