#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
 
/* 4 方向への隣接頂点への移動を表すベクトル */
const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };
 
 
int main() {
 
    //////////////////////////////////////// 
    /* 入力受け取り */
    ////////////////////////////////////////
 
    /* 縦と横の長さ */
    int r, c;
    cin >> c >> r;
  
    int sy, sx, gy, gx;
  
    /* 盤面 */
    vector<vector<char>> field(r,vector<char>(c));
    for (int i = 0; i < r; ++i){
      for (int j=0; j<c; ++j){
        cin >> field[i][j];
            if(field[i][j] == 's'){
                sx = j; sy = i;
            }
            if(field[i][j] == 'g'){
                gx = j; gy = i;
            }
        }
    }
    
     for (int i = 0; i < r; ++i){
      for (int j=0; j<c; ++j){
        cerr << field[i][j];
    }
    cerr << endl;

     }
 
 
    ////////////////////////////////////////
    /* 幅優先探索の初期設定 */
    ////////////////////////////////////////
 
    // 各セルの最短距離 (訪れていないところは -1 としておく)
    vector<vector<int> > dist(r, vector<int>(r, -1)); 
    dist[sy][sx] = 0; // スタートを 0 に
 
    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    queue<pair<int, int> > que; 
    que.push(make_pair(sy, sx)); // スタートを push
    cerr << sx << ":" << sy << endl;
 
 
    ////////////////////////////////////////
    /* 幅優先探索を実施 */
    ////////////////////////////////////////    
 
    /* キューが空になるまで */
    while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int y = current_pos.first;
        int x = current_pos.second;
        que.pop(); // キューから pop を忘れずに
 
        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_y = y + dy[direction];
            int next_x = x + dx[direction];
            if (next_y <= -1 || next_y >= c || next_x <= -1 || next_x >= r) continue; // 場外アウトならダメ
            if (field[next_y][next_x] == '1') continue; // 壁はダメ
 
                   
            // まだ見ていない頂点なら push
            if (dist[next_y][next_x] == -1) {
                que.push(make_pair(next_y, next_x));
                dist[next_y][next_x] = dist[y][x] + 1; // (next_x, next_y) の距離も更新
                }
        }
    }
 
    if(dist[gy][gx] == -1){
        cout << "Fail" << endl;
    } else {
        cout << dist[gy][gx] << endl;
    }
  
}