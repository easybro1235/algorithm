#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int dist[MAX];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> Q;
    int n; int k;
    fill(dist, dist + MAX, -1);
    cin >> n >> k;
    if(n >= k) {
        cout << n - k;
        return 0;
    }
    dist[n] = 0;
    Q.push(n);
    while(dist[k] == -1) { //목적지에 도달할 때까지 계속 진행
        int cur = Q.front(); Q.pop();
        for(int a : {cur - 1, cur + 1, cur * 2}) {
            if(a < 0 || a > MAX) continue;
            if(dist[a] != -1) continue;
            dist[a] = 1 + dist[cur];
            Q.push(a);
        }
    }
    cout << dist[k];
    return 0;
}
