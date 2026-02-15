#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; int mx = 0; int money; int flag; bool check = false;
	cin >> n;
	while(n--) {		
		int dice[7][2];
		for(int i = 1; i <= 6; i++) {
			dice[i][0] = i; //주사위 눈 1~6에 대응되는 배열
		}
		for(int j = 0; j < 3; j++) {
			int score;
			cin >> score;
			dice[score][1]++; //이차원 배열을 통해 나온 눈의 개수 세기
		}
		for(int k = 1; k <= 6; k++) { 
			if(dice[k][1] == 3) {
                money = dice[k][0] * 1000 + 10000;
                check = true;
            }
			else if(dice[k][1] == 2) {
                money = dice[k][0] * 100 + 1000;
                check = true;
            }
            else if(dice[k][1] == 1) flag = dice[k][0];
		}
        if(!check) money = flag * 100;
		mx = max(money, mx);		
	}	
	cout << mx;
	return 0;
}