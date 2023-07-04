#include <stdio.h>

//#define N 1000

int main(void)
{
    // your code goes here
    int t,n;
    //char a[N];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        char a[n];
        scanf("%s", &a);

        int i = 0;
        while(i < n/2 && a[i] == a[n/2 + i]) i++;

        if(i == n/2) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
/*
#include <stdio.h>
#include<string.h>

int main(void)
{
    // your code goes here
    int t,n;
    char a[100], s1[100] = "", s2[100] = "";

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", &a);
        int mid = n/2;

        for(int i=0; i<mid; i++)
        {
            s1[i] = a[i];
        }
        s1[mid] = '\0';

        for(int i=0; i<n-mid; i++)
        {
            s2[i] = a[i+mid];
        }
        s2[n-mid] = '\0';


        int result = strcmp(s1,s2);
        if(result == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}
*/


