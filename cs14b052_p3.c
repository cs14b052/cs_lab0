#include<stdio.h>
int main(){

int n;
scanf("%d",&n);

int array[n],i;
for(i=0;i<n;i++){
scanf("%d",&array[i]);
}
int min = array[0];
for(i=0;i<n;i++){
if(array[i]<min){
min=array[i];
}
}
int max=min,prevMax,count=0;
/*
checking first 5 maximum values 5 times in a loop
*/
while(count<5){
for(i=0;i<n;i++){
if(count==0){
//when the loop starts for the first time 
if(array[i]>max){
max=array[i];
}
}
else{
//the max value should be less than the previous max value
if(array[i]>max && array[i]<prevMax){
max=array[i];
}
}
}
printf("%d ",max);
prevMax=max;
max=min;
count++;
}
printf("\n");
return 0;
}
