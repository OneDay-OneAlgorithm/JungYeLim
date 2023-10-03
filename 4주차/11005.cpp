#include <iostream>

using namespace std;

void printRes(int, int);
void printNumToAscii(int);

int main() {
  int i;
  int decimalNum;
  int baseNum;

  cin >> decimalNum;
  cin >> baseNum;

  printRes(decimalNum, baseNum);
      
}

void printRes(int decimalNum, int baseNum) {
  if(decimalNum == 0) {
    return;
  }
  else {
    printRes(decimalNum / baseNum, baseNum);
    printNumToAscii(decimalNum % baseNum);
  }
}

void printNumToAscii(int num) {
  if(num >= 10)
      cout << (char)(num + 55);
    else
      cout << num;
}
