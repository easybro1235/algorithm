#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> L;
    list<char>::iterator cursor;
    string a;
    cin >> a;
    for (char c : a) {
        L.push_back(c); //초기 입력 처리        
    }
    cursor = L.end();
    int m; char k; //횟수, 기능
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> k;
        if (k == 'L') {
            if (cursor != L.begin()) cursor--;
        }
        else if (k == 'D') {
            if (cursor != L.end()) cursor++;
        }        
        else if (k == 'P') {
            char n;
            cin >> n;
            L.insert(cursor, n);
        }
        else { //'B'일 때      
            if (cursor != L.begin()) {
                cursor = L.erase(--cursor);
            } 
        }
    }
    for (auto cod : L) {
        cout << cod;
    }
    return 0;
}
