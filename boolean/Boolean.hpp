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
#include <vector>

class Boolean {
public: 
    enum boolean {False, True};
private: 
    boolean v;
public:
    Boolean() : v(False){} //デフォルトコンストラクタ
    Boolean(int val) : v(val == 0 ? False:True){} //変換コンストラクタ
    //int型への変換関数
    operator int() const {return v;}  //Boolean型のオブジェクトをint型で取り出すゲッタ
    //const char型への変換関数
    operator const char() const {return v==False?'F':'T';}
    //const char*型への変換関数
    operator const char*() const {return v==False?"False":"True";}
    //Boolean型のオブジェクトをconst char*型で取り出すゲッタ
    //ユーザー定義変換では、自分でキャスト後の状態を設定できる
};

//出力ストリームsにxを挿入
inline std::ostream& operator<<(std::ostream& s, const Boolean& x){
    return s << static_cast<const char*>(x);
}
#endif // Point2D_HPP_