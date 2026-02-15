#include <bits/stdc++.h>
using namespace std;
int alpha[26]; // -1로 초기화 필요
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(alpha, alpha + 26, -1); // 배열 전체 -1로 초기화
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        int idx = str[i] - 'a';
        if (alpha[idx] == -1) {
            alpha[idx] = i;
        }
    }
    for (int j = 0; j < 26; j++) {
        cout << alpha[j] << ' ';
    }
    return 0;
}