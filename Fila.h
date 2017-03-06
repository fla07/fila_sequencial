#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template<typename tipo>
struct Fila{
    int fim;
    unsigned inic, size, qtde;
    tipo *vetor;
    Fila(unsigned int tam);
    void insere(tipo x);
    tipo remove();
    tipo primeiro();
    bool filacheia();
    bool filavazia();
    int getfim();
    unsigned int getqtde();
    unsigned int getsize();
    unsigned int getinic();
    tipo getvalor(unsigned int pos);
};

template<typename tipo>
Fila<tipo>::Fila(unsigned int tam){
    size=tam;
    vetor = new tipo[size];
    qtde=0;
    inic=0;
    fim=-1;
}

template<typename tipo>
void Fila<tipo>::insere(tipo x){
    fim++;
    if(fim==size)
        fim=0;
    vetor[fim]=x;
    qtde++;
}

template<typename tipo>
tipo Fila<tipo>::remove(){
    tipo t=vetor[inic];
    inic++;
    if(inic==size)
        inic=0;
    qtde--;
    return t;
}

template<typename tipo>
tipo Fila<tipo>::primeiro(){
    return vetor[inic];
}

template<typename tipo>
bool Fila<tipo>::filavazia(){
    return qtde==0;
}

template<typename tipo>
bool Fila<tipo>::filacheia(){
    return qtde==size;
}

template<typename tipo>
int Fila<tipo>::getfim(){
    return fim;
}

template<typename tipo>
unsigned int Fila<tipo>::getqtde(){
    return qtde;
}

template<typename tipo>
unsigned int Fila<tipo>::getsize(){
    return size;
}

template<typename tipo>
unsigned int Fila<tipo>::getinic(){
    return inic;
}

template<typename tipo>
tipo Fila<tipo>::getvalor(unsigned int pos){
    return vetor[pos];
}


#endif // FILA_H_INCLUDED
