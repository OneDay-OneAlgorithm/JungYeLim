#include <iostream>
#include <vector>

using namespace std;

int main() {
  int i, j, cnt = 0, indx = 0;
  string input;
  vector<string> croatia = {
  "c=", "c-", "dz=", "d-",
  "lj", "nj", "s=", "z=" 
  };
  
  cin >> input;
  

  for(i = 0; i < croatia.size(); i++) {
    while(1){
      indx = input.find(croatia[i]);
      if(indx == string::npos)
          break;
      input.replace(indx,croatia[i].length(),"#");
    }
  }
    
  cout << input.length();

  

  return 0;
  
}