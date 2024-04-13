#include <iostream>
#include <string>
#include "Coda.cpp"
#include "UfficioPostale.cpp"

using namespace std;

int main() {
    bool valido = true;
    char risposta;

    while (valido) {
        cout << "Benvenuto in Poste Italiane\n" << endl;
        cout << "Seleziona servizio [1-3]: " << endl;
        cout << "1. Spedizione (s)" << endl;
        cout << "2. Ricezione (r)" << endl;
        cout << "3. Finanzarie (f)" << "\n:";
        int scelta;
        cin >> scelta;

        switch (scelta) {
        case 1:
            UfficioPostale("spedizione");
            break;
        case 2:
            UfficioPostale("ricezione");
            break;
        case 3:
            UfficioPostale("finanzarie");
            break;
        default:
            cout << "Servizio non disponibile" << endl;
            valido = false;
            break;
        }
        cout << "Vuoi continuare? [s/n]: ";
        cin >> risposta;
        if (risposta == 'n') {
            valido = false;
        }
    }
    return 0;
}