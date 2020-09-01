#ifndef MAP_H
#define MAP_H
#include <iostream>

using namespace std;

class Map
{
protected:
    char **harta;
    int comori=3;

public:
    Map();
    char** put_comoara();
    friend ostream& operator<<(ostream& out,const Map&m);
    void set_cautator(int,int,char);
    char get_info(int,int);
    void set_comori();
    int get_comori(){return comori;}

};

ostream& operator<<(ostream& out,const Map&m);

#endif // MAP_H
