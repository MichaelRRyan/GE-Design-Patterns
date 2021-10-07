#pragma once

#include <iostream>
#include "Brick.h"

class LegoBrick : public Brick
{
public:
    LegoBrick(DrawAPI * t_drawAPI) : Brick{ t_drawAPI } {}
    void render() { m_drawAPI->render(); }
};