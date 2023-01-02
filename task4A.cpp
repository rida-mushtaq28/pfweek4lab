#include <iostream>
using namespace std;
void input(string name);
main ()
{
   string name;
   while (true)
   {
    cout <<"enter name:";
    cin>> name;

   input(name);
   }
}
void input(string name)
 {
 if (name=="irzam")
   {
    cout << "irzam"<< endl;
   }
 
 }