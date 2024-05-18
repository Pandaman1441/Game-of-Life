
#pragma once

#include "Pattern.hpp"

#include <array>

class PatternGosperGliderGun : public Pattern
{
  public:
    PatternGosperGliderGun();
    virtual std::uint8_t getSizeX() const
    {
        return static_cast<std::uint8_t>(pattern.size());
    }
    virtual std::uint8_t getSizeY() const
    {
        return static_cast<std::uint8_t>(pattern[0].size());
    }

    virtual bool getCell(std::uint8_t x, std::uint8_t y) const;

  private:
    std::array<std::array<bool, 9>, 37> pattern;
};