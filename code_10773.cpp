#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int hap = 0; int m;
    cin >> n;
    stack<int> S;
    while(n--) {
        int k;
        cin >> k;
        if(k == 0) S.pop();
        else S.push(k);
    }
    while(!S.empty()) {
        m = S.top(); S.pop();
        hap += m;
    }
    cout << hap;
    return 0;
}
