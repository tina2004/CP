#include <iostream>
 using namespace std;
 main() {
  	int a,b,c,s;
   	cout << "Please enter a positive number: ";
  	 cin >> b;
  	s=0;
  	 for(a=2; a<=b; a++)
  	{ 
	  for(c=2; c<=(a/2); c++)
	  {
	   if(a%c==0)
	   {
	     c=a;
	     break;
       }
	  }
	 if(c!=a)
	{	
     s+=a;
     
	}
	}
	s+=2;
	cout <<"result: " << s; 
	  
        }     