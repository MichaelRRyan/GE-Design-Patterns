#pragma once

#include <vector>
#include "BrickFactory.h"
#include "ClayBrick.h"
#include "DrawOpenGL.h"

class ClayBrickFactory : public BrickFactory
{
public:
    ClayBrickFactory() : drawAPI{ "Clay Brick" } {}

    std::vector<Brick *> getBricks(int t_numberOfBricks)
    {
        std::vector<Brick *> bricks;
        
        for (int i = 0; i < t_numberOfBricks; i++)
            bricks.push_back(new ClayBrick(&drawAPI));

        return bricks;
    }
    
private: 
    DrawOpenGL drawAPI;
};