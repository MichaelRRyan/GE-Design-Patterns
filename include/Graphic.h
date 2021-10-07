#pragma once

#include <iostream>
#include <string>
#include "IGraphic.h"

class Graphic : public IGraphic
{
public:
    Graphic(std::string t_objectName) : m_objectName{ t_objectName } { }
    void render() { std::cout << "Drawing " + m_objectName << std::endl; }
private:
    std::string m_objectName;
};