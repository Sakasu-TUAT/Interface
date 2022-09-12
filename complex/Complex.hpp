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

    double real() const {return re;}
    double imag() const {return im;}
    Complex operator+() const {return *this;}
    Complex operator-() const {return Complex(-re, -im);}

    //定数が来てもいいように、constをつけている
    Complex& operator+=(const Complex& x){
        re += x.re;
        im += x.im;
        return *this;
    }
    //複合代入演算子-=
    Complex& operator-=(const Complex& x){
        re -= x.re;
        im -= x.im;
        return *this;
    }
    //friendをつけると非メンバ関数となるのでメンバ変数にアクセスできなくなる
    //->計算する対象の変数は引数で用意
    friend bool operator==(const Complex& x, const Complex& y){
        return (x.re == y.re and x.im == y.im);
    }
    friend bool operator!=(const Complex& x, const Complex& y){
        return !(x==y);
    }
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