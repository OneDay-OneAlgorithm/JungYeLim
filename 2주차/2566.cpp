#include <iostream>

using namespace std;

int main() {
  int grid[100][100];
  const int GRID_LENGTH = 9;
  int i, j, maxCol, maxRow, maxVal = 0;


  for(i = 0; i < GRID_LENGTH; i++) {
    for(j = 0; j < GRID_LENGTH; j++) {
      cin >> grid[i][j];
      if(grid[i][j] >= maxVal) {
        maxVal = grid[i][j];
        maxCol = j + 1;
        maxRow = i + 1;
      }
    }
  }

  cout << maxVal << endl;
  cout << maxRow << " " << maxCol;

  return 0;

}