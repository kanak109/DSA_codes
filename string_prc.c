//#include<stdio.h>
//
//int main()
//{
//    char ar[50] = "I am Kanak";
//    int i,len = 0;
//
//    while(ar[i]!='\0'){
//        len++;
//        i++;
//
//    }
//
//    printf("%d", len);
//
//    return 0;
//}


// take string as input

//#include <stdio.h>
//#define MAX_LIMIT 20
//int main()
//{
//   char str[MAX_LIMIT];
//   fgets(str, MAX_LIMIT, stdin);
//   printf("%s", str);
//
//   return 0;
//}

// ei method e input nile space / tab / enter pawar sathe sathei porer tuku omit korbe //

#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}





