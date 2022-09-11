/**
 * @file Point2D.hpp
 * @author sakasu
 * @version 0.1
 * @date 2022-09-11
 * @brief 
 * @details 
 */
#ifndef Point2D_HPP_
#define Point2D_HPP_
#include <iostream>

class Point2D{
private:
    int xp,yp;
    int id_no;
    static int counter; //class内でアクセス可能なグローバル辺陬
public:
    Point2D(int x=0, int y=0);
    int id() const {return id_no;}
    void print() const {
        std::cout << "(" << xp <<","<< yp <<")" << std::endl;
    }
    static int get_max_id();
};

#endif // Point2D_HPP_