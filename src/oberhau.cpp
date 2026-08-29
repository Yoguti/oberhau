#include "raylib.h"
#include <iostream>
#include <string>


int main(int argc, char* argv[]) {
    auto window_width = 800;
    auto window_height = 450;
    std::string title = "OBERHAU";

    InitWindow(window_width, window_height, title.c_str());


    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };  // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type

    
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode3D(camera);


        EndMode3D();
        DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}