#include "game.h"
#include <vector>
#include "cautator1.h"
#include "cautator2.h"
#include "cautator3.h"
#include "cautator4.h"

Game::Game()
{
    harta.put_comoara();

    Cautator *ptr=new Cautator1;
    cautatori.push_back(ptr);
    ptr=new Cautator2;
    cautatori.push_back(ptr);
    ptr=new Cautator3;
    cautatori.push_back(ptr);
    ptr=new Cautator4;
    cautatori.push_back(ptr);

    for(int i=0;i<4;i++)
        cautatori[i]->put_cautator(harta);
}

void Game::Play()
{
    int x=harta.get_comori();
    while(harta.get_comori()>0)
    {
        for(int i=0;i<4;i++)
            if(cautatori[i]->get_comoara()==0)
                cautatori[i]->Move(harta);
        cout<<harta<<endl<<endl;

    }

}
