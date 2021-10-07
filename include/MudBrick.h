#pragma once

#include <iostream>
#include "Brick.h"

class MudBrick : public Brick
{
public:
    MudBrick(DrawAPI * t_drawAPI) : Brick{ t_drawAPI } {}
    void render() { m_drawAPI->render(); }
};