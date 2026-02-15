#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1001][1001];
bool vis[1001][1001];

int dx[4] = {-1, 1, 0, 0}; //상, 하
int dy[4] = {0, 0, -1, 1}; //좌, 우

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m; int n; //m이 열, n이 행
    int mx = 0;
    bool real = false;
    cin >> m >> n;
    queue<pair<int, int>> Q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
            if(board[i][j] == 0) { //처음부터 모든 조건을 만족하면 bfs까지 갈 필요 없다.
                real = true;
            }
            if(board[i][j] == 1) {
                Q.push({i, j}); //초기값이 1인 경우 모두 push
                vis[i][j] = 1; //방문 표시
            }
        }
    }    
    
    if(!real) {
        cout << 0;
        return 0;
    }    
    
    while(!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        int xx;
        int yy;
        for(int num = 0; num < 4; num++) {
            xx = cur.X + dx[num];
            yy = cur.Y + dy[num];
            if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue; //범위를 벗어나면 pass
            if(board[xx][yy] != 0 || vis[xx][yy]) continue; //값이 0이 아니거나(1 혹은 -1) 이미 방문했으면 pass
            Q.push({xx, yy});
            vis[xx][yy] = 1;
            board[xx][yy] = board[cur.X][cur.Y] + 1;
            mx = max(board[xx][yy], mx); //가장 먼 거리의 토마토가 익는 시간
        }
    }
    for(int i = 0; i < n; i++) { //최종점검. 안 익은 토마토가 있는지.
        for(int j = 0; j < m; j++) {
            if (board[i][j] == 0) {
                cout << -1;
                return 0;
            } 
        }
    }
    cout << mx-1; //처음으로 익은 토마토가 이미 1이기에 빼주어야 한다.
    return 0;
}
