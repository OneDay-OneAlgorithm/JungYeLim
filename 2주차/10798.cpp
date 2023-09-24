#include <iostream>

using namespace std;

int main() {
  int i, j;
  const int LIMIT_LENGTH = 15;
  const int REPEAT_NUM = 5;
  char magnetLetter[REPEAT_NUM][LIMIT_LENGTH+2] = {'\0'};

  for(i = 0; i < REPEAT_NUM; i++) 
    cin >> magnetLetter[i];

  for(i = 0; i < LIMIT_LENGTH; i++)
    for(j = 0; j < REPEAT_NUM; j++) {
      if(magnetLetter[j][i] != '\n' && magnetLetter[j][i] != '\0') {
        cout << magnetLetter[j][i];
      }
    }  

  return 0;

}