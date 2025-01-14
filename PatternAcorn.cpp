
#include "PatternAcorn.hpp"

PatternAcorn::PatternAcorn()
{
    for (std::size_t x = 0; x < pattern.size(); ++x)
    {
        for (std::size_t y = 0; y < pattern[0].size(); ++y)
        {
            pattern[x][y] = false;
        }
    }

    pattern[1][0] = true;
    pattern[3][1] = true;
    pattern[0][2] = true;
    pattern[1][2] = true;
    pattern[4][2] = true;
    pattern[5][2] = true;
    pattern[6][2] = true;
}

bool PatternAcorn::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[x][y];
}