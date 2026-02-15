#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; int m;
    cin >> n >> m;
    queue<int> Q;
    for(int i = 1; i <= n; i++) {
        Q.push(i); //큐에 넣기
    }
    cout << '<';
    while(n--) {
        for(int j = 1; j <= m; j++) {
        int num = Q.front();
        Q.pop();
        if(j != m) Q.push(num);
        else if(j == m) cout << num;
        }
        if(!Q.empty()) cout << ", ";
    }
    cout << '>';
    return 0;
}