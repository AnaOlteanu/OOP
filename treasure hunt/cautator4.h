#ifndef CAUTATOR4_H
#define CAUTATOR4_H

#include "map.h"
#include "cautator.h"


class Cautator4:public Cautator
{
public:
    Cautator4();
    void set_linie(int a);
    void set_coloana(int a);
    int get_linie();
    int get_coloana();
    void put_cautator(Map&m);
    ~Cautator4();
    void Move(Map&m);
};
#endif // CAUTATOR4_H
