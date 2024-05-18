
#pragma once

#include "Pattern.hpp"

#include <array>

class PatternPulsar : public Pattern
{
  public:
    PatternPulsar();
    virtual std::uint8_t getSizeX() const;
    virtual std::uint8_t getSizeY() const;
    virtual bool getCell(std::uint8_t x, std::uint8_t y) const;

  private:
    std::array<std::array<bool, 13>, 13> pattern;
};