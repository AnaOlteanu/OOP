#include "cautator3.h"
using namespace std;

Cautator3::Cautator3()
{
    tip='3';
    linie=14;
    coloana=0;
}
int Cautator3::get_linie()
{
    return linie;
}
int Cautator3::get_coloana()
{
    return coloana;
}
void Cautator3::set_coloana(int a)
{
    coloana=a;
}
void Cautator3::set_linie(int a)
{
    linie=a;
}
void Cautator3::put_cautator(Map&m)
{
    m.set_cautator(linie,coloana,tip);
}
void Cautator3::Move(Map&m)
{
    if(coloana+1<15 && m.get_info(linie,coloana+1)=='.') ///dreapta .
    {
        m.set_cautator(linie,coloana+1,tip);
        m.set_cautator(linie,coloana,'#');
        coloana++;
    }
    else
        if(coloana+1<15 && m.get_info(linie,coloana+1)=='$') ///dreapta $
        {
            comoara=1;
            m.set_comori();
            m.set_cautator(linie,coloana+1,'#');
            m.set_cautator(linie,coloana,'#');
        }
        else
            if(linie-1>-1 && coloana+1<15 && m.get_info(linie-1,coloana+1)=='.') ///diag sus dr .
            {
                m.set_cautator(linie-1,coloana+1,tip);
                m.set_cautator(linie,coloana,'#');
                linie--;
                coloana++;
            }
            else
                if(linie-1>-1 && coloana+1<15 && m.get_info(linie-1,coloana+1)=='$')    ///diag sus dr $
                {
                    comoara=1;
                    m.set_comori();
                    m.set_cautator(linie-1,coloana+1,'#');
                    m.set_cautator(linie,coloana,'#');
                }
                else
                    if(linie+1<15 && coloana+1<15 && m.get_info(linie+1,coloana+1)=='.')    ///diag jos dr .
                    {
                        m.set_cautator(linie+1,coloana+1,tip);
                        m.set_cautator(linie,coloana,'#');
                        linie++;
                        coloana++;
                    }
                    else
                        if(linie+1<15 && coloana+1<15 && m.get_info(linie+1,coloana+1)=='$')    ///diag jos dr $
                        {
                            comoara=1;
                            m.set_comori();
                            m.set_cautator(linie+1,coloana+1,'#');
                            m.set_cautator(linie,coloana,'#');
                        }
                        else
                            if(linie-1>-1 && coloana-1>-1 && m.get_info(linie-1,coloana-1)=='.')   ///diag sus stg .
                            {
                                m.set_cautator(linie-1,coloana-1,tip);
                                m.set_cautator(linie,coloana,'#');
                                linie--;
                                coloana--;
                            }
                            else
                                if(linie-1>-1 && coloana-1>-1 && m.get_info(linie-1,coloana-1)=='$')   ///diag sus stg $
                                {
                                    comoara=1;
                                    m.set_comori();
                                    m.set_cautator(linie-1,coloana-1,'#');
                                    m.set_cautator(linie,coloana,'#');

                                }
                            else
                                if(linie+1<15 && coloana-1>-1 && m.get_info(linie+1,coloana-1)=='.')    ///diag jos stg .
                                {
                                    m.set_cautator(linie+1,coloana-1,tip);
                                    m.set_cautator(linie,coloana,'#');
                                    linie++;
                                    coloana--;
                                }
                                else
                                    if(linie+1<15 && coloana-1>-1 && m.get_info(linie+1,coloana-1)=='$')    ///diag jos stg $
                                    {
                                        comoara=1;
                                        m.set_comori();
                                        m.set_cautator(linie+1,coloana-1,'#');
                                        m.set_cautator(linie,coloana,'#');
                                    }

}
Cautator3::~Cautator3()
{
}
