#ifndef PEICE_H
#define PEICE_H
#pragma once

#include <iostream>
using namespace std;
enum class Status {LOCKED , UNLOCKED , WON};
class Peice{
    private :
        int position ;
        Status state;
    public :
        int getPosition();
        void updatePosition(int number);
        void setStatus(Status upcoming);
        Status getStatus();
    Peice(){
        position = -6;
        state = Status::LOCKED;
        std::cout << "Peice constructed"<<endl;
    }

};
#endif



