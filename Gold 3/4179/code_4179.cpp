#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1001][1001];
int dist1[1001][1001];
int dist2[1001][1001];

int dx[4] = {-1, 1, 0, 0}; //상, 하
int dy[4] = {0, 0, -1, 1}; //좌, 우

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int R; int C; //R = 행, C = 열
    pair<int, int> p1; pair<int, int> p2;
    int xx1; int yy1;
    int xx2; int yy2;
    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;
    cin >> R >> C;
    string str;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(board[i][j] == 'F'){
                Q1.push({i,j});
                dist1[i][j] = 0;        
            }
            if(board[i][j] == 'J'){
                Q2.push({i,j});
                dist2[i][j] = 0;
            }
        }
    } 

    while(!Q1.empty()) { //불 bfs
        pair<int, int> cur1 = Q1.front(); Q1.pop();
        for(int num = 0; num < 4; num++) {
            xx1 = cur1.X + dx[num];
            yy1 = cur1.Y + dy[num];
            if(xx1 < 0 || xx1 >= R || yy1 < 0 || yy1 >= C) continue; //범위 벗어나면 pass
            if(board[xx1][yy1] == '#' || dist1[xx1][yy1] != -1) continue; // 벽이거나 이미 방문했으면 pass
            Q1.push({xx1, yy1});
            dist1[xx1][yy1] = dist1[cur1.X][cur1.Y] + 1; //거리 1 증가 및 방문 표시   
        }
    }
   
    while(!Q2.empty()) { //지훈 bfs
        pair<int, int> cur2 = Q2.front(); Q2.pop();
        for(int num = 0; num < 4; num++) {
            xx2 = cur2.X + dx[num];
            yy2 = cur2.Y + dy[num];
            if(xx2 < 0 || xx2 >= R || yy2 < 0 || yy2 >= C) {
                cout << dist2[cur2.X][cur2.Y] + 1;
                return 0;
            }
            if(board[xx2][yy2] == '#' || dist2[xx2][yy2] >= 0) continue; // 벽이거나 이미 방문했으면 pass
            if(dist1[xx2][yy2] != -1 && dist2[cur2.X][cur2.Y] + 1 >= dist1[xx2][yy2]) continue; //불과 동시에 아님 불보다 늦게 도착하면 pass
            Q2.push({xx2, yy2});
            dist2[xx2][yy2] = dist2[cur2.X][cur2.Y] + 1; //거리 1 증가 및 방문 표시        
        }
    }
    
    cout << "IMPOSSIBLE"; //빠져나가지 못할 때
    return 0;
}
