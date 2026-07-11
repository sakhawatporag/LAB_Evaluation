#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
}Node;

Node *head = NULL, *tail = NULL;

void Create(int x)
{
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = x;
    n->next = NULL;
    if(head==NULL)
    {
        head = n;
        tail = n;
    }
    else{
        tail->next = n;
        tail = n;
    }
}

void traverse(){
    Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }
}

void frontInsertion(int x2)
{
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = x2;
    n->next = head;
    head = n;
   
    if (tail == NULL) {
        tail = n;
    }
}

void lastInsertion(int x3)
{
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = x3;
    n->next = NULL;
    if (tail == NULL) { 
        head = n;
        tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
}

void afterInsertion(int value, int after)
{   
    Node *temp = head;
    
   
    while(temp != NULL)
    {
        if(temp->value == after)
        {
            break;
        }
        temp = temp->next;
    }
    
    
    if (temp == NULL) {
        printf("Value %d not found in the list. Cannot insert %d.\n", after, value);
        return; 
    }

   
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = value;
    n->next = temp->next;
    temp->next = n;
    
    
    if (n->next == NULL) {
        tail = n;
    }
}

int main(){
    Create(13);
    Create(16);
    Create(20);
    Create(25);
    frontInsertion(52);
    lastInsertion(34);
    
    
    afterInsertion(21, 20); 
    
    traverse();

    return 0;
}