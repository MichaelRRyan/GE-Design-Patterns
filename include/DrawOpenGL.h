#pragma once

#include <iostream>
#include "DrawAPI.h"
#include "GraphicProxy.h"

class DrawOpenGL : public DrawAPI
{
public:

    DrawOpenGL(std::string t_objectName) : 
        m_graphicProxy{ t_objectName } 
    {
        std::cout << "OpenGL DrawAPI created at location " << this
            << " with a graphics proxy at location " << &m_graphicProxy << std::endl;
    }

    void render() { m_graphicProxy.render(); }
private:
    GraphicProxy m_graphicProxy;
};