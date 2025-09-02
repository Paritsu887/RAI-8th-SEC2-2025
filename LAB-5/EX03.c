#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i;
    float d;
 struct profile{
 float X;
 float Y;
} s[3];
     for(i=1;i<=2;i++)
     {
    printf("X%d: ",i);
    scanf("%f",&s[i].X);
    printf("Y%d: ",i);
    scanf("%f",&s[i].Y);
     }
     float X1 = s[1].X;
     float X2 = s[2].X;
     float Y1 = s[1].Y;
     float Y2 = s[2].Y;
d = {(X2-X1)*2+(Y2-Y1^2)}*1/2;
   printf("Distance between (X[%f], X[%f]) and (Y[%f], Y[%f]) is %0.3f",s[1].X,s[2].X,s[1].Y,s[2].Y,d);
     return 0;
    }