#include "obiecte.h"

int main()
{
    Punct2D p1(1, -1), p2(2), p3[4], p4[2];
    for(int x = 0; x < 4; x++)
        cin >> p3[x];
    cout << p3[3];
    p4[0] = p1;
    p4[1] = p2;
    Figura f1("triunghi dreptunghic", 3), f2("Segment", 2, p4), f3[4];
    cin >> f3[0];
    f3[1] = f3[0];
    f3[1] += p1;
    if(f1 != f3[1])
        cout << "figura " << f1 <<" diferita de " << f3[1] << endl;
    Geometrie g1, g2(2, f3);
    Geometrie g4 = g2;
    cin >> g1;
    g4 -= 1;
    cout << g4 << g2;
    return 0;
}
