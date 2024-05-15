#include <iostream>
using namespace std;

int main()
{
    int tabuada = 1;
    int valor = 1;
    int numero;
    
    cout<<"Digite um número: ";
    cin >> numero;
    
    cout << "===========================================>\n";
    while (valor != 15) {
        if (tabuada == 1 and valor <= 10) {
            cout << numero << " + " << valor << " = " << (numero+valor) << endl;
            valor++;
        } else if (tabuada == 1) {
            cout << "===========================================>\n";
            tabuada = 2;
            valor = 1;
        }
        
        if (tabuada == 2 and valor <= 10) {
            cout << numero << " - " << valor << " = " << (numero-valor) << endl;
            valor++;
        } else if (tabuada == 2) {
            cout << "===========================================>\n";
            tabuada = 3;
            valor = 1;
        }
        
        if (tabuada == 3 and valor <= 10) {
            cout << numero << " * " << valor << " = " << (numero*valor) << endl;
            valor++;
        } else if (tabuada == 3) {
            cout << "===========================================>\n";
            tabuada = 4;
            valor = 1;
        }
        
        if (tabuada == 4 and valor <= 10) {
            cout << numero << " / " << valor << " = " << (numero/valor) << endl;
            valor++;
        } else if (tabuada == 4) {
            valor = 15;
        }
    }
    cout << "===========================================>";

    return 0;
}