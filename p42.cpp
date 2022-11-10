#include <iostream>
using namespace std;
  main() 
  {
   int x,y,z,C,S,F;
   cout<<"enter value for x:";
   cin>>x;
   cout<<"enter value for y:";
   cin>>y;
   cout<<"enter value for z:";
   cin>>z;
   C = ((x-y) * (x+z));
   S = (x+y+z) * (x+y+z);
   F = C/(S+1);
   cout<<"F:"<<F;
  }