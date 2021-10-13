#pragma once

#include <string>
#include "IGraphic.h"
#include "Graphic.h"

class GraphicProxy : IGraphic
{
public:

    GraphicProxy(std::string t_objectName) : m_objectName{ t_objectName }, m_graphic{ nullptr } { }
    ~GraphicProxy() { if (m_graphic) delete m_graphic; }
    void render() { getInstance()->render(); }

private:

    std::string m_objectName;
    Graphic * m_graphic;

    Graphic * getInstance(void)
    { 
        if (!m_graphic)
        {
            m_graphic = new Graphic(m_objectName);

            std::cout << "Graphic proxy at location " << this
                << " requested for a graphic instance, created one at location " << &m_graphic << std::endl;
        }
        return m_graphic;
    }

};