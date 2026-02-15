#include <bits/stdc++.h>
using namespace std;
int alpha[26];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str; int max = 0; int max_index = 0; int istrue = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        str[i] = toupper(str[i]);
    }
    for(char a : str) {
        alpha[a - 'A']++;
    }
    for(int i = 0; i < 26; i++) {
        if(max <= alpha[i]) {
        max = alpha[i];
        max_index = i;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(max == alpha[i]) istrue++;
    }
    if(istrue > 1) cout << '?';
    else cout << char(max_index + 65);
    return 0;
}
