#include <bits/stdc++.h>
using namespace std;
//BOJ 10808

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    vector<int> alpha(26, 0);
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        alpha[str[i]-'a']++;
    }
    for(int a: alpha) {
        cout << a << ' ';
    }
    cout << endl;    
    system("pause");
    return 0;
}
