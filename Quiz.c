#include <stdio.h>
int main (){
    float A,B,C;
    float D;
    float area;
    printf("Enter Radius of Resister(m):  ");
    scanf("%f",&A);
    printf("Enter Length of Resister(m):  ");
    scanf("%f",&B);
    printf("Enter Resistivity of Resister:  ");
    scanf("%f",&C);
    area = 3.14*(A*A);
    D = C*B/area;


    printf("The value of This Resistor: %.2f OHM\n",D);
    return 0;    
}