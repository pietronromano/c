#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
   printf("%d \n", stringLength("stringLength test"));
   printf("%d \n", stringLength(""));
   printf("%d \n", stringLength("jason"));
    return 0;
}

//Pointer to a char array
int stringLength(const char *string)
{
    //starts pointing at the first letter
    const char *currentAddress = string;
    
    //Loop will pointer is not NULL
    while (*currentAddress)
        ++currentAddress; //move to next
    
    //Pointer arithmetic
    return currentAddress - string;
}