#include <stdio.h>
int main(){

int a,b,c,t,v,p;
printf("CSC 201 ");
scanf("%d", &a ); 
printf("CSC 205 ");
scanf("%d", &b);
printf("STA 205 ");
scanf("%d", &c);	

t=a+b+c;
printf("total is = %d\n",t);
v=t/3;
printf("the average is = %d\n",v);
p=v;
printf("the percentage is = %d\n", p);

return 0;
}

