#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
int n; int m;
void func(int k) {
    if(k == m) { //base condition - m개를 모두 택했을 때
        for(int i = 0; i < m; i++) { //배열 길이는 m
            cout << arr[i] << ' '; //배열 출력
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++) { //1~n의 수 중 선택
        if(!isused[i]) { //사용되지 않았으면 실행
            isused[i] = true; //사용 표시
            arr[k] = i; //조건에 맞으면 배열에 숫자 삽입
            func(k+1); //재귀
            isused[i] = false; //재귀 마무리 후 사용 표시 제거
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
    return 0;
}
