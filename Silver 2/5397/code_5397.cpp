#include <bits/stdc++.h>
using namespace std;
//BOJ 5397
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    string encrypt;
    list<char> password;
    list<char>::iterator cursor;
    while(num--) {        
        cursor = password.begin(); //커서 처음으로 복귀
        cin >> encrypt;
        for(auto k : encrypt) {
            if(k == '<') {
                if(cursor != password.begin()) cursor--; //왼쪽으로 이동
            }else if(k == '>') {
                if(cursor != password.end()) cursor++; //오른쪽으로 이동
            }else if(k == '-') {
                if(cursor != password.begin()) cursor = password.erase(--cursor); //내용 삭제
            }
            else password.insert(cursor, k);
        }
        for(auto m : password) {
            cout << m;
        }
        cout << '\n';
        password.clear(); //매 출력 후 초기화
    }
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
