#include <iostream>
using namespace std;
void payableamount(string daY,int TPamount);
main ()
{
  string daY;
  int TPamount;
  
  payableamount(daY,TPamount);
}
  
 
 void payableamount(string daY,int TPamount)
  {
  string day;
  int totalamount;
  int discount;
  int discountamount;
  int leftamount;
  
  cout << "enter day :";
  cin >> day;
  if (day=="sunday")
   {
  cout << "enter total purcase amount:";
  cin >> totalamount;
  cout << "enter discount:";
  cin >> discount;
  discountamount=(totalamount/100)*10;
  leftamount =totalamount-discountamount;
  cout << "payable amount :"<< leftamount << endl;
   }

   
  }






  