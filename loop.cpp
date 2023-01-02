#include <iostream>
using namespace std;
void Name(string name);
main ()
{
  string name;
   while (true)
   {
  cout << "enter your name :";
   cin >> name;
   Name(name);
   }
 

}
  void Name(string name)
 {
  
  if (name=="rida")
    {
     cout << "welcome rida"<< endl;
    }
   
 }