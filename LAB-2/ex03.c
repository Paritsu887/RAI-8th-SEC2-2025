#include <stdio.h>
int main(){
    int a,b;
    char c[30];
    char d[30];
    char e[30];
    float value;
    printf("Enter your Name:  ");
     scanf("%s",c);
    printf("Enter your Age: ");
     scanf("%d",&a);
    printf("Enter your height: ");
    scanf("%f",&value);
    printf("Enter your weight:  ");
    scanf("%d",&b);
    printf("Enter your gender: ");
     scanf("%s",d);
     printf("Enter your Education Qaulification: ");
     scanf("%s",e);

     printf("Name:%s\t\t",c);
     printf("Age:%d\t\t",a);
     printf("Gender:%s",d);
     printf("\nHeight:%.2f\t",value);
     printf("Weight:%d",b);
     printf("\nEducation:%s\n",e);
    return 0;
}