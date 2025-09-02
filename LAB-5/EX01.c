#include<stdio.h>
#include<string.h>

int i=1;
int main()
{
 struct profile{
 char name[100];
 int age;
 float score;
} s[4];
     for(i;i<=3;i++)
     {
    printf("\nStudent %d's name: ",i);
    scanf("%s",s[i].name);
    printf("Student %d's age: ",i);
    scanf("%d",&s[i].age);
    printf("Student %d's score: ",i);
    scanf("%f",&s[i].score);
    }
        printf("\n student %d name is %s,age %d ",i = 1,s[1].name,s[1].age);
return 0;
}