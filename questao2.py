n=int(input())
i=1
resultado=0.0
m=0.0
 
for i in range(1,n+1):
    m=((2*i-1)**(2*i-1))/((2*i)**(2*i))
 
    if(i==1):
        resultado=m
	
    if ((i%2)==0) and (i>1):
        resultado=resultado + m
    elif ((i%2)!=0) and (i>1):
        resultado=resultado * m       
print("o resultado obtido e: %.2f" % resultado)
