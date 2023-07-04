#include<stdio.h>
#define n 5

void reverse_array(int* ar){
    int temp = 0;

//    static int m = 2;
//
//    m = 2 * m;
//    printf("%d\n", m);

    for(int i=0;i<n/2;i++){
        temp = ar[i];
        ar[i] = ar[n-i-1];
        ar[n-i-1] = temp;

    }
//    for(int i=0;i<n;i++){
//        printf("%d\t", ar[i]);
//
//    }

}


int main()
{
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
       // ar[i] = i;

    }
    reverse_array(ar);

    for(int i=0;i<n;i++){
        printf("%d\t", ar[i]);

    }
    return 0;
}
