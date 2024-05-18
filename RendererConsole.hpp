
#pragma once

#include "Renderer.hpp"
#include "rlutil.h"

#include <cstdint>
#include <vector>

class RendererConsole : public Renderer
{
  public:
    virtual void render(const LifeSimulator& simulation);
};