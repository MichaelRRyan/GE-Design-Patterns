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
        {
            bricks.push_back(new LegoBrick(m_drawAPI));

            std::cout << "The Lego brick factory at location " << this 
                << " created a Lego brick at location " << bricks.back() << std::endl;
        }

        return bricks;
    }
};