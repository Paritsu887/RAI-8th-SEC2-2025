#include <stdio.h>
int main(){
    char name[30];
    int ID,
    float Composcore;
    float Physicscore;
    float Calscore;

  printf("Enter your name:");
    scanf("%s",name);
    
  printf("Enter your student ID: ");
    scanf("%d",&ID);

  printf("Enter your Programing score: ");
    scanf("%f",&Composcore);

  printf("Enter your Physics score: ");
    scanf("%f",&Physicscore);

 printf("Enter your Calculus score: ");
    scanf("%f",&Calscore);

  float gpa = (Composcore+Physicscore+Calscore) / 3;

  printf("Hi %s(%d)! Your GPA is %.2f\n",name,ID,gpa);
 return 0;
}