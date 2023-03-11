#include "obiecte.h"

Punct2D::Punct2D(){
    //cout << "Folosit constructorul standard\n";
}

Punct2D::Punct2D(int a){
    x = a;
    //cout << "Folosit constructorul cu un parametru\n";
}

Punct2D::Punct2D(int a, int b){
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
