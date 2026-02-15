#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; vector<int> meas; int siz;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        meas.push_back(k);
    }
    sort(meas.begin(), meas.end());
    siz = meas.size();
    if(siz > 1) cout << meas[0] * meas[siz-1];
    else cout << meas[0] * meas[0];
    return 0;
}
