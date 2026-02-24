#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    list<int> joseph;
    list<int>::iterator cursor = joseph.begin();
    for(int a = 1; a <= 7; a++) {
        joseph.push_back(a);
    }
    while(b--) {
        for(list<int>::iterator k = joseph.begin(); k != joseph.end(); ++k)
        return;
    }
    // your code here
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
