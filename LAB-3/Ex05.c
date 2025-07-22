#include <stdio.h>
int main() {float Cal;
    float height;
    float radius;
    float volume;
    float pi = 3.14;
    printf("Enter cone height: ");
    scanf("%f",&height);
    printf("Enter cone base radius: ");
    scanf("%f",&radius);

    volume = 0.3333333*pi*radius*radius*height;
    printf("Cone volume = %.1f \n",volume);
    
    if(volume > 260){
        printf("this cone is perfect for supun project\n");
    }
    else{
        printf("this cone is not fit for supun project\n");
    }
}