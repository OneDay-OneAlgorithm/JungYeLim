# include<iostream>

using namespace std;

int main(void) {

  int A = -1, B = -1;

  while(A != 0 && B != 0) {
    cin >> A >> B;
    if(A != 0 && B != 0)
      cout << A + B << '\n';
  }
  
  return 0;
  
}