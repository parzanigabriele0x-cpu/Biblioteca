#include <iostream>
#include "biblioteca.h"

using namespace std;

int main() {
    int biblioteca[RIGHE][COLONNE];
    int scelta;
    bool datiCaricati = false;

    do {
        cout << "\n=== MENU BIBLIOTECA ===" << endl;
        cout << "1. Inserire stato iniziale" << endl;
        cout << "2. Visualizzare mappa biblioteca" << endl;
        cout << "3. Prestare un libro" << endl;
        cout << "4. Restituire un libro" << endl;
        cout << "5. Contare disponibili" << endl;
        cout << "6. Trovare il primo disponibile" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta != 1 && scelta != 0 && !datiCaricati) {
            cout << "Errore: Inserisci pirma i dati dei libri (Opzione 1)!" << endl;
            continue;
        }

        switch(scelta) {
            case 1: inizializzaLibri(biblioteca); datiCaricati = true; break;
            case 2: visualizzaLibri(biblioteca); break;
            case 3: prestaLibro(biblioteca); break;
            case 4: restituisciLibro(biblioteca); break;
            case 5: cout << "Totale disponibili: " << contaDisponibili(biblioteca) << "/25" << endl; break;
            case 6: trovaPrimoDisponibile(biblioteca); break;
        }
    } while(scelta != 0);

    return 0;
}