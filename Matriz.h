
#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class Matriz {
public:
    Matriz();
    void maxnum();
    void PrinDiag();
    void SeconDiag();
    void preenMatriz();
    void sumMatriz();

private:
    int n;
    int matriz[4][4]{};
    int matriz1 [2][2]{},matriz2 [2][2]{}, matriz3[n][n]{};
};



#endif
