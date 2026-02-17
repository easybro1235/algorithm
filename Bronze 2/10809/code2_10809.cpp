#include <bits/stdc++.h>
using namespace std;
//BOJ 10809
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    vector<int> alpha(26, -1);
    cin >> str;
    for(int a = str.length()-1; a >= 0 ; a--) {
        alpha[str[a]-'a'] = a;
    }
    for(int k: alpha) {
        cout << k << ' ';
    }

    // your code here
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
