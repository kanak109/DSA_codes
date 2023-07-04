#include<stdio.h>


void printSquare(int n){    // pass by value
    n = n*n;
    printf("Square of n is: %d\n",n);

}

void _printSquare(int *n){               // pass by reference
    *n = (*n) * (*n);
    printf("square of n is: %d\n", *n);

}



int main()
{
    int n = 4;

    printSquare(n);
    printf("Number n is: %d\n",n);

    _printSquare(&n);
    printf("number n is: %d\n",n);

    return 0;

}
