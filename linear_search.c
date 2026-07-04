#include<stdio.h>

int main()
{
    int a[]={1,29,34,35,25};
    int n=sizeof(a)/sizeof(a[0]);
    
    int element;
    printf("Enter the element to found\n");
    scanf("%d",&element);
    int flag=0;  //flag is nothing speacial 

    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            printf("found at index: %d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("NOt found\n");
        printf("search failed");
    }


    return 0;
}