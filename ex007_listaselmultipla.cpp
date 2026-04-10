#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char op;    
    cout << "Digite o primeiro numero inteiro, a operacao (+, -, *, /, %) e o segundo numero inteiro: ";
    cin >> n1 >> op >> n2;

    switch(op) {
    case '+':
        cout << "Resultado: " << n1 + n2 << endl;
    break;

    case '-':
        cout << "Resultado: " << n1 - n2 << endl;
    break;

    case '*':
        cout <<"Resultado: " << n1 * n2 << endl;
    break;

    case '/':
    if (n2 != 0) {
        cout <<"Resultado: " << n1 / n2 << endl;
    }
    else {
        cout <<"Operacao invalida!";
    }
    break;

    case '%':
    if (n2 != 0) {
        cout <<"Resultado: " << n1 % n2 << endl;
    }
    else {
        cout <<"Operacao invalida!";
    }
    break;

    default:
        cout <<"Invalido!" << endl;
    break;
    }
return 0;
}