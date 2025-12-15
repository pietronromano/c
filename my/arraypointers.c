
#include <stdio.h>
#include <stdlib.h>

int main() {

    int values[100];

    int list_length = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < list_length; i++)
    {
        values[i] = i * 100;
        printf("%d",values[i]);
    }
    

    int *valuesPtr;

    //set valuesPtr to first element of array
    //NOTE the address operator & is not used
    valuesPtr = values;

    //An equivalent: apply the address operator to the first element of the array
    valuesPtr = &values[0];

    return 0;

}