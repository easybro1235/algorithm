#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; int x; int y; int num;
    int q1 = 0; int q2 = 0; int q3 = 0; int q4 = 0; int axis = 0;
    cin >> n;
    while(n--) {
        cin >> x >> y;
        num = x * y;
        if(num == 0) axis++;
        else if(num > 0 && x > 0) q1++;
        else if(num > 0 && x < 0) q3++;
        else if(num < 0 && x > 0) q4++;
        else q2++; 
    }
    cout << "Q1: " << q1 << '\n';
    cout << "Q2: " << q2 << '\n';
    cout << "Q3: " << q3 << '\n';
    cout << "Q4: " << q4 << '\n';
    cout << "AXIS: " << axis << '\n';
    return 0;
}
