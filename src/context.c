#include "context.h"

context context_make(uint pixel_size, uint row_size, uint col_size, uint x_offset, uint y_offset)
{
    context ctx;

    ctx.row_size = row_size;
    ctx.col_size = col_size;

    char i, j;
    char index = 0;
    for (i = 0; i < col_size; i++)
    {
        for (j = 0; j < row_size; j++)
        {
            ctx.pixels[index].color = BLACK;
            ctx.pixels[index].rect.x = x_offset + j * pixel_size;
            ctx.pixels[index].rect.y = y_offset + i * pixel_size;
            ctx.pixels[index].rect.w = pixel_size;
            ctx.pixels[index].rect.h = pixel_size;
            index++;

        }
    }

    return ctx;
}

void context_render(context *ctx)
{
    char i;

    for (i = 0; i < (ctx->row_size * ctx->col_size); i++)
    {
        set_pixel_render_color(ctx->pixels[i]);
        SDL_RenderFillRect(renderer, &ctx->pixels[i].rect);
    }
}