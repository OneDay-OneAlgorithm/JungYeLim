#include <iostream>

using namespace std;

int main() {
  int N, i, j, notGroupWordCnt = 0;
  string input;

  cin >> N;

  for(i = 0; i < N; i++) {
    bool alphabet[26] = {false, };
    cin >> input;
    for(j = 0; j < input.length(); j++) {
      if(input[j] == input[j-1]) { // 중복되는 단어인 경우
        continue;
      }
      else if(alphabet[input[j]-97] == true) { // 이미 방문한 단어인 경우
        notGroupWordCnt++;
        break;
      }
      else { // 처음 방문한 경우
        alphabet[input[j]-97] = true; 
      }
    }
  }

  cout << N - notGroupWordCnt;

  return 0;
}