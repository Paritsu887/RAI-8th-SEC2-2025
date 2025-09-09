#include<stdio.h>
int main() {
	int i = 10;
    int *p;
    p = &i;
    printf("The address of test variable is at: %p",&i);
    return 0;
}