#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    cout << "Fila em alocacao sequencial" << endl;

    Fila<int> f(10);
    f.insere(5);
    cout<<"\n"<<f.primeiro();



    return 0;
}
