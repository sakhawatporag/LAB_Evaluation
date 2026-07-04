//  push element in a stack and pop out element
//  first cheak the stack is empty or not then 
//  the opporation is do 


#include<stdio.h>

int capacity=5;
int stack[5];
int top=-1;

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }


}

int isFull()
{
    if(top==capacity-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int value)
{
    if (isFull ())
    {
        printf("over flow\n");
        return 0;
     
    }
    else{

        top++;
        stack[top]=value;
        printf("A new value has been inserted \n");

    }
    return ;
}

void pop()
{
    if(isEmpty())
    {
        printf("under flow\n");
    }
    else{
        printf("after pop top is changed..\n");
        top--;
    }
    return ;
}

void print_top()
{
    if(isEmpty())
    {
        printf("underflow\n");
    }
    else{
        printf("the value is : %d",stack[top]);
    }
}

int main()
{
    push(1);
    print_top();
    printf("\n");
    
    push(2);
    print_top();
    printf("\n");

     
    push(3);
    print_top();
    printf("\n");

    push(4);
    print_top();
    printf("\n");

    push(5);
    print_top();
    printf("\n");

    push(6);
    print_top();
    printf("\n");

    //now pop from the stack..

    pop();
    print_top();
    printf("\n");

    pop();
    print_top();
    printf("\n");


    pop();
    print_top();
    printf("\n");


    pop();
    print_top();
    printf("\n");

    //if underflow there is no element to pop
    pop();
    print_top();
    printf("\n");

    return 0;
}