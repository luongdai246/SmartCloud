#pragma once
class Game_setup
{
public:
	Game_setup(bool* quit, int passed_ScreenWidth, int passed_ScreenHeight);
	~Game_setup();
	SDL_Renderer* GetRenderer();
	SDL_Event* GetMainEvent();
	void Begin();
	void End();

private:
	SDL_Window* window;

	SDL_Renderer* renderer;

	SDL_Event* mainEvent;
};

