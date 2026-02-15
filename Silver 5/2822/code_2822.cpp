#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pair<int, int> p;
    vector<pair<int, int>> score;
    vector<int> ques;
    int hap = 0;
    for(int i = 0; i < 8; i++) {
        int num;
        cin >> num;
        p = {num, i+1};
        score.push_back(p);
    }
    sort(score.begin(), score.end());
    for(int j = 7; j > 2; j--) {
        hap += score[j].first;
        ques.push_back(score[j].second);
    }
    sort(ques.begin(), ques.end());
    cout << hap << '\n';
    for(int k = 0; k < ques.size(); k++) {
        cout << ques[k];
        if(k != ques.size()) cout << ' ';
    }
    return 0;
}
