#include<stdio.h>
#define max 5


int main()
{   
   int stack[max]={10,20,30};
   int top=2;

   int value;
   scanf("%d",&value);

   //performing push 
   

   if(top==max-1)
   {
    printf("overflow\n");
    printf("push not possible\n");

   }
   else{
     top++;
     stack[top]=value;

   }
   

   //updated stack

   for(int i=0;i<=top;i++)
   {
    printf("%d ",stack[i]);
   }
   


    return 0;
}