#include<stdio.h>
int main(){
long int n;
//taking the input integer
scanf("%ld",&n);
/*
if n is less than zero,
then change it into positive integer
*/
if(n<0){
n=-n;
}
//if n equals zero then print the output "0"
if(n==0){
printf("0\n");
return 0;
}
long int x,sum=0;
/*
divide the number into digits 
and add their squares.
*/
while(n>0){

x=n%10;
n=(n-x)/10;
sum+=x*x;

}
printf("%ld\n",sum);
return 0;
}
