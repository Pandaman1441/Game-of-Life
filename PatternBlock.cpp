#include "PatternBlock.hpp"

PatternBlock::PatternBlock()
{
    for (std::size_t x = 0; x < pattern.size(); ++x)
    {
        for (std::size_t y = 0; y < pattern[0].size(); ++y)
        {
            pattern[x][y] = false;
        }
    }

    pattern[0][0] = true;
    pattern[1][0] = true;
    pattern[0][1] = true;
    pattern[1][1] = true;
}

std::uint8_t PatternBlock::getSizeX() const
{
    return static_cast<std::uint8_t>(pattern.size());
}

std::uint8_t PatternBlock::getSizeY() const
{
    return static_cast<std::uint8_t>(pattern[0].size());
}

bool PatternBlock::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[x][y];
}