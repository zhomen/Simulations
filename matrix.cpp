#include "matrix.hpp"

Matrix::Matrix()
{
    SDL_CreateWindowAndRenderer(680, 480, SDL_WINDOW_RESIZABLE,
        &m_game_window, &m_game_window_renderer);
}

void Matrix::game_loop()
{
    bool keep_running = true;
    while(keep_running)
    {
        while(SDL_PollEvent(&m_game_window_event) > 0)
        {
            switch(m_game_window_event.type)
            {
                case SDL_QUIT:
                    keep_running = false;
            }
        }

        update(1.0/60.0);
        draw();
    }
}

void Matrix::update(double delta_time)
{

}

void Matrix::draw()
{
    SDL_RenderClear(m_game_window_renderer);

    SDL_RenderPresent(m_game_window_renderer);
}

