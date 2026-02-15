#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string num;
    cin >> num;
    int k = num.length();
    sort(num.begin(), num.end(), greater<char>());
    cout << num;
    return 0;
}