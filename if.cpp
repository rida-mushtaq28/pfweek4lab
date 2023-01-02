#include <iostream>
using namespace std;

void checkresult(int marks);

main ()
{
  while (true)
   {
  int marks;
  cout << "enter your marks :";
  cin >> marks;
  checkresult(marks);
   }
}

void checkresult(int marks)
 {
  
  if (marks > 50)
  {
    cout << "pass"<< endl;
  }
  if (marks < 50)
  {
    cout << "fail"<< endl;
  }
   if (marks == 50)
  {
    cout << "need to improve"<< endl;
  }

 }