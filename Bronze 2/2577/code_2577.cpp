#include <bits/stdc++.h>
using namespace std;
//BOJ 2577
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    int num[10] = {0}; 
    cin >> a >> b >> c;
    d = a * b * c;
    string str = to_string(d);
    for(char a: str) {
        num[a - '0']++;
    }
    for(int k: num) {
        cout << k << '\n';
    }
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
