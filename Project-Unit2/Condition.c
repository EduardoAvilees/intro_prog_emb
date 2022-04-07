#include <stdio.h>

int main (){
    char name[100];
    int age;

    printf("What is your name?\n");
    scanf("%s",name);
    printf("How old are you?\n");
    scanf("%d",&age);
    if (age<18){
        printf("You are not old anough\n");
    }
    else{
        printf("You are welcome %s\n", name);
    }


    return 0;
}