#include <stdio.h>
int main() {
    char name[60];
    float Cal;
    float Physic;
    float Sci;
    float total;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your Calcurus score: ");
    scanf("%f",&Cal);
    printf("Enter your Physic score: ");
    scanf("%f",&Physic);
    printf("Enter your Science score: ");
    scanf("%f",&Sci);

    total = (Cal + Physic + Sci) /3;

        if(total >= 80){
            printf("%s, your average is %.2f .You got grade A",name,total);
        }
        else if(total < 80 && total >= 70){
            printf("%s, your average is %.2f .You got grade B",name,total);
        }
        else if(total < 70 && total >= 60){
            printf("%s, your average is %.2f .You got grade C",name,total);
        }
        else if(total < 60 && total >= 50){
            printf("%s, your average is %.2f .You got grade D",name,total);
        }
        else if(total <50){
            printf("%s, your average is %.2f .You got grade f",name,total);
        }
    }