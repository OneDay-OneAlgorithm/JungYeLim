#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  int i, length, low, high;
  bool is_palindrome = true;

  cin >> word;

  low = 0; high = word.length() - 1;

  while(low < high) {
    
    if(word[low] == word[high]) {
      low++;
      high--;
    } else {
      is_palindrome = false; 
      break;
    }
  
  }

  cout << is_palindrome;
  
}