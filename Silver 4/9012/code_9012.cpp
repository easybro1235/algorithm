#include <bits/stdc++.h>
using namespace std;

// BOJ 9012
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while (num--)
    {
        string k;
        cin >> k;

        stack<char> st;
        bool ok = true;

        for (char c : k)
        {
            if (c == '(')
            {
                st.push(c);
            }
            else
            { // 닫는 괄호 ')'
                if (st.empty())
                {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }

        // 문자열을 끝까지 봤는데 스택에 '('가 남아있으면 짝이 안 맞는 것
        if (!st.empty())
            ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }

#ifndef ONLINE_JUDGE
    cout << endl;
    system("pause");
#endif
    return 0;
}