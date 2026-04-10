#include <iostream>
using namespace std;
int main () {
    float frequencia;
    cout <<"Digite aqui, em %, a sua frequencia no semestre: ";
    cin >> frequencia;

    if (frequencia < 75.00) {
        cout << "Reprovado por falta!" << endl;
    }
    else {
        float n1, n2, n3, pf, media;
        cout <<"Digite aqui a nota da primeira prova: " << endl;
        cin >> n1;
        cout <<"Digite aqui a nota da segunda prova: " << endl;
        cin >> n2;
        cout <<"Digite aqui a nota da terceira prova: " << endl;
        cin >> n3;
        media = (n1 + n2 + n3) / 3.00;
        if (media >= 7.00) {
            cout <<"Sua media sera: " << media << endl;
        }
        else if (media >= 2.85 && media < 7.00) {
            pf = 7.0 - media;
            cout <<"Voce precisara fazer prova final. A nota minima para passar sera: " << pf << endl;
        }
        else {
            cout <<"Reprovado!" << endl;
        }
    }
return 0;
}