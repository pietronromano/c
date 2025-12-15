#include <stdio.h>


int main () {

    int a, k;
    a = 0;

    //for
    for (k = 1; k <= 10; k++)
        if (k >= 5){
          if (a - k < 0)
            a =  a + k / 2;
          else
           a = a - k / 3; 
        }
    printf("%d", a);
    fflush(stdout); //forces print in debug mode


    //while loops
    double x = 2.5; int n = 1; 

    while (n < 10 )
    {
        switch (n)
        {
        case 1: 
            x *= 2;

        case 3: 
            x += 1; 
            break;
        case 7: 
            x  -= 3;
            break;
        default:
            x  /=10;
        }
        
        n = n + 3;
    }
    printf("%f\n", x);


    // do while
    a = 1;
    do 
    {
        
        a = a + 1;

        //goto
        if (a == 21) {                
            goto error;
        }

        if (a == 10)
            continue;
        printf("value of a: %d\n", a);

    } while( a < 20 );

    error:
        printf("Error handler");

    return 0;
}