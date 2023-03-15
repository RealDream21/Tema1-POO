#include "obiecte.h"

int main()
{
    Punct2D p1(1, -1), p2(2), p3[3], p4[3], p5[4], p6[1];
    //for(int x = 0; x < 4; x++)
    //    cin >> p3[x];
    p3[0] = p1;
    p3[1] = p1;
    p3[2] = p1;
    Figura f1("Segment", 3, p3);
    Figura f2("Segment", 3, p4);
    Figura f4("salut", 3, p3);
    Figura f3[3];
    f3[0] = f1;
    f3[1] = f2;
    f3[2] = f4;
    Geometrie g1, g3(2, f3);
    cin >> g1;//adica nr figuri si figurile
    cout << g1.nrFiguri;
    g1 -= 2;
    cout << g1;

    return 0;
}
