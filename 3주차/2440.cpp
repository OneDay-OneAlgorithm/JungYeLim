#include <iostream>

using namespace std;

void printBlank(int);
void printStar(int);

int main() {
  int i, j, input;

  cin >> input;

  for(i = 1; i <= input; i++) {
    for(j = input; j > i; j--)
      cout << " ";
    for(j = 0; j < 2*i-1; j++)
      cout << "*";
    cout << endl;
  }

  for(i = 1; i < input; i++) {
    for(j = 0; j < i; j++)
      cout << " ";
    for(j = 2*(input-i)-1; j > 0; j--)
      cout << "*";
    cout << endl;
  }

  return 0;

}