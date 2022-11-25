#include <iostream>
 using namespace std;
  main() {
  	int N,M,A,BMM;
  	cout << "Please enter  first integer value:";
  	 cin >> N;
  	cout << "Please enter  second integer value:";
  	 cin >> M;
  	A=1;
  	 while (A<=N){
  		 while (A<=M){
  			A++;
  			 if (N%A==0 && M%A==0 ){
  			BMM =A;	
			  }
		  }
	  }
		cout << "BMM between:"<< N << " "<< "and " << M<<" "<< "is" << " "<< BMM; 
}
   
  	