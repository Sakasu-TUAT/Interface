/**
 * @file Sequence.hpp
 * @author Sakas
 * @brief 
 * @version 0.1
 * @date 2022-08-23
 * 
 */
#ifndef SEQUENCE_HPP
#define SEQUENCE_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>
#include <tuple>
#include <fstream>
using namespace std;

/**
 * @brief 無名名前空間を用いることで、内部結合にできる(インクルード先で展開される/外部結合なら共有)
 */
namespace {
    
enum class State {
    ready,
    go,
    sleep,
};

inline State& operator++(State& seq){
    switch (seq) {
        case State::ready: return seq = State::go;
        case State::go: return seq = State::sleep;
        default: return  seq = State::sleep;
    }
};

State state = State::sleep;

void printState(){
    switch (state) {
        case State::sleep: cout << "SLEEP" << endl;
        case State::ready: cout << "READY" << endl;
        case State::go:    cout << "GO" << endl;
        default: cout << "Hogeeee" << endl;
    }
}


};

enum class MagicType {
    fire,
    shiden,
};

class Magic {
public:
    struct Parameter{
    // virtual int costMagicPoints();
        virtual float attackPower() = 0;
    // virtual int costTechnicalPoint();
    };
    virtual string name() = 0;
    virtual float showAttackPower() = 0;
};

class Fire : public Magic {
private:
public: 
    struct Parameter{
        float attackPower;
    };
    const Parameter &param;

    Fire(const Parameter &fireParameter) :
        param(fireParameter)
    {};

    string name();
    float showAttackPower();
};

// class Shiden : public Magic {
// private:
// public: 
//     string name() {
//         return "shiden";
//     }
//     int attackPower(){
//         return 212021;
//     }
// };
#endif //SEQUENCE_HPP