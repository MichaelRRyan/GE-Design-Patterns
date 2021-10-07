#pragma once

#include <vector>
#include "Brick.h"
#include "DrawAPI.h"

class BrickFactory
{
public:
    BrickFactory(DrawAPI * t_drawAPI) : m_drawAPI{ t_drawAPI } { }
    virtual ~BrickFactory() { if (m_drawAPI) delete m_drawAPI; }
    virtual std::vector<Brick *> getBricks(int t_numberOfBricks) = 0;
protected: 
    DrawAPI * m_drawAPI;
};