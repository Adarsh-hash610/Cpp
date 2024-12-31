#include<iostream>
#include<set>
using namespace std;

int main()
{
     set<int>s;   //Creating the set...
   s.insert(5);s.insert(3);s.insert(7); //inserting elements in the set...

   for(int i:s)
   cout << i << endl;  //printing elements in the set...

   s.erase(7);  //To delete the elements from the set...
   for(int i : s)
   cout << i<<" ";
   cout << endl;  //To change the line...

   if(s.find(5)!=s.end())  //To search the elements the set...
   {
        cout << "Element found";
   }
   else{
        cout << "Element not found";
   }
}
