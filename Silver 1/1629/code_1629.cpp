#include <bits/stdc++.h>
using namespace std;
long long mult(long long a, long long b, long long m) { //이 함수의 목적은 a의 b제곱을 m으로 나눈 나머지를 구하는 것이다.
    if(b == 1) return a % m; //base condition - 1제곱일 때 구하면 b제곱일 때도 구할 수 있다.
    long long val = mult(a, b/2, m); //재귀 -  이 함수의 목적은 a의 (b/2)제곱을 m으로 나눈 나머지를 구하는 것이다.
    val = val * val % m; //a의 (b/2)제곱을 m으로 나눈 나머지를 제곱한 뒤 다시 나눈다.
    if(b%2 == 0) return val; //우리가 원하는 결과 - b가 짝수일 때
    return val * a % m; //우리가 원하는 결과 - b가 홀수일 때
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b, c;
    cin >> a >> b >> c;
    cout << mult(a, b, c);
    return 0;
}
