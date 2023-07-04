#include<stdio.h>
#define n 5

int main()
{
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);

    }
    int count = 0 ;

    printf("After removing, array will look like:\n ");
    for(int i=1; i<n; i++){
        if(ar[i]!= ar[count]){

            count++ ;
            ar[count] = ar[i] ;
            for(int i=0; i<n; i++){
                printf("%d\t", ar[i]);
            }

        }
    }

    printf("\n");
    for(int i=0; i<count+1; i++){
        printf("%d\t", ar[i]);

    }


    return 0;
}
