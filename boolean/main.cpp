/**
 * @file Point2D.cpp
 * @author sakasu
 * @version 0.1
 * @date 2022-09-11
 * @brief 
 * @details 
 */
#include "Boolean.hpp"
using namespace std;

//ただのBoolean型の返却
Boolean int_eq(int x, int y){
    return x == y;
}

int main (){
    int n;
    Boolean a;
    Boolean b = 200;
    vector<Boolean> c(2);
    c[0] = int_eq(0,2);
    c[1] = int_eq(0,0);

    cout << static_cast<int>(a) << endl;
    cout << char(b) << endl;
    cout << static_cast<const char*>(a) << endl;
    cout << static_cast<const char*>(b) << endl;
    cout << static_cast<const char*>(c[0]) << endl;
    cout << static_cast<const char*>(c[1]) << endl;
}
