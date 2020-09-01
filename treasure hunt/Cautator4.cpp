#include "cautator4.h"
using namespace std;

Cautator4::Cautator4()
{
    tip='4';
    linie=14;
    coloana=14;
}
int Cautator4::get_linie()
{
    return linie;
}
int Cautator4::get_coloana()
{
    return coloana;
}
void Cautator4::set_coloana(int a)
{
    coloana=a;
}
void Cautator4::set_linie(int a)
{
    linie=a;
}
void Cautator4::put_cautator(Map&m)
{
    m.set_cautator(linie,coloana,tip);
}
void Cautator4::Move(Map&m)
{
    if(linie-1>-1 && m.get_info(linie-1,coloana)=='.') ///sus .
    {
        m.set_cautator(linie-1,coloana,tip);
        m.set_cautator(linie,coloana,'x');
        linie--;
    }
    else
        if(linie-1>-1 && m.get_info(linie-1,coloana)=='$') ///sus $
        {
                    comoara=1;
                    m.set_comori();
                    m.set_cautator(linie,coloana,'x');
                    m.set_cautator(linie-1,coloana,'x');
                }
    else
        if(coloana-1>-1 && m.get_info(linie,coloana-1)=='.') ///stanga .
        {
            m.set_cautator(linie,coloana-1,tip);
            m.set_cautator(linie,coloana,'x');
            coloana--;
        }
        else
            if(coloana-1>-1 && m.get_info(linie,coloana-1)=='$') ///stanga $
            {
                comoara=1;
                m.set_comori();
                m.set_cautator(linie,coloana,'x');
                m.set_cautator(linie,coloana-1,'x');
            }
            else
                if(coloana+1<15 && m.get_info(linie,coloana+1)=='.') ///dreapta .
                {
                    m.set_cautator(linie,coloana+1,tip);
                    m.set_cautator(linie,coloana,'x');
                    coloana++;
                }

                else
                    if(coloana+1<15 && m.get_info(linie,coloana+1)=='$') ///dreapta $
                    {
                        comoara=1;
                        m.set_comori();
                        m.set_cautator(linie,coloana+1,'x');
                        m.set_cautator(linie,coloana,'x');
                    }
                else
                    if(linie+1<15 && m.get_info(linie+1,coloana)=='.') ///jos .
                    {
                        m.set_cautator(linie+1,coloana,tip);
                        m.set_cautator(linie,coloana,'x');
                        linie++;
                    }
                    else
                        if(linie+1<15 && m.get_info(linie+1,coloana)=='$') ///jos $
                        {
                            comoara=1;
                            m.set_comori();
                            m.set_cautator(linie,coloana,'x');
                            m.set_cautator(linie+1,coloana,'x');
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
Cautator4::~Cautator4()
{
}
