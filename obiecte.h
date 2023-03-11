#include <iostream>
using namespace std;

class Punct2D{
    int x, y;
public:
    Punct2D();
    Punct2D(int);
    Punct2D(int, int);
    friend istream& operator>>(istream&, Punct2D&);
    friend ostream& operator<<(ostream&, const Punct2D&);
};

class Figura{
    char* p;
    int nrPuncte;
    Punct2D *P;
public:


};

class Geometrie{
    int nrFiguri;
    Figura* fig;

public:


};
