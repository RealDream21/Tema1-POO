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
};

class Figura{
    char* denumire;
    int nrPuncte;
    Punct2D* v;
public:
    Figura();
    Figura(const char*, const int);
    Figura(const char*, const int, const Punct2D*);
    friend istream& operator>>(istream&, Figura&);
    Figura& operator=(const Figura&);
    //friend ostream& operator<<(ostream&, const Figura&);
};

class Geometrie{
    int nrFiguri;
    Figura* fig;
public:


};
