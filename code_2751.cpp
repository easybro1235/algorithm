#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int tmp[1000005];
void merge(int st, int en) {
    int md = (st + en) / 2;
    int aidx = st; int bidx = md;    
    for(int i = st; i < en; i++) {
        if(aidx == md) tmp[i] = arr[bidx++];
        else if(bidx == en) tmp[i] = arr[aidx++];
        else if(arr[aidx] > arr[bidx]) tmp[i] = arr[bidx++];
        else tmp[i] = arr[aidx++];
    }
    for(int i = st; i < en; i++) {
        arr[i] = tmp[i];
    }
}
void merge_sort(int st, int en) {
    if(en - st <= 1) return;
    int md = (st + en) / 2;
    merge_sort(st, md);
    merge_sort(md, en);
    merge(st, en);    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int j;
        cin >> j;
        arr[i] = j;
    }
    merge_sort(0, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}
