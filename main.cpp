#include <iostream>
#include "raylib.h"

int main() {
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 1200;
    
    Color bgCol = { 30, 30, 30, 255 };
    Color circleCol = { 0, 255, 65, 255 };

    InitWindow(screenWidth, screenHeight, "Raylib - Graphics Break");
    
    double circleY = 600.0;
    double acceleration = 9.80665;
    
    // Main game loop
    while (!WindowShouldClose()) {
        DrawFPS(10, 10);
        
        circleY += acceleration * GetFrameTime() * 60.0;
        if (circleY >= 1160 || circleY <= 40) {
          acceleration *= -1;
        }
        
        BeginDrawing();
          ClearBackground(bgCol);
          DrawCircle(screenWidth/2, circleY, 40, circleCol);
          DrawRectangle(370, 200, 30, 50, BLUE);
        EndDrawing();
    }

    CloseWindow(); 
    return 0;
}
