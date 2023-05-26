#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define n 10

int main()
{
    int ar[n], start=0, last = n-1,loc=-1, mid, item;
    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);
    }
    sort(ar, ar+n);
    printf("sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ", ar[i]) ;

    }
    printf("\n") ;

    // Binary Search //
    scanf("\n%d", &item);

    while(start<=last){
        mid = (start+last) /2;
        if(item == ar[mid]){
            loc = mid;
            last = mid - 1;

        }
        else if(item<last){
            last = mid+1 ;
        }
        else{
            start = mid+1;
        }

    }

    printf("the item is in %dth location", loc);

    return 0;


}
