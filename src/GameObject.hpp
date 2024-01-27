#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP
#include "Pos.hpp"

class GameObj {
private:
    Pos pos;
    char SkinC;
public:
    GameObj(Pos s, char Skin) {
        this->pos = s;
        this->SkinC = Skin;
    }

    void SetPos(int x,int y) {
        this->pos = {x,y};
        return;
    }
    
    char Draw() {
        return this->SkinC;
    }
};

#endif