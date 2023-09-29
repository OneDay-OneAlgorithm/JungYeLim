#include <iostream>

using namespace std;

int main() {
  int i, subjectCnt;
  int maxGrade = 0;
  float sumGrade = 0;
  int grade[1000];

  cin >> subjectCnt;

  for (i = 0; i < subjectCnt; i++) {
    cin >> grade[i];
    if (maxGrade < grade[i])
      maxGrade = grade[i];
  }

  for (i = 0; i < subjectCnt; i++) {
    sumGrade += ((float)grade[i] / maxGrade) * 100;
  }
  
  cout << (sumGrade / (float)subjectCnt);

  return 0;
}