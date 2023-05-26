//#include<bits/stdc++.h>
//using namespace std;

#include<stdio.h>

#define n 10

int linear_search(int ar[], int value)
{
    for(int i=0;i<n;i++){
        if(ar[i]== value){
            return i+1;
        }

    }
    return -1;
}

int main()
{
    int ar[n], value;
    printf("Enter numbers: \n");

    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);
    }
    printf("Enter value to search: \n");
    scanf("%d", &value);

    int res = linear_search(ar,value);
    if(res == -1){
        printf("Value not found!");
    }
    else{
        printf("Value found at %dth position.\n", res);
    }


    return 0;


}

