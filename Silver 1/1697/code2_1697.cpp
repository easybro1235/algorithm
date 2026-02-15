#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int dist[MAX];
    queue<int> Q;
    int n; int k;
    cin >> n >> k;
    fill(dist, dist + MAX, -1);
    if(k <= n) {
        cout << n - k; //시간복잡도 O(1)일 때이다. 동생이 수빈보다 뒤에 있으면 후진(n-k)번밖에 답이 없다.
        return 0;
    }
    dist[n] = 0;
    Q.push(n); //수빈의 현재 위치에 방문했다는 표시 남기기
    while(dist[k] == -1) { //동생의 위치에 방문할 때까지
        int cur = Q.front(); Q.pop();
        if(cur + 1 >= 1 && cur + 1 <= 100000 && dist[cur + 1] == -1) {
            dist[cur + 1] = dist[cur] + 1; //방문 표시
            Q.push(cur + 1); //X+1로 이동하는 경우를 큐에 넣기
        }
        if(cur - 1 >= 0 && dist[cur - 1] == -1) {
            dist[cur - 1] = dist[cur] + 1;
            Q.push(cur - 1); //X-1로 이동하는 경우를 큐에 넣기
        }
        if(cur * 2 >= 100000 && dist[cur * 2] == -1) {
            dist[cur * 2] = dist[cur] + 1;
            Q.push(cur * 2); //2*X로 이동하는 경우를 큐에 넣기
        }
    }
    cout << dist[k];
    // your code here
    return 0;
}
