#include <iostream>

using namespace std;

int main() {
  string inputNum;
  int i, baseNum, digit = 1;
  int res = 0;

  cin >> inputNum;
  cin >> baseNum;

  for(i = inputNum.length() - 1; i >= 0; i--) {
    if(inputNum[i] >= 65) { // 문자일 경우
      res += digit * (inputNum[i] - 55);
    } else { // 숫자일 경우
      res += digit * (inputNum[i] - 48);
    }
    digit *= baseNum;
  }

  cout << res;

  return 0;
}