#include <stdio.h>
#include <math.h>
int main(){
    char name[30];
    int ID,
    int comscore = 0;
    float Physicscore;
    float Calscore;

  printf("Enter your name:");
    scanf("%s",name);
    
  printf("Enter your student ID: ");
    scanf("%d",&ID);

  printf("Enter your Programing score: ");
    scanf("%d",&comscore);

  printf("Enter your Physics score: ");
    scanf("%f",&Physicscore);

 printf("Enter your Calculus score: ");
    scanf("%f",&Calscore);

  float gpa = (comscore+Physicscore+Calscore) / 3;

  printf("Hi %s(%d)! Your GPA is %.2f\n",name,ID,gpa);
 return 0;
}