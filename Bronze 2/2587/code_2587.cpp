#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num[5];
    int n; int hap = 0;
    for(int i = 0; i < 5; i++) {
        cin >> n;
        num[i] = n;
        hap += n;
    }
    sort(num, num+5);
    cout << hap / 5 << '\n' << num[2];
    // your code here
    return 0;
}
