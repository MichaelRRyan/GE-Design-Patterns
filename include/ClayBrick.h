#pragma once

#include <iostream>
#include "Brick.h"
#include "DrawAPI.h"

class ClayBrick : public Brick
{
public:
    ClayBrick(DrawAPI * t_drawAPI) : m_drawAPI{ t_drawAPI } { }
    void render() { m_drawAPI->render(); }
public:
    DrawAPI * m_drawAPI;
};