/*
 * main.cc
 *
 * Entry point to the Bullet Hell.
 *
 * Copyright (c) 2022 The SFC Project Authors.
 *
 * SPDX-License-Identifier: MIT
 */

#define OLC_PGE_APPLICATION

#include <cstdlib>

#include <olcPixelGameEngine.h>

#include "config.h"
#include "game.h"

using namespace bullet_hell;

int main(int argc, char* argv[])
{
    // Initialise the game instance
    Game game(argc, argv);
    
    // Create the game window
    if (game.Construct(config::WINDOW_WIDTH, config::WINDOW_HEIGHT, 1, 1)) {
        // If the window is created successfully start the game
        game.Start();
    }

    return EXIT_SUCCESS;
}
