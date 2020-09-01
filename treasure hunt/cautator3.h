#ifndef CAUTATOR3_H
#define CAUTATOR3_H

#include "map.h"
#include "cautator.h"


class Cautator3:public Cautator
{
public:
    Cautator3();
    void set_linie(int a);
    void set_coloana(int a);
    int get_linie();
    int get_coloana();
    void put_cautator(Map&m);
    ~Cautator3();
    void Move(Map&m);

};
#endif // CAUTATOR3_H
