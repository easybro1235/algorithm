#include <bits/stdc++.h>
using namespace std;
//BOJ 1475
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int room;
    int cnt = 0;
    cin >> room;
    string str = to_string(room);
    int num[10] ;
    memset(num, 0, sizeof(int)*10);
    for(char a: str) {
        num[a - '0']++; //카드 소진하기
    }
    if((num[6]+num[9])%2==0) num[6] = (num[6] + num[9])/2; //짝수일 때
    else num[6] = (num[6] + num[9] + 1)/2;
    num[9] = 0;
    for(int k: num) {
        if(cnt < k) cnt = k;
    }
    cout << cnt << '\n';
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
