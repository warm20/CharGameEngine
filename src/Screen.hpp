#ifndef SCREEN_HPP
#define SCREEN_HPP
#include "./GameObject.hpp"
#include <iostream>
#include <string>
using namespace std;

class Screen {
private:
    GameObj **objs;
    int len_objs;
    int width;
    int height;
    string name;
public:
    Screen(int w,int h, string name) {
        this->width = w;
        this->height = h;
        this->name = name;
        this->len_objs = 0;
    }

    void AppendObj(GameObj *obj) {
        
    }
};

#endif