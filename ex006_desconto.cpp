#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main () {
    float preco, precofinal;
    string cor;
    for (char &c : cor) {
    c = tolower(c);
    }
    cout <<"Digite aqui o preco atual do produto: " << endl;
    cin >> preco;

    if (preco < 0.00) {
        cout <<"Preco invalido!";
    }
    else {
    cout <<"Digite a cor da etiqueta (azul, verde, amarela, vermelha, laranja): " << endl;
    cin >> cor;

    if (cor == "azul") {
        precofinal = preco * 0.90;
        cout <<"O preco final do seu produto, com 10% de desconto sera: " << precofinal << " reais. " << endl;
    }
    else if (cor == "verde"){
        precofinal = preco * 0.80;
        cout <<"O preco final do seu produto, com 20% de desconto sera: " << precofinal << " reais. " << endl;
    }
    else if (cor == "amarelo" || cor == "amarela") {
        precofinal = preco * 0.70;
        cout <<"O preco final do seu produto, com 30% de desconto sera: " << precofinal << " reais. " << endl;
    }
    else if (cor == "vermelho" || cor == "vermelha") {
        precofinal = preco * 0.60;
        cout <<"O preco final do seu produto, com 40% de desconto, sera: " << precofinal << " reais. " << endl;
    }
    else if (cor == "laranja") {
        precofinal = preco * 0.50;
        cout <<"O preco final do seu produto, com 50% de desconto, sera: " << precofinal << " reais. " << endl;
    }
    else {
        cout <<"Cor informada invalida!";
    }
}
}