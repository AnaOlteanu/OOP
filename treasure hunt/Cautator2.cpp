#include "cautator2.h"
using namespace std;

Cautator2::Cautator2()
{
    tip='2';
    linie=0;
    coloana=14;
}
int Cautator2::get_linie()
{
    return linie;
}
int Cautator2::get_coloana()
{
    return coloana;
}
void Cautator2::set_coloana(int a)
{
    coloana=a;
}
void Cautator2::set_linie(int a)
{
    linie=a;
}
void Cautator2::put_cautator(Map&m)
{
    m.set_cautator(linie,coloana,tip);
}
void Cautator2::Move(Map&m)
{
    if(coloana-1>-1 && m.get_info(linie,coloana-1)=='.') ///stanga .
    {
        m.set_cautator(linie,coloana-1,tip);
        m.set_cautator(linie,coloana,'o');
        coloana--;
    }
    else
        if(coloana-1>-1 && m.get_info(linie,coloana-1)=='$') ///stanga $
        {
            comoara=1;
            m.set_comori();
            m.set_cautator(linie,coloana-1,'o');
            m.set_cautator(linie,coloana,'o');
        }
        else
            if(linie+1<15 && m.get_info(linie+1,coloana)=='.') ///jos .
            {
                m.set_cautator(linie+1,coloana,tip);
                m.set_cautator(linie,coloana,'o');
                linie++;
            }
            else
                if(linie+1<15 && m.get_info(linie+1,coloana)=='$') ///jos $
                {
                    comoara=1;
                    m.set_comori();
                    m.set_cautator(linie,coloana,'o');
                    m.set_cautator(linie+1,coloana,'o');
                }
                else
                    if(coloana+1<15 && m.get_info(linie,coloana+1)=='.') ///dreapta .
                    {
                        m.set_cautator(linie,coloana+1,tip);
                        m.set_cautator(linie,coloana,'o');
                        coloana++;
                    }
                    else
                        if(coloana+1<15 && m.get_info(linie,coloana+1)=='$') ///dreapta $
                        {
                            comoara=1;
                            m.set_comori();
                            m.set_cautator(linie,coloana,'o');
                            m.set_cautator(linie,coloana+1,'o');
                        }
                        else
                            if(linie-1>-1 && m.get_info(linie-1,coloana)=='.')    ///sus .
                            {
                                m.set_cautator(linie-1,coloana,tip);
                                m.set_cautator(linie,coloana,'o');
                                linie--;
                            }
                            else
                                if(linie-1>-1 && m.get_info(linie-1,coloana)=='$') ///sus $
                                {
                                    comoara=1;
                                    m.set_comori();
                                    m.set_cautator(linie-1,coloana,'o');
                                    m.set_cautator(linie,coloana,'o');

                                }

}
Cautator2::~Cautator2()
{
}
