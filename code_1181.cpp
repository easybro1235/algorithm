#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // 입력
    int n;
    vector<string> V;
    cin >> n;
    
    // 문자열 입력 받기
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        V.push_back(str);
    }
    
    // 1. 일단 사전순 정렬
    sort(V.begin(), V.end());
    
    // 2. 중복 제거
    V.erase(unique(V.begin(), V.end()), V.end());
    
    // 3. 길이순, 길이가 같으면 사전순 정렬
    sort(V.begin(), V.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });
    
    // 4. 출력
    for(const auto& str : V) {
        cout << str << '\n';
    }
    
    return 0;
}
