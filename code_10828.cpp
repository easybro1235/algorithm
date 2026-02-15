#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;
int pos = 0;
int que[MX];

void push(int a) {
    que[pos++] = a;
}
int pop() {
    if(pos != 0) return que[--pos];
    return -1;
}
int size() {
    return pos;
}
int empty() {
    return pos == 0;
}
int top() {
    if(pos != 0) return que[pos - 1];
    else return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        string order;
        cin >> order;
        if(order == "push") {
            int real;
            cin >> real;
            push(real);
        }
        else if(order == "pop") {
            cout << pop() << '\n';
        }
        else if(order == "size") {
            cout << size() << '\n';
        }
        else if(order == "empty") {
            cout << empty() << '\n';
        }
        else {
            cout << top() << '\n';
        }
    }
    return 0;
}