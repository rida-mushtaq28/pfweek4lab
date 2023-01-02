#include <iostream>
using namespace std ;
void iseligible(int age);
main ()
{ 
   int age;
   cout << "enter age :";
   cin >> age;
   iseligible(age);

} 
  void iseligible(int age)
  {
    if (age>=18)
     {
     cout << "voter is eligible.";
     }
  } 