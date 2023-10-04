#include <iostream>

using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;

int change;

int numOfCoins[4];
int length = sizeof(numOfCoins) / sizeof(*numOfCoins);

void updateChangeAndNumOfCoins(const int);

int main() {

  int T, i, j;
  
  cin >> T;


  for(i = 0; i < T; i++) {
    cin >> change;


    updateChangeAndNumOfCoins(QUARTER);
    updateChangeAndNumOfCoins(DIME);
    updateChangeAndNumOfCoins(NICKEL);
    updateChangeAndNumOfCoins(PENNY);

    for(j = 0; j < length; j++) {
      cout << numOfCoins[j];
      if(j == length - 1)
        cout << endl;
      else 
        cout << " ";
    }
    
  }

  return 0;
}

void updateChangeAndNumOfCoins(const int sizeOfCoin) {
  int pos; 
  
  if(sizeOfCoin == QUARTER) 
    pos = 0;
  else if(sizeOfCoin == DIME)
    pos = 1;
  else if(sizeOfCoin == NICKEL)
    pos = 2;
  else if(sizeOfCoin == PENNY)
    pos = 3;

  numOfCoins[pos] = change / sizeOfCoin;
  change -= numOfCoins[pos] * sizeOfCoin; 
}