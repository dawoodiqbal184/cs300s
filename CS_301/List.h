#pragma once
#ifndef LIST_H
#define LIST_H

class List{
    private:
        int size = 0;
        int *ptr;
    public:
        void add(int number);
        void remove(int index);
        void printList();
        void grow();
        void shrink();
        void arrCpy(int* source, int* destination);
        void shift(int index);
    List(int size){
        this->size = size;
        ptr = new int[size];
    }
    ~List(){
        delete[]ptr;
        ptr = nullptr;
    }
};

#endif