#include<iostream>
using namespace std;

class M 
{
private:
   int A, B;
public:

    input() 
   {
       cout << "Enter two numbers:";
       cin >> A>>B;
   }

   friend  find(M t);
};

 find(M t) 
{
   if (t.A > t.B) 
   {
       cout << "Largest is:" << t.A;
   } 
   else
   {
       cout << "Largest is:" << t.B;
   }
}

int main() 
{

   M obj;
   obj.input();
   find(obj);

}
