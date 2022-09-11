/**
 * @file Point2D.cpp
 * @author sakasu
 * @version 0.1
 * @date 2022-09-11
 * @brief 
 * @details 
 */

using namespace std;

#include "Complex.hpp"

int main (){
    Complex a(2.0, 20.4);
    Complex b(1.5, 2.5);
    cout << string(a) << endl;
    Complex c = a+b;
    Complex d = 7.5+b; 
    /*  friendを使って非メンバ関数とすることで、
        z=operator+(Complex(7.5)+b);となる
        ->演算対象の左オペランドが、そのクラス型とは
        異なる型での利用が想定される2項演算子(+-とか)
        関数は、クラスのメンバ関数ではなく、非メンバ関数
        として実現する。
    */
    cout << a.x() << "," << a.y() << endl;
    cout << b.x() << "," << b.y() << endl;
    cout << c.x() << "," << c.y() << endl;
    c.print();
    d.print();
}

/*
・クラス内で共通のメモリで済ませたい(オブジェクトを生成するたびにメモリを確保する必要のない)
変数はstaticにしておく
・クラス内でオブジェクトを介さずにアクセスしたいメソッドはstaticにしておく
・static const Type 変数 = 0;は可能だが、constじゃなければclass外で初期化する必要あり*/