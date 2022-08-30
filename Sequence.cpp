#include "Sequence.hpp"

string Fire::name(){
    return "fire";
}

float Fire::showAttackPower() {
    cout << param.attackPower << endl;
    return param.attackPower;
}

void printState(){
    cout << static_cast<int>(state) << endl; 
}



// int Fire::attackPower(){
//     return 100;
// }