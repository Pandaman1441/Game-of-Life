#include "PatternGlider.hpp"

PatternGlider::PatternGlider()
{
    for (std::size_t x = 0; x < pattern.size(); ++x)
    {
        for (std::size_t y = 0; y < pattern[0].size(); ++y)
        {
            pattern[x][y] = false;
        }
    }
    pattern[0][1] = true;
    pattern[1][2] = true;
    pattern[2][0] = true;
    pattern[2][1] = true;
    pattern[2][2] = true;
}

std::uint8_t PatternGlider::getSizeX() const
{
    return static_cast<std::uint8_t>(pattern.size());
}

std::uint8_t PatternGlider::getSizeY() const
{
    return static_cast<std::uint8_t>(pattern[0].size());
}

bool PatternGlider::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[x][y];
}