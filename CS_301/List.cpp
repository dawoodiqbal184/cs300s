#include <iostream>
#include "List.h"
using namespace std;

void List::arrCpy(int* source, int* destination){
    for (int i = 0 ; i < size ; i++){
        destination[i] = source[i] ;
    }
}


void List::grow(){
    int *array = new int [size + 1];
    arrCpy(ptr , array);
    delete[]ptr;
    ptr = array;
    array = nullptr;
    size += 1;
}


void List::shift(int index){
    for (int i = index ; i < size  ; i++){
        ptr[i] = ptr[i + 1];
    }
}


void List::shrink(){
    size -= 1;
    int* array = new int[size];
    arrCpy(ptr , array);
    delete[]ptr;
    ptr = array;
    array = nullptr;
}

void List::add(int number){
    grow();
    ptr[size - 1] = number;
}

void List::remove(int index){
    shift(index);
    shrink();
}

void List::printList(){
    std::cout << "The list is : {";
    for (int i = 0 ; i < size ; i++){
        std::cout << ptr[i] << " ";
    }
    std::cout << "}"<<std::endl;
}