#include <iostream>
#include "Peice.h"
#include "Player.h"
using namespace std;

int main(){
    Player red(Colour::RED);
    red.positions();
    red.rollDice();
}