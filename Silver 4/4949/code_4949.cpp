#include <bits/stdc++.h>
using namespace std;
//BOJ 4949
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> stk;
    string str;
    bool isokay;
    while (true)
    {
        getline(cin, str);
        if (str == ".") // 이스케이프 조건: 온점이 입력될 시
            break;

        isokay = true; // default
        while (!stk.empty())
            stk.pop();
        for (char ch : str)
        {
            if (ch == '(' || ch == '[')
            {
                stk.push(ch);
            }
            else if (ch == ')')
            {
                if (!stk.empty())
                { // 비어있지 않으면
                    if (stk.top() == '(')
                        stk.pop(); // 최상단과 짝이 맞아서 닫히면 제거
                    else if (stk.top() == '[')
                    {
                        isokay = false; // 짝이 안 맞을 때
                        break;
                    }
                }
                else
                {
                    isokay = false; // 비어있는데 괄호를 닫으려 하면 오류
                    break;
                }
            }
            else if (ch == ']')
            {
                if (!stk.empty())
                { // 비어있지 않으면
                    if (stk.top() == '[')
                        stk.pop(); // 최상단과 짝이 맞아서 닫히면 제거
                    else if (stk.top() == '(')
                    {
                        isokay = false; // 짝이 안 맞을 때
                        break;
                    }
                }
                else
                {
                    isokay = false; // 비어있는데 괄호를 닫으려 하면 오류
                    break;
                }
            }
            else
                continue; // 이외 문자는 패스
        }
        if (!stk.empty())
            isokay = false;                      // 스택이 비어있지 않으면 오류
        cout << (isokay ? "yes" : "no") << '\n'; // isokay가 모든 경우를 고려하여 완성된 궁극의 판독기!
    }
#ifndef ONLINE_JUDGE
    cout << endl; // 출력 버퍼를 비우고 줄바꿈 (필수!)
    system("pause");
#endif
    return 0;
}
