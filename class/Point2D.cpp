/**
 * @file Point2D.cpp
 * @author sakasu
 * @version 0.1
 * @date 2022-09-11
 * @brief 
 * @details 
 */
#include "Point2D.hpp"

int Point2D::counter = 0;

Point2D::Point2D(int x, int y) : xp(x), yp(y){
    id_no = ++counter;
};

int Point2D::get_max_id(){
    return counter;
}
