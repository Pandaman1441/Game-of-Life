
#include "LifeSimulator.hpp"
#include "PatternAcorn.hpp"
#include "PatternBlinker.hpp"
#include "PatternBlock.hpp"
#include "PatternGlider.hpp"
#include "PatternGosperGliderGun.hpp"
#include "PatternPulsar.hpp"
#include "RendererConsole.hpp"
#include "rlutil.h"

#include <chrono>
#include <cstdint>
#include <thread>

int main()
{
    int timeLimit = 1000;

    auto sizeX = static_cast<std::uint8_t>(rlutil::tcols());
    auto sizeY = static_cast<std::uint8_t>(rlutil::trows());

    LifeSimulator sim(sizeX, sizeY);

    PatternAcorn acorn = PatternAcorn();
    PatternBlinker blinker = PatternBlinker();
    PatternBlock block = PatternBlock();
    PatternGlider glider = PatternGlider();
    PatternGosperGliderGun gun = PatternGosperGliderGun();
    PatternPulsar pulsar = PatternPulsar();

    sim.insertPattern(acorn, 33, 15);
    sim.insertPattern(blinker, 100, 2);
    sim.insertPattern(block, 50, 20);
    sim.insertPattern(glider, 0, 0);
    sim.insertPattern(gun, 50, 10);
    sim.insertPattern(pulsar, 30, 15);

    RendererConsole renderer;

    for (int i = 0; i < timeLimit; i++)
    {
        renderer.render(sim);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        sim.update();
    }
}