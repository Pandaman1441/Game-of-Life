#include "PatternPulsar.hpp"

PatternPulsar::PatternPulsar()
{
    for (std::size_t x = 0; x < pattern.size(); ++x)
    {
        for (std::size_t y = 0; y < pattern[0].size(); ++y)
        {
            pattern[x][y] = false;
        }
    }
    pattern[0][2] = true;
    pattern[0][3] = true;
    pattern[0][4] = true;
    pattern[5][2] = true;
    pattern[5][3] = true;
    pattern[5][4] = true;
    pattern[2][0] = true;
    pattern[3][0] = true;
    pattern[4][0] = true;
    pattern[2][5] = true;
    pattern[3][5] = true;
    pattern[4][5] = true;
    pattern[7][2] = true;
    pattern[7][3] = true;
    pattern[7][4] = true;
    pattern[12][2] = true;
    pattern[12][3] = true;
    pattern[12][4] = true;
    pattern[8][0] = true;
    pattern[9][0] = true;
    pattern[10][0] = true;
    pattern[8][5] = true;
    pattern[9][5] = true;
    pattern[10][5] = true;
    pattern[0][8] = true;
    pattern[0][9] = true;
    pattern[0][10] = true;
    pattern[5][8] = true;
    pattern[5][9] = true;
    pattern[5][10] = true;
    pattern[2][7] = true;
    pattern[3][7] = true;
    pattern[4][7] = true;
    pattern[2][12] = true;
    pattern[3][12] = true;
    pattern[4][12] = true;
    pattern[7][8] = true;
    pattern[7][9] = true;
    pattern[7][10] = true;
    pattern[12][8] = true;
    pattern[12][9] = true;
    pattern[12][10] = true;
    pattern[8][7] = true;
    pattern[9][7] = true;
    pattern[10][7] = true;
    pattern[8][12] = true;
    pattern[9][12] = true;
    pattern[10][12] = true;
}

std::uint8_t PatternPulsar::getSizeX() const
{
    return static_cast<std::uint8_t>(pattern.size());
}

std::uint8_t PatternPulsar::getSizeY() const
{
    return static_cast<std::uint8_t>(pattern[0].size());
}

bool PatternPulsar::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[x][y];
}