#pragma once

#include <vector>
#include "Brick.h"

class BrickFactory
{
public:
    virtual std::vector<Brick *> getBricks(int t_numberOfBricks) = 0;
};