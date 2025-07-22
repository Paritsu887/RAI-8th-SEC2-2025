#include <stdio.h>
int main() {
    int a,m;
    printf("Enter a number: ");
    scanf("%d",&a);
    m = a %2==0;
    switch(m)
    {
        case 0:switch(a){ case 1 ... 100:
        printf("%d is odd\n",a);
       break;
    default: printf("%d is out of range\n",a);
        break;}
        break;


        case 1:switch(a){ case 1 ... 100:
        printf("%d is even\n",a);
       break;
    default: printf("%d is out of range\n",a);
        break;}
        break;
    }
    return 0;
}