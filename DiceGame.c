#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    char name[10];
    printf("What is your name?\n");
    scanf("%s",name);

    printf("Hello, %s!\n",name);

    int dice1, dice2, sum;

    srand((unsigned int)time(NULL)); 
    dice1 = (rand() % 6) + 1;
    dice2 = (rand() % 6) + 1;
    sum = dice1 + dice2;

    printf("Rolling dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n", dice1, dice2, sum);
}
