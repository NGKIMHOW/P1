#pragma once
#include"GameState.h"
#include"GTimer.h"
#include <vector>
class GameStateManager
{
private:
	GameStateManager();
	~GameStateManager();
	static GameStateManager* sInstance;
	std::vector<GameState*>gameStateList;
	GameState* currentGameState;

	GTimer* gTimer = NULL;
public:
	enum GAMESTATENAME {
		LEVEL_1,
		LEVEL_2
	};

	static GameStateManager* getInstance();
	static void releaseInstance(); 

	void update();
	void draw();
	void changeGameState(int index);
};

