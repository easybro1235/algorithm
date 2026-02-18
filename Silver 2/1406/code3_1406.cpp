#include <bits/stdc++.h>
using namespace std;

// BOJ 1406
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> a;
    char input, input2;
    int num;
    list<char>::iterator cursor = a.begin();
    string first_input;
    cin >> first_input;
    for (auto ch : first_input) {
        a.push_back(ch);
    }
    cursor = a.end();

    cin >> num;
    while (num--) {
        cin >> input; 
        if (input == 'L') {
            if (cursor != a.begin()) cursor--;
        } else if (input == 'D') {
            if (cursor != a.end()) cursor++;
        } else if (input == 'B') {
            if (cursor != a.begin()) {
                --cursor;
                cursor = a.erase(cursor);
            }
        } else if (input == 'P') {
            cin >> input2;
            a.insert(cursor, input2);
        }
    }

    for (auto k : a) {
        cout << k;
    }

#ifndef ONLINE_JUDGE
    cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
    system("pause");
#endif
    return 0;
}
