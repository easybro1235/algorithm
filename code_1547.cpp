#include <bits/stdc++.h>
using namespace std;
int cup[3] = {0};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int a; int b;
    cin >> n;
    cup[0] = 1;
    while(n--) {
        cin >> a >> b;
        if(a > 3 || a < 1 || b > 3 || b < 1) continue;
        swap(cup[a - 1], cup[b - 1]);
    }
    for(int i = 0; i < 3; i++) {
        if(cup[i]) cout << i + 1;
    }
    return 0;
}
