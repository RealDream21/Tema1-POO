#include "obiecte.h"

Punct2D::Punct2D(){
    //cout << "Folosit constructorul standard\n";
}

Punct2D::Punct2D(const int a){
    x = a;
    //cout << "Folosit constructorul cu un parametru\n";
}

Punct2D::Punct2D(const int a, const int b){
    x = a;
    y = b;
    //cout << "Folosit constructorul cu doi parametrii\n";
}

ostream& operator<<(ostream& os, const Punct2D& punct){
    os << punct.x << " " << punct.y << "\n";
    return os;
}

istream& operator>>(istream& is, Punct2D& punct){
    is >> punct.x >> punct.y;
    return is;
}

Punct2D& Punct2D::operator=(const Punct2D& other){
    x = other.x;
    y = other.y;
    return (*this);
}

bool Punct2D::operator!=(const Punct2D& other)const{
    if(x == other.x && y == other.y) return false;
    else return true;
}

Figura::Figura(){
    denumire = NULL;
    int nrPuncte = 0;
    v = NULL;
}

Figura::Figura(const char *nume, const int nr){
    v = NULL;
    denumire = new char[strlen(nume)];
    int len = strlen(nume);
    for(int i = 0; i <= len; i++)
        denumire[i] = nume[i];
    nrPuncte = nr;
}


Figura::Figura(const char *nume, const int nr, const Punct2D*const a){
    denumire = new char[strlen(nume)];
    int len = strlen(nume);
    for(int i = 0; i <= len; i ++)
        denumire[i] = nume[i];
    nrPuncte = nr;
    v = new Punct2D[nr + 1];
    for(int i = 0; i < nr; i++)
        v[i] = a[i];
}

istream& operator>>(istream& is, Figura& fig){
    fig.denumire = new char[100];
    is >> fig.denumire;
    is >> fig.nrPuncte;
    fig.v = new Punct2D[fig.nrPuncte + 1];
    for(int i = 0; i < fig.nrPuncte; i++)
        is >> fig.v[i];
    return is;
}

Figura& Figura::operator=(const Figura& other){
    int nrPuncte = other.nrPuncte;
    int len = strlen(other.denumire) + 1;
    if (denumire != NULL) delete [] denumire; //eroare cand sterg la un element gol ex: f[3] = f3;
    denumire = new char[len + 1];
    strncpy(denumire, other.denumire, len);
    if (v != NULL) delete [] v;
    v = new Punct2D[nrPuncte + 1];
    for(int i = 0; i < nrPuncte; i++)
        v[i] = other.v[i];
    return *this;
}

Figura& Figura::operator+=(const Punct2D& punct){
    if(v == NULL){
        v = new Punct2D[1];
        v[0] = punct;
        return *this;
    }
    Punct2D *aux;
    nrPuncte++;
    aux = new Punct2D[nrPuncte];
    for(int i = 0; i < nrPuncte - 1; i++)
        aux[i] = v[i];
    aux[nrPuncte - 1] = punct;
    delete [] v;
    v = aux;
    return *this;
}

bool Figura::operator!=(const Figura& other)const{
    if (strcmp(denumire, denumire)) return true;
    else if (nrPuncte != other.nrPuncte) return true;
    else{
        for(int i = 0; i < nrPuncte; i++)
            if(v[i] != other.v[i]) {
                cout << "DA";
                return true;
            }
    }
    return false;
}

Geometrie::Geometrie(){
    fig = NULL;
    nrFiguri = 0;
}

Geometrie::Geometrie(const int nr, const Figura* const vfig){
    nrFiguri = nr;
    fig = new Figura[nrFiguri + 1];
    for(int i = 0; i < nrFiguri; i++)
        fig[i] = vfig[i];
}







