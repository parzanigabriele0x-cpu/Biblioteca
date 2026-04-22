//
// Created by matti on 21/04/2026.
//

#include <iostream>
#include "biblioteca.h"

using namespace std;

void inizializzaLibri(int biblio[RIGHE][COLONNE]) {
    cout << "Inserimento stato (0: disp, 1: prestito):" << endl;
    for(int i = 0; i < RIGHE; i++) {
        for(int j = 0; j < COLONNE; j++) {
            cout << "Libro [" << i << "][" << j << "]: ";
            cin >> biblio[i][j];
        }
    }
}

void visualizzaLibri(int biblio[RIGHE][COLONNE]) {
    cout << "\n--- MAPPA BIBLIOTECA (0=Libero, 1=Occupato) ---" << endl;
    for(int i = 0; i < RIGHE; i++) {
        for(int j = 0; j < COLONNE; j++) {
            cout << biblio[i][j] << "  ";
        }
        cout << endl;
    }
}

void prestaLibro(int biblio[RIGHE][COLONNE]) {
    int r, c;
    cout << "Inserisci Scaffale (riga 0-4) e Ripiano (colonna 0-4) del libro: ";
    cin >> r >> c;

    if(r < 0 || r >= RIGHE || c < 0 || c >= COLONNE) {
        cout << "Posizione non valida!" << endl;
    } else if(biblio[r][c] == 1) {
        cout << "Gia' in prestito!" << endl;
    } else {
        biblio[r][c] = 1;
        cout << "Prestito effettuato." << endl;
    }
}

void restituisciLibro(int biblio[RIGHE][COLONNE]) {
    int r, c;
    cout << "Inserisci Scaffale (riga 0-4) e Ripiano (colonna 0-4) da restituire: ";
    cin >> r >> c;

    if(r < 0 || r >= RIGHE || c < 0 || c >= COLONNE) {
        cout << "Posizione non valida!" << endl;
    } else if(biblio[r][c] == 0) {
        cout << "Il libro e' gia' in biblioteca!" << endl;
    } else {
        biblio[r][c] = 0;
        cout << "Restituzione effettuata." << endl;
    }
}

int contaDisponibili(int biblio[RIGHE][COLONNE]) {
    int cont = 0;
    for(int i = 0; i < RIGHE; i++) {
        for(int j = 0; j < COLONNE; j++) {
            if(biblio[i][j] == 0) cont++;
        }
    }
    return cont;
}

void trovaPrimoDisponibile(int biblio[RIGHE][COLONNE]) {
    for(int i = 0; i < RIGHE; i++) {
        for(int j = 0; j < COLONNE; j++) {
            if(biblio[i][j] == 0) {
                cout << "Primo disponibile in posizione: Scaffale " << i << ", Ripiano " << j << endl;
                return;
            }
        }
    }
    cout << "Nessun libro disponibile." << endl;
}