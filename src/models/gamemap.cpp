#include "gamemap.h"

GameMap::GameMap(int setWidth, int setHeight) : width(setWidth), height(setHeight){
    player = new Player(1, 0, 0); 
}; 

void GameMap::update() {
    
    player -> update();

    std::vector<int>* indexesToRemove = new std::vector<int>();
  
    delete indexesToRemove;
    
}
  
int GameMap::getWidth() const {
    return width;
}

int GameMap::getHeight() const {
    return height;
}

Player* GameMap::getPlayer() const {
    return player;
}
 

GameMap::~GameMap() {
    delete player;  
}
 

