#include<stdio.h>
#define stackSize 50

int top = -1, cnt=0;
char myStack[stackSize];

void push(char value)
{

    if(top>= stackSize - 1)
    {
        printf("Stack is full!");
    }
    else
    {
        myStack[++top] = value;
    }
    cnt++;
}

void peek()
{

    if(top<0)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("%c", myStack[top]);
    }

}

void pop()
{
    if(top<0)
    {
        printf("Stack is empty! Nothing to Pop.");
    }
    else
    {
        printf("Item popped: %c\n", myStack[top]);
        top--;
    }
}


int main()
{

    char str[10] = "((())())";

    for(int i=0; str[i]!='\0'; i++)
    {

        if(top!=-1 && myStack[top] == '(' && str[i] == ')')
        {
            pop();
        }
        else
        {
            push(str[i]);
        }
    }

    if(top <0)
    {
        printf("%s is Balanced\n", str);

    }
    else
    {
        printf("%s is not Balanced\n", str);
    }

    return 0;
}

// Leetcode version

bool isValid(char * s)
{
    int n = strlen(s);
    char stack[n];
    int top = -1;
    for (int i = 0; i < n; i++)
    {
        if ( s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                return false;
            }
            if ((s[i] == ')' && stack[top] == '(') ||
                    (s[i] == '}' && stack[top] == '{') ||
                    (s[i] == ']' && stack[top] == '['))
            {

                top--;
            }
            else
            {

                return false;
            }
        }
    }
    return top == -1;
}

