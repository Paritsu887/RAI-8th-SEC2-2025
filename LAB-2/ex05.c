#include <stdio.h>
int main (){
    int age;
    float height;
    char a[20];
    char b[20];
    char c[20];
    printf("Enter your full name : ");
    scanf("%[^\n]”,);
    printf("Enter your Age:  ");
    scanf("%d",&age);
    printf("Enter your Height: ");
    scanf("%f",&height);
    printf("Enter your University name: ");
    scanf("%s",b);

    printf("Hi! Everyone.This is %s from %s. I am %d years old and my height is %.2f cm tall.",a,b,age,height);
    return 0;
}