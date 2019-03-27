#pragma once
class Sprite
{
public:
	Sprite(Game_setup *game_setup, std::string path, int x, int y, int w, int h);
	~Sprite();
	void Draw();
	void SetX(int x);
	void SetY(int y);
	void UpdateControl();
	void UpdateMovement();
	void Movement();
	int GetX();
	int GetY();
private:
	SDL_Event *game_event;
	SDL_Renderer *renderer;
	SDL_Texture* image;
	SDL_Rect rect;
	long long int timeCheck;
	bool moveLeft;
	bool moveRight;
};

