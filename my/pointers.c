#include <stdio.h>
#include <stdlib.h> //Required for NULL constant

//Pass a pointer to an int: by ref
int squareByRef(int *intParam)
{
	*intParam = (*intParam) * (*intParam);

    return *intParam;
}

//Pass an in: by value
int squareByValue(int intParam)
{
	intParam = (intParam) * (intParam);
    return intParam;
}

int main()
{
    int num = 150;
    int *pNum = NULL;
    pNum = &num;


    //A pointer is a variable whose value is a memory address
    printf("num address is:  %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of the pNum: %p\n", pNum);
    printf("value of what pNum is pointing to: %d\n", *pNum);

    *pNum = 100; // change the value of num by using the pointer *pNum
    printf("new value of num is:  %d\n", num);

    //Parameters are sent by value in C
    int byVal = squareByValue(num);
    printf("The square of the given number is %d\n", num);

    //Send the address of the int variable: pass by reference rather than by value
    int byRef = squareByRef(&num);
    printf("The square of the given number is %d\n", num);


    //Arrays
    int myArray[5];      /* Declares 5 contiguous integers */
    int *ptrArray = myArray;  /* Arrays can be used as pointers */
    ptrArray[0] = 100;        /* Pointers can be indexed with array syntax */

    return 0;
}

