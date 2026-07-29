#ifndef PLAYER_H
#define PLAYER_H
#pragma once


#include <iostream>
using namespace std;
#include "Peice.h"
enum class Colour {RED , GREEN , BLUE , YELLOW};

class Player{
    private:
        Peice peices[4];
        int currentPeices;
        Colour colour;
        int* diceNumbers;
    public:
        Peice unlockPeice();
        void move();
        int* rollDice();
        void positions();
        int peiceDecider(int unlocked);
        void kill();
        
    Player(Colour colour){
        currentPeices = 0;
        this->colour = colour;
        std::cout << "Player constructed"<<endl;
    }
    Player(){}
};
#endif