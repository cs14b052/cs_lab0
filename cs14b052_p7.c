#include<stdio.h>
#include<math.h>
int main(){

int c1x,c1y,c1r,c2x,c2y,c2r;
scanf("%d %d %d",&c1x,&c1y,&c1r);
scanf("%d %d %d",&c2x,&c2y,&c2r);
//calculate distance between centers
int dis = (c1x-c2x)*(c1x-c2x) + (c1y-c2y)*(c1y-c2y);
//check if the distance is less than difference of their radii
if(sqrt(dis)<abs(c2r-c1r)){
printf("yes\n");
}
else{
printf("no\n");
}
return 0;
}
