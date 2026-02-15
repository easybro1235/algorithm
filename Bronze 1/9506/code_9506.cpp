#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);        
    while(true) {
        int n; int cnt = 0; vector<int> meas;
        cin >> n;
        if(n == -1) break; //-1이 입력될 때까지 반복
        for(int i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                cnt += i; //완전수인지 확인 중
                meas.push_back(i);
            }
        }
        if(cnt == n) { //완전수일 때
            cout << n << " = ";
            for(int a = 0; a < meas.size(); a++) {
                cout << meas[a];
                if(a != meas.size() - 1) cout << " + "; //마지막에는 출력 안함                ;
            }
            cout << '\n';
        }
        else {
            cout << n << " is NOT perfect." << '\n';
        }        
    }
    return 0;
}
