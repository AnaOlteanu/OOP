#include "map.h"
#include <time.h>
#include <stdlib.h>


using namespace std;

Map::Map()
{
    harta=new char*[15];
    for(int i=0;i<15;i++)
        harta[i]=new char[15];
    for(int i=0;i<15;i++)
        for(int j=0;j<15;j++)
            harta[i][j]='.';
}

char** Map::put_comoara()
{
    srand(time(0));
    int i=rand()%13+1;
    int j=rand()%13+1;
    harta[i][j]='$';

    for(int k=0;k<2;k++)
    {
        while(harta[i][j]=='$')
            i=j=rand()%13+1;
        harta[i][j]='$';
    }

    return harta;
}

ostream& operator<<(ostream& out,const Map& m)
{
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<15;j++)
            out<<m.harta[i][j]<<' ';
        out<<endl;
    }
}
void Map::set_cautator(int line,int col,char c)
{
    harta[line][col]=c;
}
void Map::set_comori()
{
    comori--;
}

char Map::get_info(int line,int col)
{
    return harta[line][col];
}
