#include<stdio.h>

void printSeries(int n)
{
    if(n==0)
        return;

    printSeries(n-1);

    printf("%d\n", n);
}

int main()
{
    printSeries(10);

    printf("Main Function Done!");

    return 0;
}








//#include<stdio.h>
//
//int addNumber(int n)
//{
//
//    if(n==1){
//        return 1;
//    }
//    else{
//        int a = n + addNumber(n-1);
//        //printf("%d", a);
//        return a;
//    }
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    addNumber(n);
//    printf("%d", addNumber(n));
//
//    return 0;
//}
//
//
