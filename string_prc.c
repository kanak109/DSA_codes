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

#include <stdio.h>
#include<string.h>



int main()
{
//   char str[50] = "I am Kanak " ;
//   char str2[50] = "Barua.";

    char str[50], str2[50];

    fgets(str, 50, stdin);
    str[strlen(str)-1] = '\0';
    fgets(str2, 50, stdin);
    str2[strlen(str2)-1] = '\0';

//    gets(str);
//    gets(str2);

//    printf("type the first string: ");
//    scanf("%s",str);
//
//    printf("\ntype the  second string: ");
//    scanf("%s", str2);

//    int i=0, j =0, len=0;
//
//    while(str[i]!='\0'){
//
//        i++;
//        len++;
//   }
//
//    while(str2[j]!='\0'){
//        str[len+j] = str2[j];
//        j++;
//
//   }

    strcat(str,str2);
   // puts(str);
    printf("%s\n", str);

    for(int i=0; i<strlen(str); i++)
    {
        printf("%c(%d)", str[i], str[i]);
    }

    return 0;
}








