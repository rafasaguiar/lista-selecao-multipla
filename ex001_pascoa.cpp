#include <iostream>
using namespace std;
int main () {
    int ovos;
    float preco;
    char tipo;

    cout <<"Qual tipo de ovo de pascoa sera o escolhido?" << endl;
    cout <<"Digite P para pequeno, M para medio, G para grande ou S para super" << endl;
    cin >> tipo;
    cout <<"Quantas unidades serao compradas?" << endl;
    cin >> ovos;

    switch(tipo) {
        case 'p':
        case 'P':
        preco = ovos * 17.50;
        if (ovos <= 50 && ovos > 0) {
            cout <<"Comprando " << ovos << " ovos," << endl;
            cout <<"Sua compra custara o total de: " << preco << " reais " << endl;
        }
        else {
            cout <<"Nao sera possivel atender o pedido!";
        }
        break;

        case 'm':
        case 'M':
        preco = ovos * 28.00;
        if (ovos <= 30) {
            cout <<"Comprando " << ovos << " ovos," << endl;
            cout <<"Sua compra custara o total de: " << preco << " reais " << endl;
        }
        else {
            cout <<"Nao sera possivel atender o pedido!";
        }
        break;
    
        case 'g':
        case 'G':
        preco = ovos * 39.50;
        if (ovos <=20) {
            cout <<"Comprando " << ovos << " ovos," << endl;
            cout <<"Sua compra custara o total de: " << preco << " reais " << endl;
        }
        else {
            cout <<"Nao sera possivel atender o pedido!";
        }
        break;

        case 's':
        case 'S':
        preco = ovos * 47.80;
        if (ovos <= 10) {
            cout <<"Comprando " << ovos << " ovos," << endl;
            cout <<"Sua compra custara o total de: " << preco << " reais " << endl;
        }
        else {
            cout <<"Nao sera possivel atender o pedido!";
        }
        break;

        default:
        cout <<"Invalido!";
        break;
    
    }
return 0;
}