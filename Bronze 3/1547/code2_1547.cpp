#include <bits/stdc++.h>
using namespace std;
bool cup[3] = {true, false, false};
void cupShuffle(int a, int b) {
    if(cup[a - 1] || cup[b - 1]) {
        cup[a - 1] = !cup[a - 1]; 
        cup[b - 1] = !cup[b - 1];
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int a; int b;
    cin >> n;
    cup[0] = 1;
    while(n--) {
        cin >> a >> b;
        if(a > 3 || a < 1 || b > 3 || b < 1 || a == b) continue;
        cupShuffle(a, b);
    }
    for(int i = 0; i < 3; i++) {
        if(cup[i]) cout << i + 1;
    }
    return 0;
}
