#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; string a; int cnt = 0; int score = 0;
    cin >> n;
    while(n--) {
        cnt = 0;
        score = 0;
        cin >> a;
        for(char k : a) {
            if(k == 'O') {
                cnt++; //콤보 적립
            }
            else {
                score += (cnt * (cnt + 1)) / 2; //등차수열의 합
                cnt = 0;
            }
        }
        score += (cnt * (cnt + 1)) / 2; //마지막 문제까지 포함, cnt가 0이면 의미 없음
        cout << score << '\n';
    }
    return 0;
}
