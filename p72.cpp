#include <iostream>
 using namespace std;
  main() {
  	int a,b,c,i,mod;
  	cout << "Please enter first number: ";
  	 cin >> a;
  	cout << "Please enter second number: ";
  	 cin >> b;
  	c=0;
  	i=0;
  	 while (a-c>=b)
	  {
  		c=c+b;
  		mod=a-c;
  		i=i+1;

	  }
	cout << "baqimandeh: " << mod << "\n";
	cout << "kharej qesmat: "<< i;  
	
}