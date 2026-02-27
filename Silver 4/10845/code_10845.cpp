#include <bits/stdc++.h>
using namespace std;
//BOJ 10845
const int MX = 1000005;
int que[MX] = {0};
int start = 0, finish = 0;

void push(int k)
{
    que[start++] = k;
}
void pop()
{
    cout << (start - finish ? que[finish++] : -1) << '\n';
}
void size()
{
    cout << start - finish << '\n';
}
void empty()
{
    cout << (start - finish ? 0 : 1) << '\n'; // 0이면 비어있음, 1 출력 그리고 1이면 비어있지 않음, 0 출력
}
void front()
{
    cout << (start - finish ? que[finish] : -1) << '\n';
}
void back()
{
    cout << (start - finish ? que[start - 1] : -1) << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int num;
    int push_num;
    cin >> num;    
    while (num--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> push_num;
            push(push_num);
        }
        else if (str == "pop")
        {
            pop();
        }
        else if (str == "size")
        {
            size();
        }
        else if (str == "empty")
        {
            empty();
        }
        else if (str == "front")
        {
            front();
        }
        else
        {
            back();
        }
    }
    #ifndef ONLINE_JUDGE
        cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
        system("pause");
    #endif
    return 0;
}
