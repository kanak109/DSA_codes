#include<stdio.h>
#define stackSize 50

int myStack[stackSize], top = -1, cnt=0;

void push(int value)
{

    if(top>= stackSize - 1){
        printf("Stack is full!");
    }
    else{
        myStack[++top] = value;
    }
    cnt++;
}

void peek(){

    if(top<0){
        printf("Stack is empty!");
    }
    else{
        printf("%d", myStack[top]);
    }

}

void pop()
{
    if(top<0){
        printf("Stack is empty! Nothing to Pop.");
    }
    else{
        printf("Item popped: %d", myStack[top]);
        top--;
    }
    cnt--;
}




int main()
{
    printf("1. Push\n2. Peek\n3. Pop\n4. Print Stack\n\n");

    while(1){
    int s;
    printf("\nEnter option: ");
    scanf("%d", &s);

    switch(s){
    case 1:
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        push(value);

        break;

    case 2:
        peek();
        break;

    case 3:
        pop();
        break;

    case 4:
        for(int i=0; i< cnt; i++){
            printf("%d ", myStack[i]);
        }
        printf("\n");
        break;

    default :
         printf("Invalid input\n" );
    }

    }


    return 0;
}
