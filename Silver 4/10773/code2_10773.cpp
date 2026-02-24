#include <bits/stdc++.h>
#define MX 100005
using namespace std;
//BOJ 10773
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    int stk[MX] = {0};
    int pos = 0;
    long long result = 0;
    cin >> num;
    while (num--) {
        int money;
        cin >> money;
        if (money == 0) {
            if (pos > 0) --pos;
        }
        else stk[pos++] = money;
    }
    for (int a = 0; a < pos; a++) result += stk[a];
    cout << result << '\n';

    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
