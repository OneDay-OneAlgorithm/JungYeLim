#include <iostream>

using namespace std;

int main() {
  int N, i;
  int res = 2;
  
  cin >> N;

  while(N--) {
    res += res - 1;
  }

  res *= res;

  cout << res;

  return 0;
}