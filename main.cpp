#include <iostream>
#include "biblioteca.h"

using namespace std;

int main() {
    int biblioteca[NUM_LIBRI][COLONNE];
    int scelta;
    bool datiCaricati = false; // Per evitare l'uso di dati non inizializzati

    do {
        cout << "\n=== MENU BIBLIOTECA ===" << endl;
        cout << "1. Inserire stato iniziale" << endl;
        cout << "2. Visualizzare tutti i libri" << endl;
        cout << "3. Prestare un libro" << endl;
        cout << "4. Restituire un libro" << endl;
        cout << "5. Contare i libri disponibili" << endl;
        cout << "6. Trovare il primo disponibile" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta != 1 && scelta != 0 && !datiCaricati) {
            cout << "Avviso: Devi prima inserire i dati iniziali (Opzione 1)!" << endl;
            continue;
        }

        switch(scelta) {
            case 1:
                inizializzaLibri(biblioteca);
                datiCaricati = true;
                break;
            case 2:
                visualizzaLibri(biblioteca);
                break;
            case 3:
                prestaLibro(biblioteca);
                break;
            case 4:
                restituisciLibro(biblioteca);
                break;
            case 5:
                cout << "Libri attualmente disponibili: " << contaDisponibili(biblioteca) << endl;
                break;
            case 6:
                int pos;
                pos = trovaPrimoDisponibile(biblioteca);
                if(pos != -1) cout << "Il primo libro libero si trova all'indice: " << pos << endl;
                else cout << "Nessun libro disponibile al momento." << endl;
                break;
            case 0:
                cout << "Chiusura programma..." << endl;
                break;
            default:
                cout << "Opzione non valida!" << endl;
        }
    } while(scelta != 0);

    return 0;
}