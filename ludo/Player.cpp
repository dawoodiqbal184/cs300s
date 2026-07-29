#include <iostream>
#include "Peice.h"
#include "Player.h"
using namespace std;

// helper functions
void grow(int* &ptr , int &size){
    int* array = new int[size];
    for (int i = 0 ; i < size ; i++){
        array[i] = ptr[i];
    }
    delete[] ptr;
    ptr = array;
    array = nullptr;
    size += 1;
}

void output(int* array , int size){
    for (int i = 0 ; i < size ; i++){
        cout << array[i]<<" ,";
    }
    cout << endl;
}



// function that rolls the dice
int* Player::rollDice(){
    int i = 0;
    int* dice = new int;
    int num = 1 + rand()%6;  // rolling dice
    if (num == 6){
        dice[i] = num;
        i++;
        grow(dice , i);
        int num = 1 + rand()%6; // rolling again
        if (num == 6){
            grow(dice , i);
            dice[i] = num;
            i++;
            int num = 1 + rand ()%6;  // rolling again
            if (num == 6){
                cout << "Oops! You got three sixes in a row and count is zero\n";
                return nullptr;
            }
            else  {
                dice[i] = num;
                i++;
                cout << "Dice rolled and got : ";
                output(dice , i);
             return dice;
            }
        }
        else {
            dice[i] = num;
            i++;
            cout << "Dice rolled and got : ";
            output(dice , i);
         return dice;
        }
    }
    else {
        dice[i] = num;
        i++;
        cout << "Dice rolled and got : ";
        output(dice , i);
     return dice;
    }
}


void Player::positions(){
    for (int i = 0 ; i < 4 ; i++) cout << peices[i].getPosition()<<" ,";
    cout << endl;
}


// function that moves the peice
 void Player::move(){
    diceNumbers = rollDice();
    int y = (sizeof(diceNumbers) / 4 );
    int x;
    for (int i = 0 ; i < y ; i++){
        cout << "Which peice do you want to move : ";
        cin >> x;
        cout << flush;
        
    }
    

 }



/*
int peiceDecider(){
    static int x = 0;
    x++;
    if(x >= this->currentPeices) x = 0;
 return x;
}

Peice Player::unlockPeice(){
    Peice* array = new Peice[unlocked+1];
    
}
*/
