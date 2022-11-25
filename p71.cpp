#include <iostream>
 using namespace std;
  main() {
  	int n,m,tavan;
  	cout << "Please enter first number: ";
  	 cin >> m;
  	cout << "Please enter second number: ";
  	 cin >> n;
  	tavan=1;
  	 while (n>0) {
  		tavan=tavan*m;
  		n=n-1;
	            }
	cout << "tavan equal is: "<<tavan;  
  	
         }