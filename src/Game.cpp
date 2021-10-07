#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
    m_factories.push_back(new LegoBrickFactory());
    m_factories.push_back(new MudBrickFactory());
    m_factories.push_back(new ClayBrickFactory());

    for (BrickFactory * factory : m_factories)
    {
        std::vector<Brick *> newBricks = factory->getBricks(3);
        for (Brick * brick : newBricks)
            m_bricks.push_back(brick);
    }
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    //while (m_gameIsRunning)
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    std::cout << "Processing Events" << std::endl;
}

void Game::update()
{
    std::cout << "Updating" << std::endl;
}

void Game::render()
{
    std::cout << "Rendering" << std::endl;

    for (Brick * brick : m_bricks)
        brick->render();
}

void Game::cleanUp()
{
    std::cout << "Cleaning up" << std::endl;

    for (BrickFactory * factory : m_factories)
        delete factory;
       
    for (Brick * brick : m_bricks)
        delete brick;
}