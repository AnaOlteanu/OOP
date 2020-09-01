#ifndef CAUTATOR2_H
#define CAUTATOR2_H

#include "map.h"
#include "cautator.h"


class Cautator2:public Cautator
{
public:
    Cautator2();
    void set_linie(int a);
    void set_coloana(int a);
    int get_linie();
    int get_coloana();
    void put_cautator(Map&m);
    ~Cautator2();
    void Move(Map&m);


};
#endif // CAUTATOR2_H
