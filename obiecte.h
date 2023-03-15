#include <iostream>
#include <cstring>
using namespace std;

class Punct2D{
    int x, y;
public:
    Punct2D();
    Punct2D(const int);
    Punct2D(const int, const int);
    Punct2D& operator =(const Punct2D&);
    friend istream& operator>>(istream&, Punct2D&);
    friend ostream& operator<<(ostream&, const Punct2D&);
    bool operator !=(const Punct2D&)const;
};

class Figura{
    char* denumire;
    int nrPuncte;
    Punct2D* v;
public:
    Figura();
    Figura(const char*, const int);
    Figura(const char*, const int, const Punct2D*const);
    friend istream& operator>>(istream&, Figura&); ///const istream?
    Figura& operator=(const Figura&);
    Figura& operator +=(const Punct2D&);
    bool operator!=(const Figura&)const;
    char* getDenumire()const;
};

class Geometrie{
    int nrFiguri;
    Figura* fig;
public:
    Geometrie();
    Geometrie(const int,const Figura* const vfig);
    friend istream& operator>>(istream&, Geometrie&); ///const istream?
    friend ostream& operator<<(ostream&, const Geometrie&);
    Geometrie& operator -=(const int);
};
