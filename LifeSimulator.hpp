
#pragma once

#include "Pattern.hpp"

#include <cstdint>
#include <vector>

using Coordinate = std::pair<std::uint8_t, std::uint8_t>;

class LifeSimulator
{

  public:
    LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY);

    void insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY);
    void update();

    std::uint8_t getSizeX() const;
    std::uint8_t getSizeY() const;
    bool getCell(std::uint8_t x, std::uint8_t y) const;

  private:
    std::vector<std::vector<bool>> space = std::vector<std::vector<bool>>();
    std::uint8_t neighbors(std::uint8_t x, std::uint8_t y);
    std::uint8_t decWrap(std::uint8_t idx, bool isX);
    std::uint8_t incWrap(std::uint8_t idx, bool isY);
};