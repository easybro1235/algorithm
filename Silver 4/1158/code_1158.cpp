#include <bits/stdc++.h>
using namespace std;
const int MX = 10000005;
int dat[MX]; int pre[MX]; int nxt[MX];
int unused = 1;

void erase(int addr) {
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    if (pre[addr] != -1) nxt[pre[addr]] = nxt[addr];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    int n; int m;
    int cursor = 0;
    cin >> n >> m;
    queue<int> Q;
    for(int i = 1; i <= n; i++) {
        dat[i] = i;
        pre[i] = i - 1;
        nxt[i] = i + 1;
    }
    nxt[n] = 1; //원형 배열 특징1
    pre[1] = n; //원형 배열 특징2
    while(n--) { //n번 반복
        for(int j = 0; j < m; j++) { //m번 반복
            cursor = nxt[cursor]; //다음으로 연결된 원소로 이동
        }
        Q.push(dat[cursor]); //큐에 추가
        int to_erase = cursor;
        cursor = pre[cursor];
        erase(to_erase);
    }
    cout << '<';
    while(!Q.empty()) {
        int a = Q.front(); Q.pop();
        cout << a;
        if(!Q.empty()) cout << ", ";
    }
    cout << '>';
    return 0;
}
