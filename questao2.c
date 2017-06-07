#include <stdio.h>
#include <math.h>
 
int main(){
  int n, i, k;
  float m=0.0, resultado=0.0;
 
  scanf("%d", &n);
 
  for (i=1; i<=n; i++){
	  m=(pow(2*i-1,2*i-1))/(pow(2*i,2*i));
	
	if(i==1){
  	resultado=m;
	}
	if (((i%2)==0)&&(i>1)){
  	k=1;
	} else if (((i%2)!=0)&&(i>1)){
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
  printf("\nO resultado obtido e %.2lf\n", resultado);
}

