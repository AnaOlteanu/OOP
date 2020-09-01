#ifndef COMOARA_H
#define COMOARA_H
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

class Comoara
{
    int linie,coloana;

public:
    Comoara();
    int get_linie(){ return linie; }
    int get_coloana(){ return coloana; }
};
#endif // COMOARA_H
