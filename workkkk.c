#include <stdio.h>
#include <string.h>

struct profile {
    char name[100];
    int age;
    float score;
};

int main() {
    struct profile s[3];
    int i;

    for (i = 0; i <= 3; i++) {
        printf("\nStudent %d's name: ", i+1);
        scanf("%99s", s[i].name);

        printf("Student %d's age: ", i+1);
        scanf("%d", &s[i].age);

        printf("Student %d's score: ", i+1);
        scanf("%f", &s[i].score);
    }
        printf("\n student %d name is %s,age %d ",i = 1,s[1].name,s[1].age);

    return 0;
}
