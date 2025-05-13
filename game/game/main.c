#include "raylib.h"
#include <stdlib.h>
#include <time.h>

int main(void) {
    InitWindow(800, 600, "Meu Jogo com Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("GAME1 - PIF!", 300, 280, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
