#pragma once

#include <SDL.h>
#include <iostream>
#include <string>
#include <vector>

#include "MudBrickFactory.h"
#include "LegoBrickFactory.h"
#include "ClayBrickFactory.h"

class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void processEvents();
    void update();
    void render();

    void cleanUp();

    bool m_gameIsRunning;

    std::vector<BrickFactory *> m_factories;
    std::vector<Brick *> m_bricks;

};