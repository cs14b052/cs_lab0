#include<stdio.h>
//initialise the array
int a[100]={0};

int isOne(int index){
//fuction for checking if the element is 1 or 0
if(a[index]==1){
return 1;
}
else{
return 0;
}
}

int main(){
int c;
int i=0;
int odd=1;
//take each input separated by spaces
//odd: for leaving spaces
while((c=getchar())!='\n'){
if(odd){
a[i]=c-48;
i++;
odd=0;}
else{
odd=1;
}
}
int check = 0;
for(i=0;i<100;i++){
//if 1 has not occured yet
if(check==0){
check = isOne(i);
}
else{
printf("%d\n",i-1);
return 0;
}
}
printf("-1\n");
return 0;
}
