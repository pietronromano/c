#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("Number of Arguments: %d\nFirst Arg %s", argc, argv[0]);

    char name[50];
    int age;
    printf("Please introduce your age and name:");
    scanf("%d %s",&age,name);
    printf("Your age is %d, your name is %s",age,name);


   //Alternative - gets allows spaces
    printf ("Enter your full name ") ; 
    fgets (name, 25, stdin) ; 
    puts (name) ; 

    return 0;
}