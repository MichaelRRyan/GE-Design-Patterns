#pragma once

#include <vector>
#include "BrickFactory.h"
#include "ClayBrick.h"

class ClayBrickFactory : public BrickFactory
{
public:
    std::vector<Brick *> getBricks(int t_numberOfBricks)
    {
        std::vector<Brick *> bricks;
        
        for (int i = 0; i < t_numberOfBricks; i++)
            bricks.push_back(new ClayBrick());

        return bricks;
    }
};