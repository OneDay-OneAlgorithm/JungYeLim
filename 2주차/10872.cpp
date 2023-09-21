#include <iostream>

using namespace std;

int main() {
  int N, i, res = 1;

  cin >> N;

  for(i = N; i >= 1; i--) {
    res *= i;
  }

  cout << res;

}