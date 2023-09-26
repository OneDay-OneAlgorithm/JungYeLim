#include <iostream>

using namespace std;

int main() {
  int i, j;
  char subject[51];
  string grade;
  double credit, sumOfCredit = 0.0, combinedGrade = 0.0, majorJPA;
  const int SUBJECT_COUNT = 20;
  string gradeArr[9] = {
  "A+", "A0", "B+",
  "B0", "C+", "C0",
  "D+", "D0", "F"
  };
  double creditArr[9] = {
    4.5, 4.0, 3.5,
    3.0, 2.5, 2.0,
    1.5, 1.0, 0.0
  };

  for(i = 0; i < SUBJECT_COUNT; i++) {
    cin >> subject;
    cin >> credit;
    cin >> grade;
    
    if (grade == "P") continue;

    for(j = 0; j < sizeof(gradeArr); j++) {
      if(gradeArr[j] == grade) {
        sumOfCredit += credit;
        combinedGrade += credit * creditArr[j];
        break;
      }
    }   
  }

  majorJPA = combinedGrade / sumOfCredit;

  cout << majorJPA;
  
}