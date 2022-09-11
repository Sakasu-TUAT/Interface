/**
 * @file Point2D.cpp
 * @author sakasu
 * @version 0.1
 * @date 2022-09-11
 * @brief 
 * @details 
 */

using namespace std;

#include "Point2D.hpp"

int main (){
    Point2D p;
    Point2D q(2,4);
    Point2D r;
    Point2D a[] = {Point2D(1,1), Point2D(0,5)};
    cout <<p.get_max_id() << endl;
    cout <<q.get_max_id() << endl;
    cout << Point2D::get_max_id() << endl; //staticな関数はオブジェクトを介さず呼べる
    a[0].print();
    a[1].print();
}

/*
・クラス内で共通のメモリで済ませたい(オブジェクトを生成するたびにメモリを確保する必要のない)
変数はstaticにしておく
・クラス内でオブジェクトを介さずにアクセスしたいメソッドはstaticにしておく
・static const Type 変数 = 0;は可能だが、constじゃなければclass外で初期化する必要あり*/