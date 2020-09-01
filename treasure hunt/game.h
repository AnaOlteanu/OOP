#ifndef GAME_H
#define GAME_H
#include <vector>
#include "cautator.h"
#include "map.h"

class Game
{
    vector<Cautator*> cautatori;
    Map harta;
public:
    Game();
    void Play();
};

#endif // GAME_H
