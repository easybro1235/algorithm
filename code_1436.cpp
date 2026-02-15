#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int cnt = 0;
    cin >> n;
    for(int i = 1; i < 10000000; i++) {
        string s = to_string(i);
        if (s.find("666") != string::npos) {
            cnt++;
        }
        if(n == cnt) {
            cout << i;
            return 0;
        }
    }
}
