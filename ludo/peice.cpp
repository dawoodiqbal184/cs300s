#include "Peice.h"

// functions gets the current position
int Peice::getPosition(){
 return position;
}

// function sets the current position
void Peice::updatePosition(int number){
 this->position += number;
}

// functions gets the state
void Peice::setStatus(Status upcoming){
 this->state = upcoming;
}

// function chages the state of peice
Status Peice::getStatus(){
 return this->state;
}