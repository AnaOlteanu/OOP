#include "comoara.h"
#include <cstdlib>
#include <time.h>
#include <iostream>


using namespace std;

Comoara::Comoara()
{
    srand(time(0));
    linie=(rand()%15);
    cout<<linie<<' ';
    coloana=(rand()%15);
    cout<<coloana<<endl;
}
