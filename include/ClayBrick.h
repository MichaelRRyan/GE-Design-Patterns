#pragma once

#include <iostream>
#include "Brick.h"

class ClayBrick : public Brick
{
public:
    void render() { std::cout << "Clay Brick" << std::endl; }
};