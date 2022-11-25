#include <iostream>
 using namespace std;
  main() {
  	int n,i,sum;
  	cout << "Please enter a number :";
  	 cin >> n;
  	sum=0;
  	 for (i=1; i<=n; i++) 
	  {
  		if (n%i==0)
		  {
  			sum+=i;
	      }
	  }
	  cout << "Divisor is: "<< sum<<"\n";
	     }  