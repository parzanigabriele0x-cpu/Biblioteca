//
// Created by matti on 21/04/2026.
//

#include <iostream>
#include "biblioteca.h"

using namespace std;

void inizializzaLibri(int biblio[NUM_LIBRI][COLONNE]) {
    for(int i = 0; i < NUM_LIBRI; i++) {
        cout << "Stato libro " << i << " (0: disponibile, 1: in prestito): ";
        cin >> biblio[i][0];
    }
}

void visualizzaLibri(int biblio[NUM_LIBRI][COLONNE]) {
    cout << "\n--- STATO BIBLIOTECA ---" << endl;
    for(int i = 0; i < NUM_LIBRI; i++) {
        cout << "Libro " << i << ": ";
        if(biblio[i][0] == 0) cout << "Disponibile" << endl;
        else cout << "In prestito" << endl;
    }
}

void prestaLibro(int biblio[NUM_LIBRI][COLONNE]) {
    int indice;
    cout << "Inserisci l'indice del libro da prestare (0-3): ";
    cin >> indice;

    if(indice < 0 || indice >= NUM_LIBRI) {
        cout << "Errore: indice non valido!" << endl;
    } else if(biblio[indice][0] == 1) {
        cout << "Errore: Il libro e' gia' in prestito!" << endl;
    } else {
        biblio[indice][0] = 1;
        cout << "Prestito registrato correttamente." << endl;
    }
}

void restituisciLibro(int biblio[NUM_LIBRI][COLONNE]) {
    int indice;
    cout << "Inserisci l'indice del libro da restituire (0-3): ";
    cin >> indice;

    if(indice < 0 || indice >= NUM_LIBRI) {
        cout << "Errore: indice non valido!" << endl;
    } else if(biblio[indice][0] == 0) {
        cout << "Errore: Il libro e' gia' in biblioteca (disponibile)!" << endl;
    } else {
        biblio[indice][0] = 0;
        cout << "Restituzione registrata correttamente." << endl;
    }
}

int contaDisponibili(int biblio[NUM_LIBRI][COLONNE]) {
    int contatore = 0;
    for(int i = 0; i < NUM_LIBRI; i++) {
        if(biblio[i][0] == 0) {
            contatore++;
        }
    }
    return contatore;
}

int trovaPrimoDisponibile(int biblio[NUM_LIBRI][COLONNE]) {
    for(int i = 0; i < NUM_LIBRI; i++) {
        if(biblio[i][0] == 0) {
            return i;
        }
    }
    return -1; // Ritorna -1 se nessun libro è disponibile
}