#include<stdio.h>


void printSquare(int n){
   // n = n*n;
    printf("Address of n is: %d\n",&n);

}

void _printSquare(int *n){
   // *n = (*n) * (*n);
    printf("address of n is: %d\n", n); // n because we need address only. *n means value of that address.

}



int main()
{
    int n = 4;

    printSquare(n);
    printf("Address n is: %d\n",&n);

    _printSquare(&n);
    printf("address n is: %d\n",&n);

    return 0;

}



