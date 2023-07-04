#include<stdio.h>

//int *getArray(int *a)
//{
//    printf("Enter the elements: ");
//    for(int i=0;i<5;i++){
//        scanf("%d", &a[i]);
//    }
//
//    return a;
//}
//
//int main()
//{
//
//    int *p, ar[5];
//    p = getArray(ar);
//
//    printf("\nElements of the arrays are: ");
//    for(int i=0;i<5;i++){
//        printf("%d", *(p+i)); // Or you can write p[i] //
//        printf(" ");
//    }
//
//
//    return 0;
//}




/** Alternative Way */

int *getArray()
{
    static int r[5];
    printf("Enter the elements: ");
    for(int i=0;i<5;i++){
        scanf("%d", &r[i]);
    }

    return r;
}

int main()
{

    int *p;
    p = getArray();

    printf("\nElements of the arrays are: ");
    for(int i=0;i<5;i++){
        printf("%d", *(p+i)); // Or you can write &p[i] //
        printf(" ");
    }


    return 0;
}
