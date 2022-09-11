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

class Complex {
private:
    double re, im;
public:
    Complex(double r=0, double i=0) : re(r), im(i){};
    operator const char*() const{ return "re+im";}

    //const参照でないと、引数に定数をとれない(定数はconst doubleなど)
    friend Complex operator+(const Complex& x, const Complex& y){
        return Complex(x.re+y.re, x.im+y.im);
    }
    friend Complex operator-(const Complex& x, const Complex& y){
        return Complex(x.re-y.re, x.im-y.im);
    }
    double x() {return re;}
    double y() {return im;}
    void print(){
        std::cout << "(" <<re<<","<<im<<")"<<std::endl; 
    }
};

#endif // Point2D_HPP_