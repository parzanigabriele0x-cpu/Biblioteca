//
// Created by matti on 21/04/2026.
//

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

// Costanti per la dimensione della matrice
const int NUM_LIBRI = 4;
const int COLONNE = 1;

// Prototipi delle funzioni
void inizializzaLibri(int biblio[NUM_LIBRI][COLONNE]);
void visualizzaLibri(int biblio[NUM_LIBRI][COLONNE]);
void prestaLibro(int biblio[NUM_LIBRI][COLONNE]);
void restituisciLibro(int biblio[NUM_LIBRI][COLONNE]);
int contaDisponibili(int biblio[NUM_LIBRI][COLONNE]);
int trovaPrimoDisponibile(int biblio[NUM_LIBRI][COLONNE]);

#endif