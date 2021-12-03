// CP 2020 Digital Character Sheet
// Program Driver
// By TheBeerex

#include "Engine.cpp"

using namespace std;

int main(){
    Engine theEngine;
    string input;

    theEngine.cyberPrint();

    do{
        theEngine.printOptions();
        theEngine.getAndUseOptionInput();
    }while(theEngine.running);

}