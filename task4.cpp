#include <iostream>
using namespace std;
void greaternum(int num1,int num2);

main ()
{
  int num1;
  int num2;
  greaternum(num1,num2);
  

}
  void greaternum(int num1,int num2)
  {
 
  cout << "enter num1 :";
  cin >> num1;
  cout << "enter num2 :";
  cin >> num2;
  if (num1>num2)
   {
    cout << "number1";
   }
  if (num2>num1)
   {
    cout << "number2";
   }

  }