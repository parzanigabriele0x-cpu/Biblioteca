//
// Created by matti on 21/04/2026.
//

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

const int RIGHE = 5;
const int COLONNE = 5;

void inizializzaLibri(int biblio[RIGHE][COLONNE]);
void visualizzaLibri(int biblio[RIGHE][COLONNE]);
void prestaLibro(int biblio[RIGHE][COLONNE]);
void restituisciLibro(int biblio[RIGHE][COLONNE]);
int contaDisponibili(int biblio[RIGHE][COLONNE]);
void trovaPrimoDisponibile(int biblio[RIGHE][COLONNE]);
#endif