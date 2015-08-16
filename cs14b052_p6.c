#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]){
int i,j;

//compare if the command line strings are identical
for(i=1;i<argc;i++){
for(j=i+1;j<argc;j++){

if(strcmp(argv[i],argv[j])==0){
printf("0\n");
return 0;

}
}

}
printf("1\n");
return 0;
}
