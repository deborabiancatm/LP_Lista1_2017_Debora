#include <iostream>
#include <stdlib.h>
#include <math.h>
 
using namespace std;
 
int main(){
  int n=0, i=0, k=0;
  double m=0.0, resultado=0.0;
 
  cin >> n;
 
  for (i=1; i<=n; i++){
	m=(pow(2*i-1.0, 2*i-1.0))/(pow(2*i,2*i));
	
	if(i==1){
  	resultado=m;
	}
	
	if (((i%2)==0)&&(i>1)){
  	k=1;
	} else if (((i%2)!=0)&&(i>1)) {
  	k=2;
	}
	switch(k){
  	case 1:
        		resultado=resultado + m;
    	break;
  	case 2:
        		resultado=resultado * m;
    	break;
	}
	
  }
  cout << "\nO resultado obtido e " << resultado << endl;
 
  system("pause");
 
  return 0;
}

