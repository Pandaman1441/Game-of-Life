#pragma once

#include "Pattern.hpp"

#include <array>

class PatternGlider : public Pattern
{
  public:
    PatternGlider();
    virtual std::uint8_t getSizeX() const;
    virtual std::uint8_t getSizeY() const;
    virtual bool getCell(std::uint8_t x, std::uint8_t y) const;

  private:
    std::array<std::array<bool, 3>, 3> pattern;
};