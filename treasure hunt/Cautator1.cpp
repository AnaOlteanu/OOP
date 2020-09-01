#include "cautator1.h"
using namespace std;


Cautator1::Cautator1()
{
    tip='1';
    linie=0;
    coloana=0;
}
int Cautator1::get_linie()
{
    return linie;
}
int Cautator1::get_coloana()
{
    return coloana;
}
void Cautator1::set_coloana(int a)
{
    coloana=a;
}
void Cautator1::set_linie(int a)
{
    linie=a;
}
void Cautator1::put_cautator(Map&m)
{
    m.set_cautator(linie,coloana,tip);
}


void Cautator1::Move(Map&m)
{
    if(coloana-1>-1 && m.get_info(linie,coloana-1)=='.')    ///stanga .
    {
        m.set_cautator(linie,coloana-1,tip);
        m.set_cautator(linie,coloana,'*');
        coloana--;
    }
    else
        if(coloana-1>-1 && m.get_info(linie,coloana-1)=='$') ///stanga $
        {
            comoara=1;
            m.set_comori();
            m.set_cautator(linie,coloana,'*');
            m.set_cautator(linie,coloana-1,'*');
        }
        else
            if(linie-1>-1 && m.get_info(linie-1,coloana)=='.') ///sus .
            {
                m.set_cautator(linie-1,coloana,tip);
                m.set_cautator(linie,coloana,'*');
                linie--;
            }
            else
                if(linie-1>-1 && m.get_info(linie-1,coloana)=='$') ///sus $
                {
                    comoara=1;
                    m.set_comori();
                    m.set_cautator(linie,coloana,'*');
                    m.set_cautator(linie-1,coloana,'*');
                }
                else
                    if(linie+1<15 && m.get_info(linie+1,coloana)=='$') ///jos $
                    {
                        comoara=1;
                        m.set_comori();
                        m.set_cautator(linie,coloana,'*');
                        m.set_cautator(linie+1,coloana,'*');
                    }
                    else
                        if(coloana+1<15 && m.get_info(linie,coloana+1)=='.') ///dreapta .
                        {
                            m.set_cautator(linie,coloana+1,tip);
                            m.set_cautator(linie,coloana,'*');
                            coloana++;
                        }
                        else
                            if(linie+1<15 && m.get_info(linie+1,coloana)=='.') ///jos .
                            {
                                m.set_cautator(linie+1,coloana,tip);
                                m.set_cautator(linie,coloana,'*');
                                linie++;
                            }
                            else
                                if(linie+1<15 && m.get_info(linie+1,coloana)=='$') ///jos $
                                {
                                    comoara=1;
                                    m.set_comori();
                                    m.set_cautator(linie,coloana,'*');
                                    m.set_cautator(linie+1,coloana,'*');
                                }


}
Cautator1::~Cautator1()
{
}
