#include <iostream>
#include "List.h"
using namespace std;

int main(){
    List a(0);
    a.add(1);
    a.add(6);
    a.printList();
    a.remove(0);
    a.printList();
 return 0;
}