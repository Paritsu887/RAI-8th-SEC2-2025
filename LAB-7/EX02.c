#include<stdio.h>
#include<curses.h>
int main(){
    int UNO_REVERSE;
    int a = 0;
    int b = 5;
    int *aN = &a;
    int *bN = &b; 
    printf("Before reverse: a = %d, b = %d\n",a,b);
    UNO_REVERSE = *aN;
    *aN = *bN;
    printf("After reverse: a = %d, b = %d\n",a,UNO_REVERSE);
}