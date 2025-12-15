#include <stdio.h>

int main () {

    int x = 4, y;

    y = x;

    y = 5;

    x = 10;

    //Puntero
    int *p, *r;
    p = &x;
    r = &y;

    x = 200;
    *p = 300;


}