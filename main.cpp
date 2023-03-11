#include "obiecte.h"

int main()
{
    Punct2D p1(1, -1), p2(2), p3[4], p4[2];
    //for(int x = 0; x < 4; x++)
    //    cin >> p3[x];
    p3[0] = p1;
    p3[1] = p1;
    p3[2] = p1;
    Figura f2("Segment", 2, p4);
    Figura f1("triunghi dreptunghic", 3, p3);
    Figura f3("salutare", 3, p3);
    Figura f4[1];


    return 0;
}
