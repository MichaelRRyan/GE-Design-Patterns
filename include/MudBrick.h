#pragma once

#include <iostream>
#include "Brick.h"

class MudBrick : public Brick
{
public:
    void render() { std::cout << "Mud Brick" << std::endl; }
};