
//to take input of 5 subjects, find avg, and assign a grade

#include <iostream>
using namespace std;
int main() {
  float math, sci, soc, eng, hin;
  cout<<"Enter the marks attained out of 50 in mathematics, science, socials, english and hindi respectively\n";
  cin>>math>>sci>>soc>>eng>>hin;
  float avg = ((math+sci+soc+eng+hin)/250)*100;
  if (avg > 90){
      cout<<"The grade is A+";
  }
  else if (avg > 80){
      cout<<"The grade is A";
  }
  else if (avg > 70){
      cout<<"The grade is B+";
  }
  else if (avg > 60){
      cout<<"The grade is B";
  }
  else if (avg > 50){
      cout<<"The grade is C+";
  }
  else if (avg > 40){
      cout<<"The grade is C";
  }
  else{
      cout<<"The student has failed";
  }
  return 0;
}
