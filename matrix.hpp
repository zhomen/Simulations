#pragma once

#include <SDL2/SDL.h>

class Matrix
{
public:
    Matrix();
    ~Matrix() = default;

    void game_loop();
    void update(double delta_time);
    void draw();

private:
    SDL_Window   *m_game_window;
    SDL_Event     m_game_window_event;
    SDL_Renderer *m_game_window_renderer;
};