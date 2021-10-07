#pragma once

#include "DrawAPI.h"

class Brick
{
public:
    Brick(DrawAPI * t_drawAPI) : m_drawAPI{ t_drawAPI } {}
    virtual ~Brick() {}
    virtual void render() = 0;
protected:
    DrawAPI * m_drawAPI;
};