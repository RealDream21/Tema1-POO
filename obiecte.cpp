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

Figura::Figura(){
    denumire = "";
    int nrPuncte = 0;
    v = NULL;
}

Figura::Figura(const char *nume, const int nr){
    denumire = new char[strlen(nume)];
    int len = strlen(nume);
    for(int i = 0; i <= len; i++)
        denumire[i] = nume[i];
    nrPuncte = nr;
}


Figura::Figura(const char *nume, const int nr, const Punct2D* a){
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
    if (strlen(denumire) != 0) delete [] denumire; //eroare cand sterg la un element gol ex: f[3] = f3;
    denumire = new char[len + 1];
    strncpy(denumire, other.denumire, len);
    v = NULL; //??? nu merge delete [] v, de editat dupa daca rezolv problema cu elementul neinitializat;
    v = new Punct2D[other.nrPuncte + 1];
    for(int i = 0; i < nrPuncte; i++)
        v[i] = other.v[i];
    return *this;
}


