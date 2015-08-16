#include<stdio.h>
int main(){

char letter;
int count=0;

//take input character letter by letter
while((letter=getchar())!='\n'){

//only output even indices' characters
if(count%2==0){
printf("%c ",letter);
}
count++;
}

return 0;
}
