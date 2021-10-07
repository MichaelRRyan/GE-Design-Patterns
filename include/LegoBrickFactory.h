#pragma once

#include <vector>
#include "BrickFactory.h"
#include "LegoBrick.h"

class LegoBrickFactory : public BrickFactory
{
public:
    std::vector<Brick *> getBricks(int t_numberOfBricks)
    {
        std::vector<Brick *> bricks;
        
        for (int i = 0; i < t_numberOfBricks; i++)
            bricks.push_back(new LegoBrick());

        return bricks;
    }
};