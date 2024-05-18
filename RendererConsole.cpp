
#include "RendererConsole.hpp"

void RendererConsole::render(const LifeSimulator& simulation)
{
    rlutil::cls();
    rlutil::hidecursor();

    for (std::uint8_t x = 0; x < simulation.getSizeX(); x++)
    {
        for (std::uint8_t y = 0; y < simulation.getSizeY(); y++)
        {
            if (simulation.getCell(x, y))
            {
                rlutil::locate(x + 1, y + 1);
                rlutil::setChar('X');
            }
        }
    }
    rlutil::showcursor();
}