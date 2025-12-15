#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 10; 
    float f = 2.34; 
    char ch = 'k'; 

    void *vptr; 

    vptr = &i; 
    printf("VaIue of i = %d\n", *(int *)vptr); 

    vptr = &f; 
    printf("VaIue of f = %.2f\n", *(float *)vptr); 

    vptr = &ch; 
    printf("VaIue of ch = %c\n",*(char *)vptr); 

    return 0;
}