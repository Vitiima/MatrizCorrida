#include "Matriz.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Matriz::Matriz() {
    matriz;
    matriz1;
    matriz2;
    matriz3;
    srand(time(0));
}

void Matriz::maxnum() {
    int maxnum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (maxnum < matriz[i][j]) {
                maxnum = matriz[i][j];
            }
        }
    }
    cout << "O Maior Valor da Matriz é: " << maxnum << endl;
}

void Matriz::preenMatriz() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

void Matriz::sumMatriz() {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum+matriz1[i][j];
        }
    }
    cout << "A Soma De Todos os Valores Da Matriz" << sum <<endl;
}

void Matriz::PrinDiag() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
            matriz2[i][j] = 1;
        }
            if (i != j) {
                matriz2[i][j] = 0;
            }
            cout << matriz2[i][j]<<endl;
        }
    }
}

void Matriz::SeconDiag() {
    cout <<"diga o tamanho da matriz, ELA SEMPRE SERA QUADRADA" << endl <<"Caso Escola digite 5 será uma 5x5" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
                matriz3[i][n - 1 - j] = 1;
        }
    }
}



