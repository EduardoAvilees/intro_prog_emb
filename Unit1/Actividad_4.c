#include <stdio.h> 

char firstname[255];
char lastname[255];
float age= 0;
char state[255];

int main(){
    printf("welcome\n");
    printf("Enter your first name:\n");
    scanf("%s", firstname);
    printf("Enter your last name:\n");
    scanf("%s", lastname);
    printf("Enter your age:\n");
    scanf("%f", &age);

    return 0;
} 