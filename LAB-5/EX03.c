#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i;
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
   double D = sqrt(pow(s[2].X-s[1].X,2)+pow(s[2].Y-s[1].Y,2));
   printf("Distance between (X[%0.2f], X[%0.2f]) and (Y[%0.2f], Y[%0.2f]) is %0.3f",s[1].X,s[2].X,s[1].Y,s[2].Y,D);
     return 0;
    }