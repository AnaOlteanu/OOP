#ifndef CAUTATOR1_H
#define CAUTATOR1_H

#include "map.h"
#include "cautator.h"

class Cautator1:public Cautator
{
public:
    Cautator1();
    void set_linie(int a);
    void set_coloana(int a);
    int get_linie();
    int get_coloana();
    void put_cautator(Map&m);
    ~Cautator1();
    void Move(Map&m);

};
#endif // CAUTATOR1_H
