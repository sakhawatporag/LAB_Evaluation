#include <stdio.h>

int capacity = 5;
int stack[5];
int top = -1;

int isempty() {
    if (top == -1) {
      return 1;
    } else {
        return 0;
    }
}

int isfull() {
    if (top == capacity - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int value) {
    if (isfull()) {
        printf("Overflow Cannot push %d\n", value);
        return;
    } else {
        top++;
        stack[top] = value;
        printf("A new value (%d) is inserted\n", value);

        printf("Updated stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n\n"); 
    }
}

void pop() { 
    if (isempty()) {
        printf("Underflow! Stack is empty.\n");
        return; 
    } else {
        int poppedValue = stack[top]; 
        top--;

        printf("Value %d is popped\n", poppedValue);
        printf("Current stack: ");
        
        
        if (isempty()) {
            printf("(Empty)");
        } else {
            for (int i = 0; i <= top; i++) {
                printf("%d ", stack[i]);
            }
        }
        printf("\n");
        printf("Current top index is %d\n\n", top);
    }
}

int main() {   
   
    push(1);
    push(2);
    push(3);
    
    // pop();
    // pop();
    
    return 0;
}