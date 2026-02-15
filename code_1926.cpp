/*
 * code.cpp
 *
 *  Created on: 2025. 7. 24.
 *      Author: user
 */
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[501][501];
bool vis[501][501];

int dx[4] = {1, 0, -1, 0}; //싱, 하
int dy[4] = {0, 1, 0, -1}; //좌, 우


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cnt = 0;

	int mx = 0;
	int m; int n;
	cin >> m >> n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(board[i][j] == 0 || vis[i][j]) continue; //보드에 1로 표시, 방문하지 않았다면
			queue<pair<int, int>> Q;
			Q.push({i, j});
			vis[i][j] = 1;
			cnt++; //다른 덩어리마다 플러스
			int area = 0;
			while(!Q.empty()) {
				area++;
				pair<int, int> cur = Q.front(); Q.pop();
				for(int num = 0; num < 4; num++) {
						int xx = cur.X + dx[num];
						int yy = cur.Y + dy[num];
						if(xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
						if(vis[xx][yy] || board[xx][yy] != 1) continue;
						Q.push({xx, yy});
						vis[xx][yy] = 1;
				}
			}
			mx = max(mx, area);
		}
	}
	cout << cnt << '\n' << mx;
}
