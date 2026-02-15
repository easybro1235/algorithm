#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;
/*5번, 6번, 7번 리스트가 예외적으로 일렬로 배열처럼 연결되어 있는 연결리스트를 가정해보자.*/

void insert(int addr, int num){ //insert 구현 -> dat[unused]에는 값을, nxt[unused]에는 다음 dat의 주소, pre[unused]에는 이전 dat의 주소
  dat[unused]=num; //값 넣기
  nxt[unused]=nxt[addr]; //새로 추가한 원소가 가리키는 다음 원소의 주소는 그대로 7번으로 유지된다.
  if(nxt[addr]!=-1){ //마지막 원소가 아닐 때
    pre[nxt[addr]]=unused; 
    /*예시: 리스트의 6번과 7번 사이에 추가했다면 nxt[addr]은 6번이 가리키는 다음 원소(7번)의 주소가 되고, 
    7번이 가리키는 이전 원소의 주소는 새로 추가한 원소의 주소(unused)를 가리키게 된다.*/
  }

  nxt[addr]=unused; //기존 6번이 가리키는 다음 원소는 새로 추가한 원소의 주소(unused)가 되어야 한다.
  pre[unused]=addr; //새로 추가한 원소가 가리키는 이전 원소의 주소는 6번이 되어야 한다.

  unused++; //연결 리스트의 다음 위치로 이동

}

void erase(int addr){
  nxt[pre[addr]]=nxt[addr]; 
  /*삭제할 원소의 주소(addr)를 기준으로, 삭제할 원소 이전의 원소의 주소를
   삭제할 원소 다음의 원소의 주소로 바꾼다. 삭제할 원소의 앞부분 연결고리를 끊는 첫 번째 작업*/
  if(nxt[addr]!=-1)pre[nxt[addr]]=pre[addr]; 
  /*삭제할 원소의 뒷부분 연결고리를 끊는 두 번째 작업, 
  삭제할 원소 다음의 주소를 삭제할 원소 이전의 주소로 바꾼다.*/

}

void traverse(){ //연결 리스트 전부 출력하기
  int cur = nxt[0];
  while(cur != -1){
    cout << char(dat[cur]);
    cur = nxt[cur];
  }
  cout << "\n\n";
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);

  string str;
  cin>>str;
  int s = str.size();
  for(int i =0; i<s; i++){
    insert(i,str[i]);
  }

  int cursor = unused-1; //커서는 0번부터

  int Time;
  cin>>Time;
    
  while(Time--){
      char command;
      cin>> command;
      switch(command){
          case 'L':
              if(pre[cursor]!=-1)cursor=pre[cursor]; //이전 리스트로 이동
              break;
          case 'D':
              if(nxt[cursor]!=-1)cursor=nxt[cursor]; //다음 리스트로 이동
              break;
          case 'B':
              if(pre[cursor]!=-1){
                erase(cursor); //지우고 
                cursor=pre[cursor]; //이전 리스트로 이동
              }
              break;
          case 'P':
              char c;
              cin >> c;
              insert(cursor,c);
              cursor=nxt[cursor];
              break;
          default:
              break;
      }
  }
  traverse();
  return 0;
}