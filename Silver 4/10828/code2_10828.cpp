#include <bits/stdc++.h>
#define MX 1000005
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int stk[MX];
    int head, tail;
    head = tail = 0;
    int num, ele;
    string str;
    cin >> num;
    while (num--)
    {
        cin >> str;
        if (str == "push") {
            cin >> ele;
            stk[tail++] = ele;
        }
        else if (str == "pop") {
            if (head != tail) { //스택이 비어있지 않으면
                cout << stk[--tail] << '\n';
            }
            else cout << "-1" << '\n';
        }
        else if (str == "size") {
            cout << tail - head << '\n';
        }
        else if (str == "empty") {
            if (head != tail) {
                cout << "0" << '\n';
            }
            else cout << "-1" << '\n';
        }
        else {
            if (head != tail) { //스택이 비어있지 않으면
                cout << stk[tail - 1] << '\n';
            }
            else cout << "-1" << '\n';
        }
    }
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
