#pragma once

#include <vector>
#include "BrickFactory.h"
#include "MudBrick.h"
#include "DrawOpenGL.h"

class MudBrickFactory : public BrickFactory
{
public:
    MudBrickFactory() : drawAPI{ "Mud Brick" } {}

    std::vector<Brick *> getBricks(int t_numberOfBricks)
    {
        std::vector<Brick *> bricks;

        for (int i = 0; i < t_numberOfBricks; i++)
            bricks.push_back(new MudBrick(&drawAPI));

        return bricks;
    }

private: 
    DrawOpenGL drawAPI;
};