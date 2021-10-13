#pragma once

#include <iostream>
#include "Brick.h"

class ClayBrick : public Brick
{
public:
    ClayBrick(DrawAPI * t_drawAPI) : Brick{ t_drawAPI } {}
    void render()
    {
        std::cout << "Object at location " << this << " is rendering:" << std::endl;
        m_drawAPI->render(); 
    }
};