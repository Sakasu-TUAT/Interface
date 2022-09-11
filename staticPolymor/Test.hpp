/**
 * @file Test.hpp
 * @author Sakas
 * @brief 
 * @version 0.1
 * @date 2022-08-23
 * 
 */

#ifndef TEST_HPP
#define TEST_HPP

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
#include <type_traits>
using namespace std;

/**
 * @brief 無名名前空間を用いることで、内部結合にできる(インクルード先で展開される/外部結合なら共有)
 */
namespace {

template<class T>
class Interface; //prototype

template<class T, bool isExtended = std::is_base_of<Interface<T>, T>::value>
class Upper {
    static_assert(isExtended, "T is not extended interface class");
};

template<class T>
class Upper<T, true>{
    T _obj;
    public:
        void print(){ _obj.print(); };
};
    

template<class T>
class Interface{
public:
    void print(){ static_cast<T &>(this)->print(); }
    struct Parameter{};
};

class myclass1 : Interface<myclass1> {
public:
    void print(){ std::cout << "myclass1" << std::endl; }
};

class myclass2 : Interface<myclass2> {
public:
    void print(){ std::cout << "myclass2" << std::endl; }
};

// class myclass3 : Interface<myclass3> {
// };

// class myclass4 {
//     void print(){ std::cout << "myclass3" << std::endl; }
// };

enum class state {
    SLEEP,
    MANUAL,
    AUTO,
};
enum class drive {
    SLEEP,
    MANUAL,
    AUTO,
};

template<class T>
using my_map = map<T,state>;

my_map<myclass1> table = {myclass2, drive};



}

#endif //SEQUENCE_HPP