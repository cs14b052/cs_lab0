#include<stdio.h>
#include<string.h>
int main(){

int m,n;
char c;
/*
scanning character by character
along with spaces and new lines
*/
c=getchar();
m=c-48;
c=getchar();
c=getchar();
n=c-48;
c=getchar();
int len;
if(m>=n){
len=m;
}
else{
len=n;
}
int i,j=0;
//input is taken in the form of a matrix
char a[m][n],str[len];
for(i=0;i<m;i++){
while((c=getchar())!='\n'){
if(c!=' '){
a[i][j]=c;
j++;}
}
j=0;
}

scanf("%s",str);
len=strlen(str);
int index,k=0;

for(i=0;i<m;i++){
for(j=0;j<n;j++){
if(a[i][j]==str[0]){
//check left
if(j+len-1<=n-1){
index=j;
while(a[i][index]==str[k]&&k<=len-1){
index++;
k++;}
if(k==len){
printf("1\n");
return 0;}}
//check right
k=0;
if(j-len+1>=0){
index=j;
while(a[i][index]==str[k]&&k<=len-1){
index--;
k++;}
if(k==len){
printf("1\n");
return 0;}}
//check up
k=0;
if(i+len-1<=m-1){
index=i;
while(a[index][j]==str[k]&&k<=len-1){
index++;
k++;}
if(k==len){
printf("1\n");
return 0;}}
//check down
k=0;
if(i-len+1>=0){
index=i;
while(a[index][j]==str[k]&&k<=len-1){
index--;
k++;}
if(k==len){
printf("1\n");
return 0;}
k=0;
}
}}}

printf("0\n");
return 0;
}
