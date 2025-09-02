#include<stdio.h>
#include<string.h>
int main(){
    int i;
 struct profile{
 char name[100];
 int age;
 float score;
} s[4];
     for(i=1;i<=3;i++)
     {
    printf("\nStudent %d's name: ",i);
    scanf("%s",s[i].name);
    printf("Student %d's age: ",i);
    scanf("%d",&s[i].age);
    printf("Student %d's score: ",i);
    scanf("%f",&s[i].score);
    }
    if( s[1].score > s[3].score && s[1].score > s[2].score){
	printf("\n highest score belong to %s,at %0.2f score\n",s[1].name,s[1].score);
	}
    else if( s[2].score > s[1].score && s[2].score > s[3].score)
    {
        printf("\n highest score belong to %s,at %0.2f score\n",s[2].name,s[2].score);
    }
    else {
        printf("\n highest score belong to %s,at %0.2f score\n",s[3].name,s[3].score);
    }
return 0;
}