#include <iostream>
using namespace std;
void add(int num1,int num2);
void product(int num1,int num2);
void sub(int num1,int num2);
main ()
{
  int num1;
  int num2;
  cout << "enter  num1:";
  cin >> num1;
  cout << "enter num2 :";
  cin >> num2;
 add(num1,num2);
 product(num1,num2);
 sub(num1,num2);

}


void add(int num1,int num2)
{
  
  int sum;
  
  sum =num1+num2;
  cout << "sum :"<< sum << endl;
}
void product(int num1,int num2)
{
  
  
  int multiply;
  multiply=num1*num2;
  cout << "multiply:"<< multiply <<endl;  


}
void sub(int num1,int num2)
{
  
  
  int subtract;
  subtract=num1-num2;
  cout << "subtract:"<< subtract <<endl;  


}