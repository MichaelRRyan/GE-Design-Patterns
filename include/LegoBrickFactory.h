#pragma once

#include <vector>
#include "BrickFactory.h"
#include "LegoBrick.h"
#include "DrawOpenGL.h"

class LegoBrickFactory : public BrickFactory
{
public:
    LegoBrickFactory() : BrickFactory{ new DrawOpenGL{ "Lego Brick" } } { }

    std::vector<Brick *> getBricks(int t_numberOfBricks)
    {
        std::vector<Brick *> bricks;
        
        for (int i = 0; i < t_numberOfBricks; i++)
            bricks.push_back(new LegoBrick(m_drawAPI));

        return bricks;
    }
};