#include "Engine.h"
#include "raylib.h"
#include "Log.h"

Engine::Engine() {
	Log::print("Engine creado");
}

void Engine::intialize() {
	// Initialization code here
	InitWindow(800, 450, "Raylib Basics Engine");
	SetTargetFPS(60);
	Log::print("Se inicializo engine");
}

void Engine::run() {
	// Main loop code here
	while (!WindowShouldClose()) {
		update();
		render();
	}
}

void Engine::update() {
	// Update logic here
}


void Engine::render() {
	// Rendering code here
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawText("Raylib Basics Engine Running!", 190, 200, 20, LIGHTGRAY);
	EndDrawing();
}


void Engine::shutdown() {
	// Shutdown code here
	CloseWindow();
	Log::print("Se cerro engine");
}