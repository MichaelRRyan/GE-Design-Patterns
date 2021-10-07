#pragma once

#include <iostream>
#include "Brick.h"

class LegoBrick : public Brick
{
public:
    void render() { std::cout << "Lego Brick" << std::endl; }
};