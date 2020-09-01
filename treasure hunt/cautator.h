#ifndef CAUTATOR_H
#define CAUTATOR_H


using namespace std;

class Map;

class Cautator
{
protected:
    int linie,coloana;
    bool comoara=0;
    char tip;

public:
    virtual ~Cautator(){}
    Cautator(){}
    virtual void set_linie(int a)=0;
    virtual void set_coloana(int b)=0;
    virtual int get_linie()=0;
    virtual int get_coloana()=0;
    void set_comoara() { comoara=1; }
    bool get_comoara() { return comoara; }
    virtual void put_cautator(Map&m)=0;
    virtual void Move(Map&m)=0;

};

#endif // CAUTATOR_H
