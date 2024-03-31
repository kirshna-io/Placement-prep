//armstrong num

#include<stdio.h>  
int main()    
{    
int n,c,sum,t;    
scanf("%d",&n);    
t=n;    
while(n>0)    
{    
c=n%10;    
sum=sum+(c*c*c);    
n=n/10;    
}    
if(t==sum)    
printf("armstrong  number");    
else    
printf("not armstrong number");    
}   
