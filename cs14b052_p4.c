#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int x,count=0;
if(n==1){
printf("1");
}
//converting decimal into binary form
while(n>1)
{
x=n%2;
n=(n-x)/2;
//counting the occurences of 1
if(x==1)
count++;
}
printf("%d\n",count+1);
return 0;
}
