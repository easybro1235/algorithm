#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
bool vis[102][102];
int dx[4] = {-1, 1, 0, 0}; //상, 하
int dy[4] = {0, 0, -1, 1}; //좌, 우

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        for(int j = 0; j < m; j++) {
            board[i][j] = a[j] - '0'; //문자열 형태의 입력을 숫자로 분리
        }
    }
    queue<pair<int, int>> Q;
    Q.push({0, 0});
    vis[0][0] = 1;
    while(!Q.empty()) {
        int xx;
        int yy;
        pair<int, int> cur = Q.front(); Q.pop();
        for(int k = 0; k < 4; k++) {
            xx = cur.X + dx[k];
            yy = cur.Y + dy[k];
            if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue; //범위를 벗어나면 패스
            if(board[xx][yy] == 0 || vis[xx][yy]) continue; //1이 아니거나 이미 방문했으면 패스
            Q.push({xx, yy});
            vis[xx][yy] = 1;
            board[xx][yy] = board[cur.X][cur.Y] + 1;
        }         
    }
    cout << board[n-1][m-1];
    return 0;
}
