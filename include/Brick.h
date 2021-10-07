#pragma once

class Brick
{
public:
    virtual ~Brick() {}
    virtual void render() = 0;
};