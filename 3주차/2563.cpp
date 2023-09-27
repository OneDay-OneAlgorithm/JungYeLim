#include <iostream>

using namespace std;

int main() {
  const int SIDE_OF_PAPER = 10;
  const int SIDE_OF_CANVAS = 1000; // 배열 크기 100으로 했더니 틀렸다고 나와서 1000으로 바꿉니다..
  int totalArea = 0, i, j, k, paperCnt, leftMargin, bottomMargin;
  bool canvasFilled[SIDE_OF_CANVAS][SIDE_OF_CANVAS];

  cin >> paperCnt;

  for(i = 0; i < paperCnt; i++) {
    
    cin >> leftMargin >> bottomMargin;
    
    for(j = 0; j < SIDE_OF_PAPER; j++) {
      for(k = 0; k < SIDE_OF_PAPER; k++) {
        if(!canvasFilled[leftMargin + j][bottomMargin + k]) {
          canvasFilled[leftMargin + j][bottomMargin + k] = true;
          totalArea++;
        }
      }
    } 
  }

  cout << totalArea;

  return 0;
  
}